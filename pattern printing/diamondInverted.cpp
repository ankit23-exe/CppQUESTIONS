#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "diamond pyramid (n=side) enter the value of n ";
    cin >> n;
    cout << endl;
    int numOfStar = 2*n-1;
    for (int i = 1; i <= n; i++)

    {
        for (int k = 1; k<i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <=numOfStar; j++)
        {
            cout << "*" << " ";

        }
        numOfStar-=2;
        cout << endl;
    }
}