#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int> p1 , pair<int,int> p2){
    return p1.first>p2.first;
}

int fractional_knapsack(vector<int> value, vector<int> weight, int W){
    //vector of pair for ration and then to sort it in decending order
    vector<pair<double,int>> ratio ;
    for(int i =0;i<value.size();i++){
        ratio.push_back({double(value[i])/weight[i],i});
    }
    sort(ratio.begin(),ratio.end(),compare);

    int ans = 0;
    for(int i =0 ; i<ratio.size();i++){
        if(W>=weight[ratio[i].second]){
            ans+=value[ratio[i].second];
            W-=weight[ratio[i].second];
        }else{
            ans+=ratio[i].first *W;
            W = 0;
            break;

        }
    }
    return ans;



}

int main(){
    vector<int> value ={100,60,120};
    vector<int> weight ={20,10,30};
    int W = 50;
    cout<<"result "<<fractional_knapsack(value,weight,W);


}