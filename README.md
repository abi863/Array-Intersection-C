# Find the Intersection of Two Arrays in C

## Problem

Given two arrays, find the elements present in both arrays without using an additional frequency array or hash table.

## Example

**Array 1:** `1 2 3 4 5`

**Array 2:** `3 4 5 6 7`

**Output:** `3 4 5`

## Concepts Used

* Arrays
* Nested loops
* Conditional statements
* Linear search

## Approach

Traverse the first array and search for each element in the second array. Print an element if it exists in both arrays. Check previous elements in the first array to avoid duplicate output.

## Complexity

* Time Complexity: O(n² + nm)
* Auxiliary Space Complexity: O(1)

## Language

C
