#include <iostream>
using namespace std;


void print2DArrayRowWiseSum(int arr[][4], int m , int n){

    cout << "\nPrinting 2D Array Row Wise Sum: \n";
    for(int i=0; i<m; ++i){
        int sum = 0;
        for(int j=0; j<n;++j){
            sum+= arr[i][j];
        }
        cout << sum << endl;
    }

}

int main(){

    

    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9, 10, 11, 12}};

    print2DArrayRowWiseSum(arr, 3, 4);


    return 0;
}




/*

Printing 2D Array Row Wise Sum:
10
26
42

*/


