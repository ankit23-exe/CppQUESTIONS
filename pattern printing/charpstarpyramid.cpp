#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;
    cout << endl;
    int ch = 64;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            ch++;
            cout << char(ch) << " ";
        }
        cout << endl;
    }
}