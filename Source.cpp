/*Dominik Bobrovski П43021 вариант 1) Задан массив A, содержащий 10 целых случайных чисел от 0 до 20.
Найти произведение элементов этого массива. (rand()%21) */
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