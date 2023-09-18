
// Binary Search for sorted array only
// TC: O(logN) ; SC=O(1)

#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector <int> &brr, int target){

    int n = brr.size();
    int start = 0, end = n-1;
    int mid = start + (end- start)/2;

    while(start <=end){

        if(brr[mid]==target){
            return mid;
        }

        else if(target > brr[mid]){
            start = mid+1;
        }

        else if(brr[mid]>target){
                end = mid-1;
        }

        //remember well
        mid = start + (end- start)/2;
    }

    return -1;
}


int main(){

    // int n = 7;
    vector <int> arr{-77, -8, 9, 65, 123, 888, 1425};

    int target = 123;

    int index = binarySearch(arr,target);

    if(index!=-1){
        cout << "\nThe target " << target << " is found ar index: " << index << endl;
    }

    else{
        cout << "\nThe target " << target << " is not found!" << endl;

    }

    return 0;
}


/*
sample test case output:

The target 123 is found ar index: 4

*/