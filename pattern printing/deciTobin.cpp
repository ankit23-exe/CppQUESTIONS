#include <iostream>
using namespace std;

void DeciToBin(int n)
{
    int bin=0;
    int k = 1;
    while (n)
    {
        int digi = n%2;
        bin += digi*k;
        k*=10;

        n/=2;
       
    }
    //return deciValue;
 
    cout<<bin;
}

int main()
{
    int n;
    cin >> n;
    DeciToBin(n);
}