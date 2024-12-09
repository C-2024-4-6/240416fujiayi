#include <iostream>
using namespace std;
void sort(int* a, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - 1 - i; ++j)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void print(int* a, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int size;
    cout << "请输入数组元素个数: ";
    cin >> size;
    int* a = new int[size];
    cout << "请输入数组元素: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    sort(a, size);
    cout << "排序后的数组为: ";
    print(a, size);
    delete[] a;
    return 0;
}