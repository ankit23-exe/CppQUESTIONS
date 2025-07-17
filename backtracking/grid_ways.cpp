#include <iostream>
#include<vector>
using namespace std;

int grid(int n , int m , int r, int c, string ans){


    if( r == n-1 && c ==m-1){
        cout<<ans<<endl;
        return 1;
    }
    if(r>=n || c>=m){
        return 0;
    }
    //right turn 
    int v1 =grid(n,m,r,c+1 ,ans+"R");
    int v2 = grid(n,m,r+1,c,ans+"D");
    return v1 + v2;
}

int main(){

    int n = 3;
    int m= 3;
    string ans ="";
    cout<<"total count is "<<grid(n,m,0,0,ans);
    //cout<<"hello";

}