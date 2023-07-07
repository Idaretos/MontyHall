# Monty Hall Problem Simulation

This repository contains implementations of the Monty Hall Problem simulation in multiple programming languages.

## C++ Implementation

The C++ implementation (`montyhall.cpp`) provides a simulation of the Monty Hall Problem.

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

## Python Implementation

The Python implementation (montyhall.py) provides a simulation of the Monty Hall Problem.

### Installation and Execution

To run the Python code, ensure you have Python installed. The code requires NumPy library to be installed as well.

```bash
pip install numpy
```

To execute the Python script, use the following command:

```bash
python MontyHall.py [iterations]
```

Replace [iterations] with the desired number of iterations for the simulation. If not provided, it defaults to 100,000 iterations.

## Shell Script
The MontyHall.sh shell script automates the execution of the C++ program for multiple runs and calculates the average execution time.

### Usage

To use the shell script, run the following command:

```bash
bash MontyHall.sh
```

The script will compile the montyhall.cpp file, execute the program with a specified number of iterations and choices, and calculate the average execution time over multiple runs. You can modify the script to adjust the number of runs and other parameters.
