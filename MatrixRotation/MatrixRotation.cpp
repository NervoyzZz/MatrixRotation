// Nepryahin D. 

#include "stdafx.h"
#include <iostream>

#define N 3               // matrix size

// Matrix Generation
void MatrixGenerate(int matr [], int size)
{
	int k = 0;
	for (int i = 0; i < size; i++)
	    for (int j = 0; j < size; j++)
		    matr[i*size + j] = k++;
}

// Print Matrix
void PrintMatrix(int matr [],int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			std::cout << matr[i*size + j] << " ";
		std::cout << '\n';
	}
}


// Matrix Rotation
void MatrixRotation(int matr [], int size)
{
	// matrix transposition
	for (int i = 0; i < size; i++)
	    for (int j = 0; j < i; j++)
		    std::swap(matr[i*size + j], matr[j*size + i]);
    // set columns in right order
	for (int i = 0; i < size; i++)
	    for (int j = 0; j < size / 2; j++)
		    std::swap(matr[i*size + j], matr[i*size + (size - j - 1)]);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int M[N*N];
	MatrixGenerate(M, N);
	std::cout << "Before rotation" << '\n';
	PrintMatrix(M, N);
	MatrixRotation(M, N);
	std::cout << "After rotation" << '\n';
	PrintMatrix(M, N);
	// waiting for any char input
	char screenDelay;
	std::cin >> screenDelay;
	return 0;
}

