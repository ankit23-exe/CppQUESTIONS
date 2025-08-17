#include<iostream>
using namespace std;
int XtopowN(int x ,int n){
    if(n==0) return 1;
    return x* XtopowN(x,n-1);
}

int main(){
    cout<<XtopowN(2,10);

}