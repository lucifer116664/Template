#include "Matrix.h"

int main()
{
    srand((unsigned)time(NULL));

	int choose;

	Matrix<int> intMatrix;
	Matrix<double> doubleMatrix;
	do
	{
		cout << "\tMENU:" << endl;
		cout << "1.Matrix of integer variables\n2.Matrix of double variables\n0.Quit" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1:
			intMatrix.runProgram();
			break;
		case 2:
			doubleMatrix.runProgram();
			break;
		case 0:break;
		default:
			cout << "ERROR!!!\n";
			break;
		}
	} while (choose != 0);

    return 0;
}
