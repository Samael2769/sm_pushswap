#!/usr/bin/env bash
##
## EPITECH PROJECT, 2021
## Untitled (Workspace)
## File description:
## test
##

test()
{
    seq $2 | sort --random-sort | tr '\n' ' ' > .nb
    cat .nb |tr ' ' '\n' | sort -n | tr '\n' ' ' > .expected
    ./pushswap $1 $(cat .nb) &> .got
    diff -q .expected .got
    if [[ $? == 0 ]]
    then
        echo -e "\E[0;32m Test $3\E[0m \e[90m\e[1mPASSED\e\e[0m"
    else
        echo -e "\E[0;31m Test $3\e[0m \e[41mNOT PASSED\E[0m"
    fi
}

test bubble 10 sort_10
test bubble 100 sort_100
test bubble 1000 sort_1000
test bubble 10000 sort_10000



##seq 100 | sort --random-sort | sort -n | tr '\n' ' '

rm -f .expected
rm -f .got
rm -f .nb