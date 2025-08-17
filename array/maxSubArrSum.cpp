#include <iostream>
using namespace std;

void MaxSubArrPrint(int arr[], int size)
{
    int maxARRsum=INT_MIN ;

    for (int i = 0; i < size; i++)
    {
        for (int k = i; k <= size - 1; k++)
        {
            int sum = 0;
            for(int p = i;p<=k;p++){
                sum+=arr[p];
            }
            if(maxARRsum<sum) maxARRsum=sum;
        }
        cout << endl;
    }
    cout<<maxARRsum;
}

int main()
{

    int arr[6] = {2, -3, 6, -5, 4,2};
    MaxSubArrPrint(arr, 6);
}