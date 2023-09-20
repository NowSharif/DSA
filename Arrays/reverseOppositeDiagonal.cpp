

// Find the reverse oppposite diagonal in a 2D matrix

#include <iostream>
#include <vector>
using namespace std;


void printReverseOppDiagonal(vector <vector<int>> matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    cout << "\nReverse Opposite Diagonal Elements are: \n";
    for(int i=n-1, j=0; i>=0 && j<m; i--, j++){
        cout << matrix[i][j] << " " ;
    }
}

int main(){

    vector<vector<int>> arr;
    arr = {{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {-1,-2,-3,-4,-5}};


    printReverseOppDiagonal(arr);

    return 0;
}


/*
sample test case output:
Reverse Opposite Diagonal Elements are:
-1 12 8 4


*/