#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main(){
    list<int> ll;
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);
    cout<<"size is "<<ll.size()<<endl;
    cout<<"front is "<<ll.front()<<endl;
    
    list<int> :: iterator itr;
    for(itr= ll.begin();itr!=ll.end();itr++){
        cout<<(*itr)<<" -> ";
    }
    cout<<"null";
    

}