#include <iostream>
using namespace std;


void linearSearch(int arr[][4], int m, int n, int target){
    bool found = false;

    for(int i=0; i<m ; ++i){
        for(int j=0; j<n; ++j){
            if(arr[i][j]==target){
                found = true;
                cout << "The element " << target << " is found at index : (" << i <<"," <<j << ")" << endl;
                return;
            }
        }
    }

    if(!found){
        cout << target << " not found!" << endl;
    }

}

int main(){

    

    int arr[4][4] = {{1,2,3,-4}, {4,5,6,-3}, {7,8,9,-2}, {10,11,12,-1}};
    int target = -3;

    linearSearch(arr, 4, 4, target);


    return 0;
}



/*
sample test case:

The element -3 is found at index : (1,3)

*/