#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "butterfly enter the value of n ";
    cin >> n;
    cout << endl;
    for (int i = 1; i <= 2*n; i++)
    {
        int s =i;
        if(i>n){
            s=2*n-i+1;   
        }
        for (int j = 1; j <= s; j++)
        {
           cout<<"*"<<" ";
        }
        for(int j =1; j<=2*(n-s);j++){
            cout<<"  ";
        }
        for (int j = 1; j <= s; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}