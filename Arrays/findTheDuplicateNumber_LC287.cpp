
// 287. Find the Duplicate Number
// https://leetcode.com/problems/find-the-duplicate-number/description/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


    // TC = O(N*logN) ; SC= O(1)
    int usingSorting(vector <int> &nums){
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int i=0; i<n-1; ++i){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }


    // TC = O(N) ; SC = O(1) ;  we're modifying the array elements(marking them negative)
    int usingNegativeMarking(vector <int> & nums){
        int n = nums.size();
        for(int i=0; i<n; ++i){
            int ind = abs(nums[i]);
            if(nums[ind] < 0){
                return ind;
            }

            nums[ind]*=-1;
        }

        return -1;

    }



    //TC = O(N); SC = O(1); we're rearranging the array elements
    int usingPositioningMethod(vector <int> &nums){

        while(nums[0] != nums[nums[0]]){
            swap(nums[0], nums[nums[0]]);
        }

        return nums[0];

    }



int main(){

    // vector <int> nums = {3,1,3,4,2};
    vector <int> nums = {1,3,4,2,2};
    // vector <int> nums = {2,2,2,2,2};

    // int ans = usingSorting(nums);
    // int ans = usingNegativeMarking(nums);
    int ans = usingPositioningMethod(nums);


    if(ans!=-1){
        cout << "The duplicate number in the array is: " << ans << endl;
    }
    else{
        cout << "No duplicate element found in the array!" << endl;
    }

    return 0;
}



/*
sample test case ouput:

The duplicate number in the array is: 2

*/