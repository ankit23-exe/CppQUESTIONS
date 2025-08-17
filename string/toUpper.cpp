#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char word[30]="appLlE";

    for(int i = 0 ; i <strlen(word);i++){
        if(word[i]>'Z'){
            word[i]=word[i]-32;
        }
        //cout<<word[i]<<" ";

    }
    cout<<word;

}