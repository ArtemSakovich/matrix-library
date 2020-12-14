#include <random>
#include <iostream>
#include "matrix.h"
using namespace std;

void InputToArray(int a[10][10], int N, int M) {
	for (int i = 0; i < N; i++) {
		cout << "Input row " << i << ": " << endl;
		for (int j = 0; j < M; j++) {
			cin >> a[i][j];
		}
	}
};


void RandomMatrix(int a[10][10], int N, int M, int b, int c) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			a[i][j] = b + rand() % (c - b + 1);
		}
	}
};

void PrintMatrix(int a[10][10], int N, int M) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout.width(5);
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
};

int SumLine(int a[10][10], int N, int M, int k) {
	int s = 0;
	for (int i = 0; i < M; i++) {
		s += a[k][i];
	}
	return s;
};

int MaxMatrix(int a[10][10], int N, int M, int& maxi, int& maxj) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (a[i][j] > a[maxi][maxj]) { maxi = i; maxj = j; }
		}
	}
	return a[maxi][maxj];
};

void SortLine(int a[10][10], int N, int M, int k) {
	for (int i = 0; i < N; i++) {
		for (int j = i; j > 0; j--) {
			if (j > 0 && a[k][j] < a[k][j - 1]) {
				swap(a[k][j], a[k][j - 1]);
			}
		}
	}
};

int SortedLine(int a[10][10], int N, int M) {
	int i = 0;
	while (i < N) {
		int j = 0;
		bool lineIsSortedDesc = true;
		while (j < M - 1 && lineIsSortedDesc) {
			if (a[i][j] < a[i][j + 1]) { 
				lineIsSortedDesc = false; 
			}
			j++;
		}
		if (lineIsSortedDesc) {
			return i; 
		}
		i++;
	}
	return -1;
};

int ZeroColumn(int a[10][10], int N, int M) {
	
	for (int j = 0; j < M; j++) {
		for (int i = 1; i < N; i++) {
			//cout << "1: " << a[i - 1][j] << ", 2: " << a[i][j] << endl;
			if (a[i - 1][j] == 0 && a[i][j] == 0) {
				return j;
			} 
		}
	}
	return -1;
}
