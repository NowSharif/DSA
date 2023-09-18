
// Find last occurance of an element in a sorted array
//TC=O(logN) ; SC=O(1)
using namespace std;
#include <iostream>
#include <vector>

int lastOccurance(vector <int> arr, int target){

    int ans = -1;
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){

        if(arr[mid]== target){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }

        //imp
        mid = start + (end-start)/2;

    }

    return ans;
}

int main(){

    vector <int> arr;
    // arr = {-8, -1, -1 , 0, 1, 8, 8};
    // arr ={-78,  -78, 1, 1};
    arr = {-1, -1, -1, 0, 2, 2, 3, 5, 5};
    int target = 2;
    int lastIndex = lastOccurance(arr, target);

    if(lastIndex!=-1){
        cout << "The element " << target << " is last found in the array at index: " << lastIndex << endl;
    }
    else{
        cout << "The element " << target << " is not found in the array at any index :(" << endl;
    }

    return 0;
}



/*
sample test case output:

The element 2 is last found in the array at index: 5
*/