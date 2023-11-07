// Copyright 2023 Flavien Solt, ETH Zurich.
// Licensed under the General Public License, Version 3.0, see LICENSE for details.
// SPDX-License-Identifier: GPL-3.0-only

#include <chrono>

#include <iostream>
#include <cassert>
#include <sstream>

static int get_sim_length_cycles(int lead_time_cycles)
{
  const char* simlen_env = std::getenv("SIMLEN");
  if(simlen_env == NULL) { std::cerr << "SIMLEN environment variable not set." << std::endl; exit(1); }
  int simlen = atoi(simlen_env);
  assert(lead_time_cycles >= 0);
  assert(simlen > 0);
  assert(simlen > lead_time_cycles);
  std::cout << "SIMLEN set to " << simlen << " ticks." << std::endl;
  return simlen - lead_time_cycles;
}

#include "Vtop.h"
#include "verilated.h"

#include <iostream>
#include <stdlib.h>
#include <chrono>

#define IN_DATA_WIDTH  2272
#define OUT_DATA_WIDTH 2048

typedef Vtop Module;

#define PATH_TO_METADATA "tmp/metadata.log"

void randomize_inputs(Module *my_module) {
  int random_input = rand();
  for (int i = 0; i < IN_DATA_WIDTH / 32; i++)
    my_module->in_data[i] = random_input + i;
}

/**
 * Runs the testbench.
 *
 * @param tb a pointer to a testbench instance
 * @param simlen the number of cycles to run
 */
long run_test(Module *my_module, int simlen) {
  srand(time(NULL)); // set random seed to current time
  auto start = std::chrono::steady_clock::now();

  for (int tick_id = 0; tick_id < simlen; tick_id++) {
    randomize_inputs(my_module);
    my_module->eval();
  }

  auto stop = std::chrono::steady_clock::now();
  long ret = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count();
  return ret;
}

int main(int argc, char **argv, char **env) {

  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(VM_TRACE);

  ////////
  // Get the env vars early to avoid Verilator segfaults.
  ////////

  std::cout << "Starting getting env variables." << std::endl;

  int simlen = get_sim_length_cycles(0);

  ////////
  // Instantiate the module.
  ////////

  Module *my_module = new Module;

  ////////
  // Run the experiment.
  ////////

  long duration = run_test(my_module, simlen);

#if !VM_TRACE
  std::cout << "Testbench complete!" << std::endl;
  std::cout << "Elapsed time: " << std::dec << duration << "." << std::endl;
#else // VM_TRACE
  std::cout << "Testbench with traces complete!" << std::endl;
  std::cout << "Elapsed time (traces enabled): " << std::dec << duration << "." << std::endl;
#endif // VM_TRACE

  delete my_module;
  exit(0);
}
