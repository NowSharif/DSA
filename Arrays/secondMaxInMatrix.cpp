//Program to find second largest element in a 2D matrix
// TC: O(n*n) ; SC: O(1)
#include <iostream>
#include <limits.h>
using namespace std;


int findSecondLargest(int arr[][4], int m, int n){
   int max = INT_MIN;
   int secondLarge = INT_MIN;

    for(int i=0; i<m ; ++i){
        for(int j=0; j<n; ++j){
            
            if(arr[i][j]>max){
                secondLarge = max;
                max = arr[i][j];
            }
            else if(arr[i][j]>secondLarge && arr[i][j]!=max){
                secondLarge = arr[i][j];
            }
        }
    }

    return secondLarge;

}

int main(){

    int arr[4][4] = {{1,2,33,-4}, {4,5,691,-335}, {7,80,-98,-2}, {10,-11,129,1000}};

    int secondLargest = findSecondLargest(arr, 4, 4);

    cout << "The second largest in the matrix is: \n" << secondLargest << endl;

    return 0;
}



/*
sample test case:
The second largest in the matrix is: 
691

*/