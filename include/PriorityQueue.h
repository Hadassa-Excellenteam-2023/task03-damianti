#pragma once

#include "ultilities.h"
#include <iostream>
#include <list>
#include <exception>

/**
 * A template class representing a priority queue.
 *
 * The PriorityQueue class provides a priority-based container that allows insertion of elements
 * with priorities and retrieval of elements based on their priority. The elements are ordered
 * according to the comparison logic defined for the type `T` or the provided custom comparator.
 *
 * @tparam T The type of elements stored in the priority queue.
 */
template <typename T>
class PriorityQueue {
   
public:
	
	void push(const T& t); 
	T poll();

private:

	std::list<T> m_queue;
};
// ----------------------------------------------------------------------------
/**
 * Inserts an element into the priority queue.
 *
 * The function inserts the given element `t` into the priority queue in the appropriate
 * position based on its priority. The elements are ordered according to the comparison
 * logic defined for the type `T` or the provided custom comparator.
 *
 * @param t The element to be inserted into the priority queue.
 */
template<typename T>
void PriorityQueue<T>::push(const T& t)
{
    auto comp = MyComparator<T>();
    auto it = m_queue.begin();
    while (it != m_queue.end() && comp(*it, t) < 0) {
        ++it;
    }
    m_queue.insert(it, t);
}
// ----------------------------------------------------------------------------
/**
 * Removes and returns the highest priority element from the priority queue.
 *
 * The function removes the element with the highest priority from the priority queue
 * and returns it. The elements are ordered according to the comparison logic defined for
 * the type `T` or the provided custom comparator. If the priority queue is empty,
 * an exception of type `std::runtime_error` is thrown.
 *
 * @return The highest priority element in the priority queue.
 * @throws std::runtime_error if the priority queue is empty.
 */
template<typename T>
T PriorityQueue<T>::poll()
{
    if (m_queue.empty()) {
        throw std::runtime_error("PriorityQueue empty!");
    }

    T front = m_queue.front();
    m_queue.pop_front();

    return front;
}
