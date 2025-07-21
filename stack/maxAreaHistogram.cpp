#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void maxAreaHistogram(vector<int> v){
    int n = v.size();
    stack<int> s;
    vector<int> nsl(n); //storing index
    vector<int> nsr(n); //storing index


    //next smaller left calculation
    nsl[0]=-1;
    s.push(0);
    for(int i =1;i<n;i++){
        int current = v[i];
        while(!s.empty() && current<=v[s.top()]){
            s.pop();
        
        } 
        if(s.empty()){
            nsl[i]=-1;
        }else{
            nsl[i]=s.top();
        }
        s.push(i);

    }
//print next right max
    for(int i =0;i<n;i++){
        cout<<nsl[i];
    }
    cout<<endl;

    while(!s.empty()){
        s.pop();
    }


    //next right smaller
    nsr[n-1]=n;
    s.push(n-1);
    for(int i=n-1 ;i>=0;i--){
        int current = v[i];
        while(!s.empty() && v[s.top()]>=current){
            s.pop();
        }
        if(s.empty()){
            nsr[i]=n;
        }else{
            nsr[i]=s.top();
        }
        s.push(i);
    }
    //printing right side lack 
    for (int i = 0; i < n; i++)
    {
        cout << nsr[i];
    }
    cout << endl;

    int maxarea =0;
    for(int i = 0;i<n;i++){
        int area = v[i] * (nsr[i]-nsl[i]-1);
        maxarea = max(area,maxarea);
    }
    cout<<"maxarea is "<<maxarea;
}


int main(){
    vector<int> heights ={2,1,5,6,2,3};
    maxAreaHistogram(heights);

}