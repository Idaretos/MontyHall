#!/bin/bash

# Number of iterations
n=10

# Compile MontyHall.cpp
g++ MontyHall.cpp -o MontyHall

# Array to hold time values
declare -a time_values

for ((i=1; i<=n; i++))
do
    # Get the start timestamp
    start_time=$(python -c 'import time; print(int(time.time() * 1000))')

    # Execute the script
    ./MontyHall 1000000 300

    # Get the end timestamp
    end_time=$(python -c 'import time; print(int(time.time() * 1000))')

    # Calculate and print elapsed time
    elapsed_time=$((end_time - start_time))
    time_values+=($elapsed_time)
    echo "Run $i: $elapsed_time ms"

    # Introduce a delay of 1 second between iterations
    sleep 1
done

# Compute the sum of time values
sum=0
for time in ${time_values[@]}
do
    sum=$((sum + time))
done

# Calculate average time and print
average_time=$((sum / n))
echo "Average time over $n runs (c++): $average_time ms"
