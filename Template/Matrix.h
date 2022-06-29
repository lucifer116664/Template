#pragma once
#include <iostream>

using namespace std;

template <typename T>
class Matrix
{
public:

	int height, width;
	int count, finCount;
	int result;
	T** matrix;
	
	void SetSize();

	void createMatrix();

	void fillMatrix();

	void printMatrix();

	void showResult();

public:
	Matrix();

	void runProgram();

	~Matrix();
};