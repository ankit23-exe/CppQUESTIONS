#include <iostream>
using namespace std;

void MaxSubArrPrint(int arr[], int size)
{
    int maxARRsum = 0;

    for (int i = 0; i < size; i++)
    {
        int sum = 0 ; 
        for (int k = i; k <= size - 1; k++)
        {
            sum += arr[k];
            maxARRsum = max(maxARRsum,sum);
            
           
        }
        cout << endl;
    }
    cout << maxARRsum;
}

int main()
{

    int arr[6] = {2, -3, 6, -5, 4, 2};
    MaxSubArrPrint(arr, 6);
}