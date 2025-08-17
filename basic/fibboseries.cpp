#include <iostream>

using namespace std;
int main()
{

    int num;
    cout << "enter the range :";
    cin >> num;

    cout<<"1 ";
    int pre = 1;
    int cur = 1;

    for (int k = 2; k <= num; k++){
        
        cout<<cur<<" ";
        int temp = cur;
        cur+=pre;
        pre= temp;


    }
       
}
