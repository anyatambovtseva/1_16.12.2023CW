#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, sum=0;
    cout << "Введите количество элементов массива: ";
    cin >> n;
    int* array = new int[n];
    for (int i = 0; i < n; i++)
    {
        *(array + i) = i*i;
    }
    cout << "элементы массива: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    cout << endl << "сумма элементов массива равна " << sum;
    return 0;
}
