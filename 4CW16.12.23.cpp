#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, sum=0;
    cout << "������� ���������� ��������� �������: ";
    cin >> n;
    int* array = new int[n];
    for (int i = 0; i < n; i++)
    {
        *(array + i) = i*i;
    }
    cout << "�������� �������: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    cout << endl << "����� ��������� ������� ����� " << sum;
    return 0;
}