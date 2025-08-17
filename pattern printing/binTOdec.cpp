#include<iostream>
using namespace std;
#include<math.h>

int binToDeci(int n){
    int deciValue = 0;
    int k = 0;
    while(n){
        int digi = n%10;
        deciValue += digi * pow(2,k);
        k++;
        



        n/=10;
    }
    return deciValue;
}


int main(){
    int n;
    cin>>n;
    cout<<binToDeci(n);

}