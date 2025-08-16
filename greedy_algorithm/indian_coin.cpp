#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int min_coin(int V){
    vector<int> coin = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    int n = coin.size()-1;
    int count =0;
    for(int i = n;i>=0;i--){
        while(V >= coin[i]){
            count++;
            V-=coin[i];
        }   


    }
    return count;

}
int main(){
    
    int V = 590;
    cout<<min_coin(V);

}