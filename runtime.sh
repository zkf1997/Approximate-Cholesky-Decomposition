#!/bin/bash

vertice=(100 1000 5000 10000 20000 50000)
edge=(500 1000 5000 10000 20000 50000 100000 500000)

for V in ${vertice[@]}
do
    for E in ${edge[@]}
    do
        if [[ $E -gt $(($V)) ]] && [[ $E -lt $(($V*50)) ]]
        then
            # to get exact cycles, run main without perf. 
            ./build/test/runtime $V $E 2 | tee -a "./log/runtime.txt"
         fi
    done
done
