#include <iostream>
using namespace std;


void printMatrix(int arr[][4], int m, int n){  
    for(int i=0; i<m; i++){
        for(int j=0; j<n; ++j){
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    } 

}

void matrixTranspose(int arr[][4], int m , int n){
    int sum = 0;
    for(int i=0; i<m; ++i){
        for(int j=i; j<n;++j){
            swap(arr[i][j], arr[j][i]);
        }
       
    }

}

int main(){

    

    int arr[4][4] = {{1,2,3,-4}, {4,5,6,-3}, {7,8,9,-2}, {10,11,12,-1}};

    cout << "Printing before transpose: " << endl;
    printMatrix(arr, 4, 4);

    matrixTranspose(arr, 4, 4);

    cout << "Printing after transpose: " << endl;
    printMatrix(arr, 4, 4);


    return 0;
}




/*

Printing before transpose: 
1  2  3  -4
4  5  6  -3
7  8  9  -2
10  11  12  -1
Printing after transpose:
1  4  7  10
2  5  8  11
3  6  9  12
-4  -3  -2  -1


*/

