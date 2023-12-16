#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m, **array;
	cout << "Введите размер двумерного массива:" << endl;
	cin >> n;
	cin >> m;
	array = new int* [n];
	for (int i = 0; i < n; i++)
		array[i] = new int[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			array[i][j] = rand();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
