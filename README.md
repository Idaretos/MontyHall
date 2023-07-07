# Monty Hall Problem Simulation

This repository contains a C++ implementation of the Monty Hall Problem simulation.

## montyhall.cpp

The `montyhall.cpp` file contains the source code for the Monty Hall Problem simulation.

### Compilation and Execution

To compile the code, use the following command:

```bash
g++ montyhall.cpp -o MontyHall
```

To execute the compiled program, run the following command:

```bash
./MontyHall [iterations]
```

Replace [iterations] with the desired number of iterations for the simulation. If not provided, it defaults to 10,000 iterations.

## MontyHall.sh

The MontyHall.sh shell script is provided to automate the execution of the C++ program for multiple runs and calculate the average execution time.

### Usage

To use the shell script, run the following command:

```bash
./MontyHall.sh
```

The script will compile the montyhall.cpp file, execute the program with a specified number of iterations and choices, and calculate the average execution time over multiple runs. You can modify the script to adjust the number of runs and other parameters.
