#include <iostream>
#include<fstream>
using namespace std;
int feather2()
{
	const int n=5;
	int arr[n];
	ifstream fin("1.txt");
	if (!fin.is_open()) {
		cout << "Ошибка открытия файла";
	}
	for (int i = 0; i < n; i++)
	{
		fin >> arr[i];
	}
	fin.close();
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
}