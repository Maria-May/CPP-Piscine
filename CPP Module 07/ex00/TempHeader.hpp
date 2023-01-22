#pragma once
template<typename T>
void swap(T &a, T &b)
{
	T c(a); a = b; b = c;
}

template<typename T>
const T &min(const T &a, const T &b)
{
	return b > a ? a : b;
}

template<typename T>
const T &max(const T &a, const T &b)
{
	return b < a ? a : b;
}
