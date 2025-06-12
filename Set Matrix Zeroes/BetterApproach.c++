/*
In this approach, we try for a better solution. 
We keep the track of row and column which contains 0 in an array naming rowTrack and colTrack.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}}; //Matrix Values
    int rowSize = matrix.size(); //Row Size
    int colSize = matrix[0].size(); //Column Size
    vector<bool> rowTrack(rowSize,false); //Boolean Vector to keep track of row
    vector<bool> colTrack(colSize,false); //Boolean Vector to keep track of column
    for(int i = 0;i<rowSize;i++)
    {
        for(int j = 0;j<colSize;j++)
        {
            if(matrix[i][j]==0)
            {
                rowTrack[i] = true; //Initializing True which is having 0 at particular row
                colTrack[j] = true; //Initializing True which is having 0 at particular column
            }
        }
    }
    for(int i = 0;i<rowSize;i++)
    {
        for(int j = 0;j<colSize;j++)
        {
            if(rowTrack[i] || colTrack[j])
            matrix[i][j] = 0; //Updating the value of that particular row and column with 0
        }
    }
     for(int i = 0;i<rowSize;i++)
    {
        for(int j = 0;j<colSize;j++)
        cout << matrix[i][j] << " "; //Printing
        cout << endl;
    }
    return 0;
    
    /*
    The time complexity of the code is 
    First loop -- O(n*m)
    Second Loop -- O(n*m)
    Third Loop -- O(n*m)
    
    Overall Time Complexity is O(n*m)
    Space Complexity is O(n*m + n + m) // we are declaring an array to keep track so n+m
    */
    
}
