#include <iostream>
using namespace std;


void printDiagonalSum(int arr[][3], int m , int n){
    int sum = 0;
    cout << "\nPrinting Diagonal: \n";
    for(int i=0; i<m; ++i){
        for(int j=0; j<n;++j){
            if(i==j){
                cout << arr[i][j] << "\n";
                sum += arr[i][j];
            }
            
        }
       
    }

     cout << "Diagonal Sum: " << sum << endl;

}

int main(){

    

    int arr[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};

    printDiagonalSum(arr, 4, 3);


    return 0;
}


/*
Printing Diagonal:
1
5
9
Diagonal Sum: 15

*/