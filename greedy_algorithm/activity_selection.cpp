#include<iostream>
#include<vector>
using namespace std;

int activity_selection(vector<int> start,vector<int> end){
    int count = 1;
    int cur_end = end[0];
    for(int i = 1 ; i <start.size();i++){
        if(cur_end<=start[i]){ //non overlapping
            count++;
            cur_end=end[i];
        }
    }
    return count;

}

int main(){
    vector<int> start ={1,3,0,5,8,5};
    vector<int> end = {2,4,6,7,9,9};
    cout<<activity_selection(start,end);
}
