//Program to find second smallest element in a 2D matrix
// TC: O(n*n) ; SC: O(1)
#include <iostream>
#include <limits.h>
using namespace std;


int findSecondSmallest(int arr[][4], int m, int n){
   int min = INT_MAX;
   int secondSmall = INT_MAX;

    for(int i=0; i<m ; ++i){
        for(int j=0; j<n; ++j){
            
            if(arr[i][j]<min){
                secondSmall = min;
                min = arr[i][j];
            }
            else if(arr[i][j]<secondSmall && arr[i][j]!=min){
                secondSmall = arr[i][j];
            }
        }
    }

    return secondSmall;

}

int main(){

    int arr[4][4] = {{1,2,33,-4}, {4,5,6,-335}, {7,8,-98,-2}, {10,-11,12,-100}};

    int secondSmallest = findSecondSmallest(arr, 4, 4);

    cout << "The second smallest in the matrix is: \n" << secondSmallest << endl;

    return 0;
}



/*
sample test case:

The second smallest in the matrix is: 
-100

*/