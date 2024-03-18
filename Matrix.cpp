#include <iostream>
#include "Matrix.h"
using namespace std;

Matrix::Matrix(){}

Matrix::~Matrix() {}

void Matrix::set_fil(int _fil) {
	fil = _fil;
}
int Matrix::get_fil() {
	return fil;
}
void Matrix::set_col(int _col) {
	col = _col;
}
int Matrix::get_col() {
	return col;
}
void Matrix::mostrarmat(int MAT[MAX][MAX], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << MAT[i][j] << "\t";
		}
		cout<<endl;
	}
}

void Matrix::cargarmat(int MAT[MAX][MAX], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			cout << "MAT[" << i << "][" << j << "]= ";
			cin >> MAT[i][j];
		}
}

float Matrix::promedio(int MAT[MAX][MAX], int m, int n) {
	float prom, s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			s = s + MAT[i][j];
	prom = s / (m * n);
	return prom;
}
int Matrix::mayor(int MAT[MAX][MAX], int m, int n) {
	int may = MAT[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (MAT[i][j] > may)
				may = MAT[i][j];
	return may;
}
