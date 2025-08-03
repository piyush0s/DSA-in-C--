// wave print front 
#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>result;
   for(int j =0; j < mCols; j++){
       if (j %2 == 0){
           for(int i =0; i <nRows ; i++){
               result.push_back(arr[i][j]);
           }
       }else{
           for(int i=nRows -1; i >=0 ;i--){
               result.push_back(arr[i][j]);
           }
       }
     
   }
    return result;
}


// 54. Spiral Matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row * col;
        int count = 0;
        int startRow = 0;
        int endRow = row-1;
        int startCol = 0;
        int endCol = col -1;
        
        while(count < total ){
            for(int index = startCol ; index <= endCol && count < total ; index ++) {
                ans.push_back(matrix[startRow][index]);
                count ++;
            } 
            startRow++;

            for(int index = startRow ; index <= endRow && count <total ; index++){
                ans.push_back(matrix[index][endCol]);
                    count++;
                
            }
            endCol--;

            for(int index = endCol ; index >= startCol && count < total ; index -- ){
                ans.push_back(matrix[endRow][index]);
                count ++;
            }
            endRow--;

            for(int index = endRow ; index >= startRow && count < total ; index --){
                ans.push_back(matrix[index][startCol]);
                count ++;
            }
            startCol++;



        }
        return ans;
        
    }
};

//rotate array 90 degree

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int n = matrix.size();
       for(int i =0 ; i < n ; i++){
        for(int j = i+1 ; j <n ; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
       }

       for(int i =0 ; i <n ; i++){
        reverse(matrix[i].begin() , matrix[i].end());
       }
    }
};