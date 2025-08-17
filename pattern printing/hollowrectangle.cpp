#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "hollow rectangle(n=height , width = n+1) enter the value of n ";
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+1; j++)
        {
            if (i == 1 || i == n)
            {
                cout << "*" << " ";
            }
            else
            {
                if (j == 1 || j == n+1)
                    cout << "*" << " ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }
}