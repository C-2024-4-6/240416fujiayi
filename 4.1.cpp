#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    vector<int> u;
    cout << "Enter ten numbers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        int num;
        cin >> num;
        bool isNew = true;
        for (int j = 0; j < u.size(); j++)
        {
            if (u[j] == num)
            {
                isNew = false;
                break;
            }
        }
        if (isNew)
        {
            u.push_back(num);
        }
    }
    cout << "The distinct numbers are£º" << endl;
    for (int i = 0; i < u.size(); i++)
    {
        cout << u[i] << " ";
    }
    return 0;
}