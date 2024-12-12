#include<iostream>
using namespace std;
int main()
{
    const int size = 10;
    int list[size];
    bool isUnique;

    cout << "Enter ten numbers: ";
    bool m = true;
    for (int i = 0; i < size; i++)
    {
        cin >> list[i];
        isUnique = true;
        for (int j = 0; j < i; j++)
        {
            if (list[i] == list[j])
            {
                isUnique = false;
                break;
            }
        }
        if (m) {
            cout << "The distinct numbers are:";
            m = false;
        }
        if (isUnique)
        {
          cout<< list[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
