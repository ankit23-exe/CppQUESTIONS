#include <iostream>
using namespace std;
#include<vector>
void duplicate(string s  , string &ans, int i , vector<bool> &map){

    if(i==s.length()){
        cout<<"ans "<<ans;
        return;
    }

    if(map[s[i]-'a']==true) return duplicate(s,ans,i+1,map);
    if(map[s[i]-'a']==false){
        map[s[i]-'a'] = true;
        ans+=s[i];
        return duplicate(s,ans,i+1,map);
    }
}
int main(){
    string s = "appnnacollegge";
    vector<bool> map(26,false);
    string ans = "";
    duplicate(s,ans,0,map);


}

