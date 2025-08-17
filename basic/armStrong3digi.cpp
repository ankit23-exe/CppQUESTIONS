#include <iostream>
using namespace std;
int main(){
    cout<<"enter the 3 digit number";
    int n;
    cin>> n;
    int sum =0;
    int copy = n;
    while(copy!=0){
        int digit = copy%10;
        sum += digit*digit*digit;
        copy/=10;

    }
    if(sum == n) cout<<"its armstrong";
    else cout<<"its not armstrong";

}
