
// 532. K-diff Pairs in an Array
// https://leetcode.com/problems/k-diff-pairs-in-an-array/description/

#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>

using namespace std;

 // Fails for -> nums = [1,2,4,4,3,3,0,9,2,3] , k=3; Expected = 2, output = 3;
    // TC = O(N*N) ; SC = O(N)
    int bruteForce(vector <int> nums, int &k){

        int n = nums.size();
        set <pair <int ,int>> ans;
        for(int i=0; i<n; ++i){
            for(int j=i+1; j<n; ++j){
                if(abs(nums[j]-nums[i])==k){
                    ans.insert({nums[i], nums[j]});
                }
            }
        }
        int res = ans.size();

        return res;
    }






// Sliding Window - 2 Pointer approach
    // TC = O(N*logN) ; SC = O(N)
    int sortedTwoPointer(vector <int> nums, int &k){

        sort(nums.begin(), nums.end());

        int i=0, j=1, n = nums.size();

        set <pair <int, int>> ans;

        while(j<n){
            int diff = nums[j]-nums[i];

            if(diff == k){
                ans.insert({nums[i], nums[j]});
                ++i;
                ++j;
            }
            else if(diff > k){
                ++i;
            }
            else{
                ++j;
            }

            if(i==j) ++j;

        }

        return ans.size();
    }







int binarySearch(vector <int> nums, int start, int end, int target){

        int mid;
        while(start<=end){
            mid = start + (end-start)/2;

            if(nums[mid]==target){
                return mid;
            }
            else if(target > nums[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            
        }

        return -1;
    }

    // Using Sorting & Searching using Binary Search/Linear search
    // TC = O(N*logN) ; SC = O(N)
    int usingBinarySearch(vector <int> nums, int &k){

        sort(nums.begin(), nums.end());
        int n = nums.size();
        set <pair <int, int>> ans;

        for(int i=0; i<n; ++i){
            if(binarySearch(nums, i+1, n-1, nums[i]+k)!=-1){
                ans.insert({nums[i], nums[i]+k});
            }

        }


        return ans.size();
    }




int main(){

    // vector <int> nums = {3,1,4,1,5};
    // int k= 2;

    vector <int> nums = { 1,2,3,4,5};
    int k=1;

   
   

    // int ans = bruteForce(nums, k);
    int ans = sortedTwoPointer(nums, k);
    // int ans = usingBinarySearch(nums, k);

    if(ans>0){
        cout << "The count of K-diff pairs are: " << ans<< endl;
    }
    else{
        cout << "No K-diff pairs found." << endl;
    }

    return 0;
}



/*
sample test case output:

The count of K-diff pairs are: 4


*/

