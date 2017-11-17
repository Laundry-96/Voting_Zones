# Neighboring ZIP CODE EVALUATOR

This program takes in a comma separated value (CSV) file containing zip codes and their coordinates and finds the neighboring zip codes for each zip code.

## COMPILING

This program MUST be compiled with C++11.  Therefore, you must enable support for C++11 by adding -std=c++0x immediately after g++ (NOTE: gl does not suppport C++11)

Example: g++ -std=c++0x back.cpp -o back

In addition, this program was compiled and tested with  GCC version 6.3.0

## CSV FORMAT

This program requires a headerless CSV file.
The CSV should have 9 columns in total in the order:
poname, zip, latitude, pop2001, state, area, longitude, sumblkpop, coords
