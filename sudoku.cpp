#include <iostream>
using namespace std;

void printsudoku(int arr[9][9]){
    for(int i =0;i<9;i++){
        for(int j =0 ;j<9;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
bool issafe(int sudoku[9][9], int row, int col,int digi){

    //vertical check 
    for(int i =0;i<9;i++){
        if(sudoku[i][col]==digi){
            return false;
        }
    }


    //horizontal check
    for (int i = 0; i < 9; i++)
    {
        if (sudoku[row][i] == digi)
        {
            return false;
        }
    }

    //grid check 
    int rowstart = (row/3)*3;
    int colstart = (col/3)*3;

    for(int i = rowstart ; i<=rowstart+2;i++){
        for (int j = colstart; j <= colstart + 2; j++){
            if(sudoku[i][j]==digi){
                return false;
            }
        }
    }





    return true;

}

    bool solve(int sudoku[9][9], int row, int col)
{
    int nextrow = row;
    int nextcol = col+1;

    if (row == 9)
    {
        printsudoku(sudoku);
        return true;
    }

    if(col+1 ==  9){
        nextrow = row+1;
        nextcol =0;

    }
    
    if(sudoku[row][col]!=0){
         return solve(sudoku,nextrow,nextcol);
    }
    for(int digi =1 ;digi<=9;digi++){
        if(issafe(sudoku,row,col,digi)){
            sudoku[row][col]=digi;
            if(solve(sudoku,nextrow,nextcol)){
                return true;
            }
            sudoku[row][col]=0;

        }

    }
    return false;
}

int main(){

    int sudoku[9][9] = {
        {0, 6, 8, 0, 0, 0, 9, 3, 0},
        {0, 4, 2, 0, 0, 0, 6, 0, 0},
        {1, 9, 0, 0, 8, 0, 0, 4, 0},

        {0, 8, 5, 2, 0, 1, 0, 0, 7},
        {7, 0, 0, 8, 9, 0, 0, 0, 0},
        {2, 0, 9, 0, 0, 7, 5, 0, 3},

        {0, 2, 0, 0, 0, 0, 0, 5, 0},
        {8, 5, 0, 0, 4, 0, 7, 6, 0},
        {4, 7, 3, 0, 5, 0, 0, 0, 9}};

    cout << solve(sudoku, 0, 0);
    

     
}