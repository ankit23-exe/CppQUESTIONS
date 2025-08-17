#include <iostream>
using namespace std;
int main()
{
    cout << "enter year";
    int n;
    cin >> n;
    int flag = 0;

    if (n % 4 == 0)
    {
        if (n % 100 == 0)
        {
            if (n % 400 == 0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        else
        {
            flag = 0;
        }
    }
    else{
        flag = 0;
    }

    if (flag == 1)
        cout << "its leap year";
    else
        cout << "not leap year";
}