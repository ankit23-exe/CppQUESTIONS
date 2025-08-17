#include <iostream>
using namespace std;
bool sortedARRcheck(int *arr,int n,int i){
    if (n - 1 == i)
        return true;

    if(arr[i]<=arr[i+1]) return sortedARRcheck(arr,n,i+1);
    else return false;
    
    //return false;
}


int main()
{
    int arr[]={1,2,0,5,7,9,13,16};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<sortedARRcheck(arr,size,0);
   
}