#include <iostream>
#include <cstring>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"enter the string";
    getline(cin,str);
    int count = 0;

    for(char ch :str){
        if(ch<='z' && ch>='a'){
            count++;
        }
    }
    cout<<"total small case are "<<count;
} 