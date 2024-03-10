# CPU Scheduling Simulator

A comprehensive CPU Scheduling Simulator implemented in C, designed to demonstrate the workings and efficiency of various CPU scheduling algorithms. The simulator processes a series of predefined tasks, simulating real-world process scheduling as seen in operating systems.

## Features

- **Supports Multiple Scheduling Algorithms**: Including FIFO (First In, First Out), SJF (Shortest Job First), Priority Scheduling, and RR (Round Robin).
- **Simulates Real-World Process Handling**: Reads process instructions from an input file, simulates execution, and outputs performance metrics.
- **Performance Metrics**: Calculates and displays crucial scheduling performance metrics like CPU utilization, throughput, average turnaround time, and average waiting time in the ready queue.

## Getting Started

### Prerequisites

- GCC compiler or any standard C compiler.
- Basic understanding of terminal or command prompt usage.

### Compilation

Use the following command to compile the program:

```bash
gcc -pthread CPU-Scheduling_2.c -o cpu_scheduling
```

### Running the Simulation
Execute the compiled program with the desired scheduling algorithm and the input file:
```bash
./cpu_scheduling -alg <Algorithm> -input <InputFile>
```
Replace <Algorithm> with FIFO, SJF, PR, or RR and <InputFile> with the path to your input file.

### Input File Format
The input file should contain process instructions in the following format:
```php
proc <PID> <Priority> <CPU Burst 1> <IO Burst 1> ... <CPU Burst N> <IO Burst N>
sleep <Time in ms>
stop
```
Output
The simulator outputs various metrics like:

### CPU Utilization
- Throughput
- Average Turnaround Time
- Average Waiting Time in Ready Queue

### License
This project is open-source and available for educational and learning purposes. Feel free to explore, modify, and contribute to it as you delve deeper into the concepts of CPU scheduling.
