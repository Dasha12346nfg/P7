#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	
	const int n=5;
	int Array[n];
	
	cout << "������� �������� �������";
	for (int i = 0; i < n; i++) {
		cin >> Array[i];
	}
	cout << "��������� ������";
	for (int i = 0; i < n; i++) {
		cout << Array[i] << "\t";
	}
	cout<<endl;
}