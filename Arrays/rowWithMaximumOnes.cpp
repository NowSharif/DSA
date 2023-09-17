

// 2643. Row With Maximum Ones
// https://leetcode.com/problems/row-with-maximum-ones/description/

#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;



// TC= O(ROWS*COLS) ; SC=O(2)
vector <int> rowWithMaxOnes(vector <vector <int>> nums){
    vector <int> ans;
    int n = nums.size();
    int rowNumber = -1, onesCount = INT_MIN;

    for(int i=0; i<n ; ++i){

        int currentRowOnes = 0;

        for(int j = 0; j<nums[i].size(); ++j){
            
            if(nums[i][j]==1){
                
                currentRowOnes++;
            }

        }
       

        if(onesCount < currentRowOnes){
            onesCount = currentRowOnes;
            rowNumber = i;
        }

    }

    

    ans.push_back(rowNumber);
    ans.push_back(onesCount);

    return ans;
}

int main(){

    int m = 5, n = 4;
    vector <vector<int>> arr = {{1,0,0,0}, {0,1,1,1}, {0,1,1,0} ,{0,1,1,0}, {0,0,1,0}};

    vector <int> res;
    res = rowWithMaxOnes(arr);
  
    cout << "\n\nMaximum no.of ones present in row: " << res.at(0) << " and the max no.of ones are: " << res.at(1);
    return 0;
}



/*
output:

Maximum no.of ones present in row: 1 and the max no.of ones are: 3

*/