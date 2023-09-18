

//Find peak element in a mountain array
// TC: O(logN) ; SC=O(1)

#include <iostream>
#include <vector>

using namespace std;


int findPeak(vector <int> nums){
    int peak = -1;
    int n = nums.size();

    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;

    while(start < end){
        
        if(nums[mid]<nums[mid+1]){
            start = mid+1; //in Zone-A
        }
        else{
            end = mid; //catch--> making end=mid+1 will make us lose the peak in Zone-B
        }

        mid = start + (end-start)/2;

    }

    return start;
}

int main(){

    vector <int> arr;
    arr = {-10, -1, 22, 44, 55, 57, 38, 11};
    // arr = {3,4,1};
    // arr = {3,2,1};
    // arr = {1,2,3};


    int peakIndex = findPeak(arr);

    if(peakIndex !=-1){
        cout << "The peak element of the array is found at index: " << peakIndex << endl;
    }
    else{
         cout << "The peak element is not found in the array!" << endl;
    }
    
    return 0;
}



/*
sample test case output:

The peak element of the array is found at index: 5


*/