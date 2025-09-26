#ifndef MERGESORT_H_GUARD
#define MERGESORT_H_GUARD

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define UNIT_TESTING

void mergesort(int size, int values[]);
void mergesortRange(int* values, int startIndex, int endIndex);
void mergeRanges(int* values, int startIndex, int midPoint, int endIndex);
bool needsSorting(int rangeSize);

#endif
