#include<iostream>
using namespace std;

int tile(int n){
    if (n == 0 ) return 1;
    if(n==1) return 1;
    //verticle
    int v = tile(n-1);
    //horizontal 
    int h = tile(n-2);
    return v+h;

}

int main(){
    cout<<tile(4);
}
