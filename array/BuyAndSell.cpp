#include <iostream>
using namespace std;

void buySell(int arr[], int size){
    int bestBuy[size];
    int profit[size];
    //cout<<size;

    int minva = arr[0];

    int maxprofit = 0 ;
    for(int i =1 ; i<size ; i++){
        bestBuy[i]= minva;

        minva = min(minva,arr[i]);
        profit[i]=arr[i]-bestBuy[i];

        if(maxprofit<profit[i]) maxprofit = profit[i];


    }
    

    cout<<maxprofit;

    
} 
int main()
{
    int arr[6] = {7,1,5,3,6,4};
    buySell(arr, 6);
}