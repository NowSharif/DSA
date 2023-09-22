
//Seach in a nearly sorted array
// (i)th element in a sorted array can be in (i)th/(i-1)th/(i+1)th index in a nearly sorted array

#include <iostream>
#include <vector>
using namespace std;

int searchNearlySorted(vector <int> &arr, int n, int target){

    int start = 0, end = n-1;
    int mid = start + (end-start)/2;

    while(start <= end){
        if((mid-1>=0) && (arr[mid-1] == target)){
            return mid-1;
        }
        if(arr[mid] == target){
            return mid;
        }
        if((mid+1<n) && (arr[mid+1] == target)){
            return mid+1;
        }

        if(arr[mid] < target){
            start = mid+2;
        }
        else{
            end = mid-2;
        }

        mid = start + (end-start)/2;

    }

    return -1;
}

int main(){

    int n = 7;

    vector <int> arr = {-10, 20, 30, 40, 50, 60, 70};

    // int n =1;
    // vector <int> arr;
    // arr.push_back(-33);

    int target = 40;

    int index = searchNearlySorted(arr, n, target);


    if(index!=-1){
        cout << "The target " << target << " is found at index: " << index << endl; 
    }
    else{
        cout << "The target " << target << " is not found!" << endl;
    }


    return 0;
}



/*
sample testcase output:

The target 40 is found at index: 3

*/