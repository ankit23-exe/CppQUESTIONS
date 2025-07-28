#include<iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std;

int main(){
    string s = "aabccxb";
    vector<int> freq(26,0);
    queue<char> q;

    for(char c:s){
        int n = c - 97;
        freq[n]++;
        q.push(c);
        while(!q.empty() && freq[q.front()-97]>1){
            q.pop();
        }

        if(q.empty()){
            cout<<"-1";
        }else{
            cout<<q.front();
        }
    }

}