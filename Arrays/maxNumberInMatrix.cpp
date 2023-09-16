
//Program to find the element with maximum value in a 2D matrix
#include <iostream>
#include <limits.h>
using namespace std;


int findMax(int arr[][4], int m, int n){
   int max = INT_MIN;

    for(int i=0; i<m ; ++i){
        for(int j=0; j<n; ++j){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }

    return max;

}

int main(){

    int arr[4][4] = {{1,2,33,-4}, {4,5,6,-3}, {7,8,98,-2}, {10,11,12,-1}};

    int maxElement = findMax(arr, 4, 4);

    cout << "The element with maximum value in the matrix is: \n" << maxElement << endl;

    return 0;
}



/*
sample test case:

The element with maximum value in the matrix is: 
98


*/