#include <iostream>
using namespace std;


void print2DArrayColWise(int arr[][4], int m , int n){

    cout << "\nPrinting 2D Array Column Wise: \n";
    for(int i=0; i<n; ++i){
        for(int j=0; j<m;++j){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

}

int main(){

    

    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9, 10, 11, 12}};

    print2DArrayColWise(arr, 3, 4);


    return 0;
}


/*
Printing 2D Array Column Wise:
1 5 9
2 6 10
3 7 11
4 8 12


*/