
// Find first occurance of an element in a sorted array
//TC=O(logN) ; SC=O(1)
using namespace std;
#include <iostream>
#include <vector>

int firstOccurance(vector <int> arr, int target){

    int ans = -1;
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){

        if(arr[mid]== target){
            ans = mid;
            end = mid-1;
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
    arr = {-988, -9, -1 , 0, 1, 8, 98};
    // arr ={-78, 1, 99, 985};
    int target = 8;
    int firstIndex = firstOccurance(arr, target);

    if(firstIndex!=-1){
        cout << "The element " << target << " is first found in the array at index: " << firstIndex << endl;
    }
    else{
        cout << "The element " << target << " is not found in the array at any index :(" << endl;
    }

    return 0;
}



/*
sampel test case output:

The element 8 is first found in the array at index: 5
*/