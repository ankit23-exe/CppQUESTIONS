#include<iostream>
using namespace std ;
#include <cstdlib> // For abs() with integers

int trapWater(int arr[],int size){
    int leftMax[size];
    int rightMax[size];
    int Result = 0;
    int lmax=arr[0];
    int rmax = arr[size-1];
    cout<<"size is "<<size<<endl;

    for(int i = 1 ;i <size;i++){
        leftMax[i]=lmax;
        lmax=max(lmax,arr[i]);

    }
    
    for(int i = size-2;i>=0;i--){
        rightMax[i]=rmax;
        rmax=max(rmax,arr[i]);


    }
    for(int i = 1 ; i<size-1;i++ ){
        //Result+= abs(leftMax[i]-rightMax[i])-arr[i];
        int c = min(leftMax[i],rightMax[i])-arr[i];
        if(c>0) Result+=c;
    }
    return Result;
}

int main(){
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    int size = sizeof(arr)/sizeof(arr[1]);
    cout<<trapWater(arr,size);

}