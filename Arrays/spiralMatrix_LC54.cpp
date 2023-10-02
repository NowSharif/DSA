
// 54. Spiral Matrix
// https://leetcode.com/problems/spiral-matrix/


#include <iostream>
#include <vector>

using namespace std;


// TC = O(ROWS*COLS); SC = O(N) --for ans
vector <int> printSpiralOrder(vector <vector<int>> &matrix){

        vector <int> ans;
        int ROWS = matrix.size();
        int COLS = matrix[0].size();
        int totalElements = ROWS*COLS;
        int count = 0;

        int startingRow = 0;
        int endingCol = COLS-1;
        int endingRow = ROWS-1;
        int startingCol = 0;


        while(count < totalElements){

            //Print Starting Row
            for(int i=startingCol; i<=endingCol && count<totalElements; ++i){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;


            //Print Ending Column
            for(int i=startingRow; i<=endingRow && count<totalElements; ++i){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;


            //Print Ending Row
            for(int i=endingCol; i>=startingCol && count<totalElements; --i){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;


            //Printing Starting Column
            for(int i=endingRow; i>=startingRow && count<totalElements; --i){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;


        }


        return ans;


}

int main(){

    // vector <vector <int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
     vector <vector <int>> matrix = 
                                    { 
                                        {1,2,3,4,5,6}, 
                                        {7,8,9,10,11,12},
                                        {13,14,15,16,17,18},
                                        {19,20,21,22,23,24},
                                        {25,26,27,28,29,30}
                                        };

    vector <int> ans;

    cout << "The spiral order of the given matrix is: " << endl;
    ans = printSpiralOrder(matrix);

    for(int i=0; i<ans.size(); ++i){
        cout << ans[i] << " " ;
    }


    return 0;
}




/*
sample test case output:

The spiral order of the given matrix is: 
1 2 3 4 5 6 12 18 24 30 29 28 27 26 25 19 13 7 8 9 10 11 17 23 22 21 20 14 15 16



*/