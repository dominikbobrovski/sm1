#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*  n 1
	srand(time(0));
   const int n = 100;
   int arr[n];
   int a = 0;
   for(int i = 0;i < n;i++)arr[i] = rand() % 100;
   for(int i = 0;i < n;i++) {
   a = a + arr[i];
   }
   cout << a << endl;
   */




   /*  n 2
	srand(time(0));
	const int n = 80;
	int arr[n];
	int a = 0;
	for(int i = 0;i < n;i++)arr[i] = rand() % 100;
	for(int i = 0;i < n;i++) {
   if(arr[i] > 0){
	 a = a + arr[i];
   }
	}
	cout << a << endl;
	*/
	/* n 3
	 srand(time(0));
	 const int n = 60;
	 int arr[n];
	 int a = 0;
	 for(int i = 0;i < n;i++)arr[i] = rand() % 100;
	 for(int i = 0;i < n;i++) {
	 if(arr[i] % 3 == 0)
	   a++;
	 }
	 cout << a << ' ';
	 */
	 /* n 4
	srand(time(0));
	 const int n = 90;
	 int arr[n];
	 int a = 1;
	 for(int i = 0;i < n;i++)arr[i] = rand() % 100;
	 for(int i = 0;i < n;i++) {
	 if(arr[i] % 2 == 1)
	   a = a * arr[i];
	 }
	 cout << a << ' ';
	*/
}