#!/usr/bin/python3
import sys

def facotrize(num):
    fac1 = 2
    while (num % fac1):
        if (fac1 <= num):
            fac1 +=1
        fac2 = num // fac1
    return (fac2, fac1)

if len(sys.argv) != 2:
    sys.exot(f"Wrong : {sys.argv[0]} <file_path>")
filename = sys.argv[1]

file = open(filename, 'r')
lines = file.readlines()

for line in lines:
    num = int(line.rstrip())
    fac2, fac1 = factorize(num)
    print(f"{num} = {fac2} * {fac1}")
