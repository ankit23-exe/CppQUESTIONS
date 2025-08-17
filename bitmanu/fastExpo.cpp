#include<iostream>
using namespace std;

int fastExpo(int x, int n){
    int ans = 1;
    int p =x;
    while(n>0){
        int digi = n&1;
        if(digi==1)
            ans *= p;
        p *= p;
        n=n>>1;
    }
    
    return ans;
}

int main(){
    cout<<fastExpo(2,20);

}