#include <iostream>
#include "matrix.h"
using namespace std;
int main()
{
	// main array
	int arr[10][10];
	// array dimensions;
	int n, m;
	// range for array's random numbers
	int a = 0, b = 500;
	// line number to sort (for SumLine and SortLine methods)
	int k;
	// variables for MaxMatrix method
	int maxi = 0, maxj = 0;
	
	// get array dimentions and line number
	cout << "enter number of lines: "; cin >> n;
	cout << "enter number of columns: "; cin >> m;
	cout << "enter line number (to sum and sort): "; cin >> k;

	// get array from console input
	//InputToArray(arr, n, m);
	
	// generating test matrix with randoms
	RandomMatrix(arr, n,m, a, b);

	// print generated matrix
	cout << "Generated matrix with randoms: " << endl;
	PrintMatrix(arr, n, m);

	// sum line k
	cout << "Sum of elemensts from line " << k << " is ";
	cout << SumLine(arr, n, m, k) << endl;

	// value and position of max element from the matrix
	cout << "Max element from the matrix is ";
	cout << MaxMatrix(arr, n, m, maxi, maxj) << endl;
	cout << "It's coordinates are: " << maxi << "," << maxj << endl;
	
	// Soring row nuber k
	SortLine(arr, m, n, k);
	cout << "Sorted line " << k << " is: ";
	for (int j = 0; j < m; j++) {
		cout << arr[k][j] << ", ";
	}
	cout << endl;
	
	// find for line sorted desc and retuns it's number or -1 if not found
	cout << "Line number sorted descending is: ";
	cout << SortedLine(arr, n, m) << endl;

	// find for column which contains 2 zeros one-by-one
	cout << "Number of column which contain 2 zeros one-by-one is: ";
	cout << ZeroColumn(arr, n, m) << endl;

}