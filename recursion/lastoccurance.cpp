#include <iostream>
using namespace std;
#include <vector>

int lastoccurance(vector<int> &v, int target, int i)
{
    if(i ==v.size() ) return -1;
    int idx = lastoccurance(v,target,i+1);
    if(idx ==-1){
        if(v[i]==target) return i;

    }

    return idx;
   
}

int main()
{
    vector<int> v = {1, 2, 3, 5, 2,6, 7, 3};
    // int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    cout << lastoccurance(v, target, 0);
}