#include "Matrix.h"

template<typename T>
Matrix<T>::Matrix()
{
	count = 0;
	finCount = 0;
	result = 0;
	height = 0;
	width = 0;
}

template<typename T>
void Matrix<T>::SetSize()
{
	cout << "Enter the number of lines:" << endl;
	cin >> height;
	cout << "Enter the number of columns:" << endl;
	cin >> width;
}

template<typename T>
void Matrix<T>::runProgram()
{
	SetSize();
	createMatrix();
	fillMatrix();
	printMatrix();
	showResult();
}

template<typename T>
void Matrix<T>::createMatrix()
{
	matrix = new T*[height];
	for (int i = 0; i < height; i++)
		matrix[i] = new T[width];
}

template<typename T>
void Matrix<T>::fillMatrix()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
			 matrix[i][j] = (T)rand() / 200 - 100;
	}
}

template<typename T>
void Matrix<T>::printMatrix()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
			cout << matrix[i][j] << "\t";
		cout << endl;
	}
}

template<typename T>
void Matrix<T>::showResult()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j != width - 1)
			{
				if (matrix[i][j] < 0 && matrix[i][j + 1] < 0)
					count++;
				else
				{
					if (matrix[i][j] > 0 && matrix[i][j + 1] > 0)
						count++;
				}
			}
		}
		if (count > finCount)
		{
			finCount = count;
			result = i + 1;
		}
		count = NULL;
	}
	cout << "The " << result << " line has the most numbers with the same signs\n";
}

template<typename T>
Matrix<T>::~Matrix()
{
	for (int i = 0; i < height; i++)
		delete[] matrix[i];
	delete[] matrix;
}

template class Matrix<int>;
template class Matrix<double>;