#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second<p2.second;

}
int main(){
    vector<pair<int,int>> chain = {{5,24},{39,60},{5,28},{27,40},{50,90}};

    sort(chain.begin(),chain.end(),compare);

    int count =1;
    int last_end = chain[0].second;

    for(int i = 1; i<chain.size();i++){
        if(last_end<chain[i].first){
            count++;
            last_end = chain[i].second;
        }
    }

    cout<<count;
}