/*Dominik Bobrovski �43021 ������� 1) ����� ������ A, ���������� 10 ����� ��������� ����� �� 0 �� 20.
����� ������������ ��������� ����� �������. (rand()%21) */
#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	long long x = 1;
	srand(time(0));
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 21;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	for (int i = 0; i < n; i++) {
		x = x * arr[i];
	}
	cout << endl << x << endl;




	
}