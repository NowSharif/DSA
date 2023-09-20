
// Leetcode 33. Search in Rotated Sorted Array

// https://leetcode.com/problems/search-in-rotated-sorted-array/description/

#include <iostream>
#include <vector>

using namespace std;

int findPivotIndex(vector <int> &arr){
        int n = arr.size();
        int s=0, e=n-1, mid = s + (e-s)/2;

        while(s<=e){

            if(s==e){
                return s;
            }

            else if((mid+1<n) && arr[mid] >arr[mid+1]){
                return mid;
            }
            else if((mid-1>=0) && arr[mid] < arr[mid-1]){
                return mid-1;
            }
            else if(arr[mid] < arr[s]){
                e = mid-1;
            }

            else{
                s = mid+1;
            }

            mid = s+(e-s)/2;
        }

        return -1;

    }


    int binarySearchCustom(vector<int> &arr, int start, int end, int target){

        int mid = start + (end-start)/2;

        while(start<=end){
            if(arr[mid]==target){
                return mid;
            }

            else if(target>arr[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }

            mid = start + (end-start)/2;
        }

        return -1;
    }



    int search(vector<int>& nums, int target) {
        int pivotIndex = findPivotIndex(nums);
        int n = nums.size();
        int ans = -1;
        if(target>=nums[0] && target<=nums[pivotIndex]){
            ans = binarySearchCustom(nums,0,pivotIndex, target);
        }
        else{
            ans = binarySearchCustom(nums,pivotIndex+1, n-1, target);
        }

        return ans;
    }




int main(){
    vector <int> vec;
    vec = {4,5,6,7,0,1,2};
    int target = 1;

    int resIndex = search(vec, target);
    if(resIndex!=-1){
            cout << "The target " << target << " is found at: " << resIndex << endl;
    }
    else{
        cout << "The target " << target << " is not found!" << endl;
    }
     return 0;
}



/*
sample test case output:
The target 1 is found at: 5

*/