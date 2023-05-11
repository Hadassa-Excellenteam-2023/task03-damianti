## creator
Damian Tissembaum

# PriorityQueue Program

This program implements a template priority queue data structure (includes a comparator 
template called `MyComparator`. The priority queue allows for the insertion and retrieval of elements based on their priority.

## Table of Contents
- [PriorityQueue Class](#priorityqueue-class)
- [MyComparator](#mycomparator)

## PriorityQueue Class

The `PriorityQueue` class is a template class that represents a priority queue data structure. It allows for the insertion and retrieval of elements based on their priority. The elements are ordered according to the comparison logic defined for the type `T` or the provided custom comparator.

### Public Member Functions

- `void push(const T& t)`: Inserts an element into the priority queue based on its priority.
- `T poll()`: Removes and returns the highest priority element from the priority queue.

### Usage Example

Usage example is in the main function, using Dog class and float class for the priorityqueue container.