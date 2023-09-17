

//48. Rotate Image

// https://leetcode.com/problems/rotate-image/description/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void printVector(vector <vector <int>> nums){
    for(int i=0; i<nums.size(); ++i){
        for(int j=0; j<nums[i].size(); ++j){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }

}


void swapCustom (int &a, int &b){

    int temp = a;
    a = b;
    b = temp;
}


void reverseCustom(vector <int> & arr){

    int low=0, high = arr.size()-1;

    while(low<high){
        // swap(arr[low], arr[high]);
        swapCustom(arr[low], arr[high]);
        low++;
        high--;

    }
}

void transposeOfMatrix(vector <vector <int>> &matrix){

    for(int i=0; i<matrix.size(); ++i){
        for(int j=i; j<matrix[i].size(); ++j){
            // swap(matrix[i][j], matrix[j][i]);
            swapCustom(matrix[i][j], matrix[j][i]);
        }
    }
}

void rotateImage(vector<vector<int>> &nums){

    transposeOfMatrix(nums);

    //reverse each row elements

    for(int i=0; i<nums.size(); ++i){
        // reverse(nums[i].begin(), nums[i].end());
        reverseCustom(nums[i]);
    }


}

int main(){

    // int m=3, n=3;
    int m=4, n=4;
    vector <vector <int>> arr;
    // arr = {{1,2,3}, {4,5,6}, {7,8,9}};

    arr = {{5,1,9,11}, {2,4,8,10}, {13,3,6,7}, {15,14,12,16}};

    cout << "Printing the vector before rotating: " << endl;
    printVector(arr);

    rotateImage(arr);

    cout<<"Printing the vector after rotating 90 degrees clockwise: " << endl;
    printVector(arr);


    return 0;
}




/*
sample test case output:

Printing the vector before rotating: 
5 1 9 11
2 4 8 10
13 3 6 7
15 14 12 16
Printing the vector after rotating 90 degrees clockwise:
15 13 2 5
14 3 4 1
12 6 8 9
16 7 10 11


*/