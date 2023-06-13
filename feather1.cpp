#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int n=5;
	int Array[n];
	for (int i = 0; i < n; i++) {
		int a = 1 + rand() % 100;
		Array[i] = a;
	}
	cout << "¬веденный массив";
	for (int i = 0; i < n; i++) {
		cout << Array[i] << "\t";
	}
	cout << endl;
}