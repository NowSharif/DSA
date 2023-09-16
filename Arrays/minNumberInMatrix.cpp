//Program to find the element with minimu value in a 2D matrix
#include <iostream>
#include <limits.h>
using namespace std;


int findMin(int arr[][4], int m, int n){
   int min = INT_MAX;

    for(int i=0; i<m ; ++i){
        for(int j=0; j<n; ++j){
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }

    return min;

}

int main(){

    int arr[4][4] = {{1,2,33,-4}, {4,5,6,-3}, {7,8,98,-2}, {10,-11,12,-1}};

    int minElement = findMin(arr, 4, 4);

    cout << "The element with minimum value in the matrix is: \n" << minElement << endl;

    return 0;
}



/*
 

 The element with minimum value in the matrix is: 
-11


*/