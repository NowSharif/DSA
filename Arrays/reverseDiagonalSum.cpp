#include <iostream>
using namespace std;


void printReverseDiagonalSum(int arr[][4], int m , int n){
    int sum = 0;
    cout << "\nPrinting Reverse Diagonal: \n";
    for(int i=0; i<m; ++i){
        for(int j=0; j<n;++j){
            if(j==n-i-1){
                cout << arr[i][j] << "\n";
                sum += arr[i][j];
            }
            
        }
       
    }

     cout << "Reverse Diagonal Sum: " << sum << endl;

}

int main(){

    

    int arr[4][4] = {{1,2,3,-4}, {4,5,6,-3}, {7,8,9,-2}, {10,11,12,-1}};

    printReverseDiagonalSum(arr, 4, 4);


    return 0;
}



/*

Printing Reverse Diagonal:
-4
6
8
10
Reverse Diagonal Sum: 20

*/