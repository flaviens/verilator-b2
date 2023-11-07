# Repo to reproduce a malloc failure in Verilator

We provide a Docker image for better reproducibility.

You can either pull the image or make it.

To pull the Docker image:

To make the Docker image:
```bash
make build_docker
```

Then, to run the Docker image:
```bash
make run_docker
```

To reproduce the bug inside the Docker container:
```bash
SIMLEN=100 ./obj_dir/Vtop
```
