#include <iostream>
using namespace std;

void MaxSubArrPrint(int arr[], int size)
{
    int maxARRsum = INT16_MIN;
    int curSum = 0;

    for (int i = 0; i < size; i++)
    {
       
        curSum+=arr[i];
        

        maxARRsum = max(curSum,maxARRsum);
        if (curSum < 0)
            curSum = 0;
    }
    cout<<maxARRsum;
        
   
}
int main()
{
    int arr[6] = {-10, -3, -2, -5, -6, -4};
    MaxSubArrPrint(arr, 6);
}