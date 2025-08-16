#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2){
    return p1.second > p2.second;
}

int maxProfit(vector<pair<int,int>> job){
    sort(job.begin(), job.end(), compare);
    
    int ans = job[0].second;
    int start = job[0].first + 1;
    
    for(int i = 1; i < job.size(); i++){
        if(start < job[i].first){
            ans += job[i].second;
            start = job[i].first + 1;
        }
    }
    return ans;
}

int main(){
    vector<pair<int,int>> job = {{4,20}, {1,10}, {1,40}, {1,30}};
    cout << maxProfit(job);
    return 0;
}
