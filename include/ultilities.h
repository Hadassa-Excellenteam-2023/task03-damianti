#pragma once

template <typename T>
struct MyComparator {
	T operator()(T a, T b) const {
		return a - b;
	}
};