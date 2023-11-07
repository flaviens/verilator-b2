# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop \
	Vtop___024root__DepSet_h84412442__0 \
	Vtop___024root__DepSet_heccd7ead__0 \
	Vtop___024root__DepSet_heccd7ead__1 \
	Vtop___024root__DepSet_heccd7ead__2 \
	Vtop___024root__DepSet_heccd7ead__3 \
	Vtop___024root__DepSet_heccd7ead__4 \
	Vtop___024root__DepSet_heccd7ead__5 \
	Vtop___024root__DepSet_heccd7ead__6 \
	Vtop___024root__DepSet_heccd7ead__7 \
	Vtop___024root__DepSet_heccd7ead__8 \
	Vtop___024root__DepSet_heccd7ead__9 \
	Vtop___024root__DepSet_heccd7ead__10 \
	Vtop___024root__DepSet_heccd7ead__11 \
	Vtop___024root__DepSet_heccd7ead__12 \
	Vtop___024root__DepSet_heccd7ead__13 \
	Vtop___024root__DepSet_heccd7ead__14 \
	Vtop___024root__DepSet_heccd7ead__15 \
	Vtop___024root__DepSet_heccd7ead__16 \
	Vtop___024root__DepSet_heccd7ead__17 \
	Vtop___024root__DepSet_heccd7ead__18 \
	Vtop___024root__DepSet_heccd7ead__19 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop___024root__Slow \
	Vtop___024root__DepSet_h84412442__0__Slow \
	Vtop___024root__DepSet_heccd7ead__0__Slow \
	Vtop___024root__DepSet_heccd7ead__1__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
