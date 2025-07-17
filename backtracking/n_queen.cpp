#include <iostream>
#include <vector>
using namespace std;

void printboard(vector<vector<char>> chessboard){
    int n = chessboard.size();
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cout << chessboard[i][j] << " ";
        }
        cout << endl;
    }
    //cout<<endl;
}

bool issafe(vector<vector<char>> &chessboard, int row,int col){
    int n = chessboard.size();
    //horixzontal checking
    for(int i = 0 ; i<n;i++){
        if(chessboard[row][i]=='q'){
            return false;
        }
    }

    //vertical check
    for (int i = 0; i <n; i++)
    {
        if (chessboard[i][col] == 'q')
        {
            return false;
        }
    }
    
    // diagonal left
    for (int i = row, j = col; i >=0 && j >=0; i--, j--)
    {
        if (chessboard[i][j] == 'q')
        {
            return false;
        }
    }
    // diagonal right
    for (int i = row, j = col; i >=0 && j <n; i--, j++)
    {
        if (chessboard[i][j] == 'q')
        {
            return false;
        }
    }

    return true;
}

int nqueen(vector<vector<char>> &chessboard, int row)
{

    int n = chessboard.size();
    int count =0;

    if(row == n){
        printboard(chessboard);
        
        cout<<"---------------------------"<<endl;

        return true;
    }
    for(int j = 0;j<n;j++){

        if(issafe(chessboard,row,j)){
            chessboard[row][j] = 'q';
            count += nqueen(chessboard, row + 1);
            chessboard[row][j] = '.';
        }
    }
    return count;
}

    int main()
{
    vector<vector<char>> chessboard;

    int n =4; //  chess size here

    for(int i =0;i<n;i++){
        vector<char> row;

        for(int j =0;j<n;j++){
            row.push_back('.');
        }
        chessboard.push_back(row);
    }


    //printboard(chessboard);
    int c = nqueen(chessboard,0);
    cout<<"the total count is "<<c;




    return 0;
}