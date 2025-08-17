#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "inverted rotated half pyramid enter the value of n ";
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(j<=n-i){
                cout<<"  ";
            }
            else cout<<"*"<<" ";
           
            
        }
        cout << endl;
    }
}