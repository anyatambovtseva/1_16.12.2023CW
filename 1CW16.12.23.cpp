#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    int n;
    cout << "¬ведите количество элементов массива: ";
    cin >> n;
    int* array = new int[n];
    for (int i = 0; i < n; i++)
    {
        *(array + i) = rand();
    }
    for (int i = 0; i < n; i++)
    {
        cout << *(array + i) << " ";
    }
	return 0;
}