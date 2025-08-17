#include <iostream>
using namespace std;
int main()
{
    cout << "enter number";
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << "its even";
    else
        cout << "its odd";
}