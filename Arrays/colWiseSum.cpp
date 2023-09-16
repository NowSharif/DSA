#include <iostream>
using namespace std;


void print2DArrayColWiseSum(int arr[][4], int m , int n){

    cout << "\nPrinting 2D Array Column Wise sum: \n";
    for(int i=0; i<n; ++i){
        int sum =0;
        for(int j=0; j<m;++j){
            sum += arr[j][i];
        }
        cout << sum << " ";
    }

}

int main(){

    

    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9, 10, 11, 12}};

    print2DArrayColWiseSum(arr, 3, 4);


    return 0;
}


/*

Printing 2D Array Column Wise sum:
15 18 21 24


*/