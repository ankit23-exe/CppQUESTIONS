#include<iostream>
using namespace std;
#include<vector>

int firstoccurance(vector<int> &v,int target,int i){
    if(i>v.size()) return -1;
    if(v[i]==target) return i;
    return firstoccurance(v,target,i+1);
}


int main(){
    vector<int> v = {1, 2,3,5,6,7,3};
    //int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    cout << firstoccurance(v,target, 0);
}