#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void next_greatest(vector<int> &arr, vector<int> &ans)
{
    stack<int> s;
    ans[arr.size()-1]=-1;
    s.push(arr[arr.size()-1]);

    for(int i = arr.size()-2;i>=0;i--){
        while(!s.empty() && arr[i]>=s.top()){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
            s.push(arr[i]);
        }else{
            ans[i]=s.top();
            s.push(arr[i]);
        }
        
    }
    
}

int main()
{
    vector<int> arr = {6,8,0,1,3};

    vector<int> ans(5, 0);
    next_greatest(arr, ans);

    for (int i : ans)
    {
        cout << i << " ";
    }
}