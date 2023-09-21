

// Search a number in a 2D Array

#include <iostream>
#include <vector>

using namespace std;


vector <int> search2DArray(vector<vector <int>> matrix, int target){

    vector <int> ans;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int n = rows*cols;

    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;


    while(start<=end){
        
        int i = mid/cols;
        int j = mid%cols;

        int currNumber = matrix[i][j];
        if(currNumber==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

        else if(target < currNumber){
            end  = mid-1;
        }
        else{
            start = mid+1;
        }


        mid = start + (end-start)/2;


    }

    return ans;

    
}

int main(){

    vector <vector <int> > arr;
    arr = {{-4, -3, -2, -1}, {1, 2, 3, 4}, {5, 6, 7, 8}};

    int target = 7;
    vector <int> res;
    res  = search2DArray(arr, target);


    if(!res.empty()){
        cout << "The target " << target << " is found at row: " << res[0]+1 << " and column: "<< res[1]+1 << endl;
    }
    else{
        cout << "The target " << target << " is not found!!" << endl;
    }

    return 0;
}



/*
sample test case output:

The target -1 is found at row: 1 and column: 4

*/