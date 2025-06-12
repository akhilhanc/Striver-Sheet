/*
In this approach what we are trying to do is, we first traverse the matrix and locate the value "0"
After locating the value we pass the row and column to a function to set negative value i.e "-1"
Once we initialize those values we again traverse the matrix and set "0" wherever there is "-1"
*/


#include<bits/stdc++.h>
using namespace std;
void setNegative(int row,int column,vector<vector<int>> &matrix,int rowSize,int colSize) 
{
    for(int j = 0;i<colSize;j++)
    matrix[row][j] = -1; // Traverse the row
    for(int i = 0;i<rowSize;i++)
    matrix[i][col] = -1; // Traverse the column
}
int main()
{
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    int rowSize = matrix.size();
    int colSize = matrix[0].size();
    for(int i = 0;i<rowSize;i++)
    {
        for(int j = 0;j<colSize;j++)
        {
            if(matrix[i][j]==0)
            {
                setNegative(i,j,matrix,rowSize,colSize); //Function call to set negative values
                matrix[i][j] = 0; //resetting the original value as it was initialised with "-1"
            }
        }
    }
    for(int i = 0;i<rowSize;i++)
    {
        for(int j = 0;j<colSize;j++)
        {
            if(matrix[i][j]==-1)
                matrix[i][j] = 0;  //Setting the values to 0
        }
    }

    for(int i = 0;i<rowSize;i++)
    {
        for(int j = 0;j<colSize;j++)
        cout << matrix[i][j] << " ";  //Printing the Matrix
        cout << endl; 
    }

    /*
    Time Complexity
    In the first loop T.C would be O(n*m*(n+m))
    In the second loop T.C would be O(n*m) //for setting the value of "-1"
    In the third loop T.C would be O(n*m) // for printing

    Overall Time Complexity --- O(n*m*(n+m))
    Space Complexity -- O(n*m) --- Matrix Storage 
    */
    
}
