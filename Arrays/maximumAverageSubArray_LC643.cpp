
// 643. Maximum Average Subarray I
// https://leetcode.com/problems/maximum-average-subarray-i/

#include <iostream>
#include <vector>

using namespace std;


// TC = O(N*N) ; SC = O(1)
    double bruteForceApproach(vector <int> &nums, int &k){
        int n = nums.size();
        int i = 0, j= k-1;
        int maxSum = INT_MIN;

        while(j<n){

            int currSum = 0;

            for(int x=i; x<=j; ++x){
                currSum+= nums[x];
            }

            maxSum = max(maxSum, currSum);
            ++i;
            ++j;
        }

        return (double)maxSum/k;


    }




    // TC = O(N) ; SC = O(1)
    double SlidingWindowApproach(vector <int> &nums, int &k){
        int n = nums.size();
        int i=0, j=k-1;
        int sum = 0, maxSum = INT_MIN;

        for(int x=i; x<=j; ++x){
            sum+=nums[x];
        }

        maxSum = max(maxSum, sum);

        j++;
        while(j<n){
            sum-=nums[i++];
            sum+=nums[j++];

            maxSum = max(maxSum, sum);

        }

        double ans = maxSum/(double)k;

        return ans;
    }



int main(){

    vector <int> nums = {1,12,-5,-6,50,3};
    int k= 4;
    // double result = bruteForceApproach(nums, k);
    double result = SlidingWindowApproach(nums, k);

    

    return 0;
}