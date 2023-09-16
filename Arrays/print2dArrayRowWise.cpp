#include <iostream>
using namespace std;


void print2DArrayRowWise(int arr[][4], int m , int n){

    cout << "\nPrinting 2D Array Row Wise: \n";
    for(int i=0; i<m; ++i){
        for(int j=0; j<n;++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){

    

    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9, 10, 11, 12}};

    print2DArrayRowWise(arr, 3, 4);


    return 0;
}




/*
sample test case:

Printing 2D Array Row Wise:
1 2 3 4
5 6 7 8
9 10 11 12

*/