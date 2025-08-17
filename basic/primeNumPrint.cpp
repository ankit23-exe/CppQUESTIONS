#include <iostream>

using namespace std;
int main(){

    int num;
    cout<<"enter the range :";
    cin>>num;

    for(int k =2;k<=num;k++){
        int n =k;
        bool isPrime = true;

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime == true)
            cout << n<<" ";
    }

    


    

}
