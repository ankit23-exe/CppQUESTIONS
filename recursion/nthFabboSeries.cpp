#include<iostream>
using namespace std;
int ntFaboSeries(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return ntFaboSeries(n-1)+ntFaboSeries(n-2);
}

int main(){
    cout<<ntFaboSeries(9);
}