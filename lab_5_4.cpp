// lab_5_4.cpp 
// Кузьмич Максим
// Обчислення сум та добутків за допомогою рекурсії
// Лабораторна робота № 5_4
// Варіант 27

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double R5(const int N, const int k);
double R1(const int N, const int k, int i);
double R2(const int N, const int k, int i);
double R3(const int N, const int k, int i, double t);
double R4(const int N, const int k, int i, double t);

int main()
{
	int N;
	int k;

	cout << "N = "; cin >> N;
	cout << "k = "; cin >> k;

	cout << "(iter) R5 = " << R5(N, k) << endl;
	cout << "(rec up ++) R1 = " << R1(N, k, k) << endl;
	cout << "(rec up --) R2 = " << R2(N, k, N) << endl;
	cout << "(rec down ++) R3 = " << R3(N, k, k, 0) << endl;
	cout << "(rec down --) R4 = " << R4(N, k, N, 0) << endl;

}

double R5(const int N, const int k) {
	double counting5 = 0;
	int i = k;

	while (N >= i) {
		counting5 += pow(1. * i, 2) / (pow(1. * k, 2) + pow(1. * N, 2));
		i++;
	}

	return counting5;
}

double R1(const int N, const int k, int i) {
	if (i > N) {
		return 0;
	}
	else {
		double counting1 = pow(1. * i, 2) / (pow(1. * k, 2) + pow(1. * N, 2));
		return  counting1 + R1(N, k, i + 1);
	}
}
double R2(const int N, const int k, int i) {
	if (i < k) {
		return 0;
	}
	else {
		double counting2 = pow(1. * i, 2) / (pow(1. * k, 2) + pow(1. * N, 2));
		return counting2 + R2(N, k, i - 1);
	}
}
double R3(const int N, const int k, int i, double t) {
	double counting3 = pow(1. * i, 2) / (pow(1. * k, 2) + pow(1. * N, 2));
	t += counting3;
	if (i >= N) {
		return t;
	}
	else {
		return R3(N, k, i + 1, t);
	}
}
double R4(const int N, const int k, int i, double t) {
	double counting3 = pow(1. * i, 2) / (pow(1. * k, 2) + pow(1. * N, 2));
	t += counting3;
	if (i <= k) {
		return t;
	}
	else {
		return R4(N, k, i - 1, t);
	}
}

