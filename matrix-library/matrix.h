#pragma once
#define Matrix_H

void InputToArray(int a[10][10], int N, int M);
void RandomMatrix(int a[10][10], int N, int M, int b, int c);
void PrintMatrix(int a[10][10], int N, int M);
int SumLine(int a[10][10], int N, int M, int k);
int MaxMatrix(int a[10][10], int N, int M, int& maxi, int& maxj);
void SortLine(int a[10][10], int N, int M, int k);
int SortedLine(int a[10][10], int N, int M);
int ZeroColumn(int a[10][10], int N, int M);