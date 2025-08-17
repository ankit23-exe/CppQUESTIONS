#include<iostream>
using namespace std;
int main(){
    cout<<"enter the value of n:";
    int n;
    cin>>n;
   
    for(int i =0;i<n;i++){
        int v = i%2==1?0:1;
        for(int j =0;j<=i;j++){
            cout<<v<<" ";
            v= v==1?0:1;
        }
        cout<<"\n";
    }
}