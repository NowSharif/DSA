

// 724. Find Pivot Index
// https://leetcode.com/problems/find-pivot-index/description/

#include <iostream>
#include <vector>

 using namespace std;


// TC = O(N*N) ; SC = O(1)
   int bruteForceApproach( vector <int> & nums){
        int n = nums.size();

        for(int i=0; i<n; ++i){
            int lsum = 0, rsum = 0;

            //calculating lsum

            for(int j = i-1; j>=0; --j){
                lsum +=nums[j];
            }

            //calculating rsum 

            for(int j=i+1; j<n; ++j){
                rsum += nums[j];
            }
            // cout << "Index- " << i << ": " << "lsum = " << lsum << " , rsum = " << rsum << endl;
            if(lsum == rsum){
                return i;
            }
        }

        return -1;
    }








// TC = O(N); SC = O(N)
    int prefixSumApproach(vector <int> & nums){
        int n = nums.size();
        vector <int> lsum(n,0);
        vector <int> rsum(n, 0);

        for(int i=1; i<n; ++i){
            lsum[i] = lsum[i-1] + nums[i-1];
            // cout << "lsum[" << i << "] = " << lsum[i] << endl;
        }

        for(int i=n-2; i>=0; --i){
            rsum[i] = rsum[i+1] + nums[i+1];
            // cout << "rsum[" << i << "] = " << rsum[i] << endl;
        }

        for(int i=0; i<n; ++i){
            if(lsum[i]==rsum[i]){
                return i;
            }
        }

        return -1;
    }






 int main(){

    vector <int> nums = {1,7,3,6,5,6};

    // vector <int> nums = {1,2,3};

    int ans = bruteForceApproach(nums);

    // int ans = prefixSumApproach(nums);

    if(ans!=-1){
        cout << "Pivot element is found at index: " << ans << endl;
    }
    else{
        cout << "Pivot element is not found !!" << endl;
    }

    return 0;
 }



 /*
 sample test case output:

 Pivot element is found at index: 3

 */