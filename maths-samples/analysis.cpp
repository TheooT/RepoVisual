#include "analysis.h"
#include "pch.h"

size_t fibo(size_t n) 
{
	if (n<=2)
		return n;
	return fibo(n - 1) + fibo(n - 2);
}