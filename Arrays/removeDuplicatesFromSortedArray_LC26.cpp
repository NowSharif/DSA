
//26. Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include <iostream>
#include <vector>

using namespace std;


// TC = O(N) ; SC = O(1) ; we're modifying the array
int removeDuplicates(vector <int> &nums){

        int i=1, j=0;
        int n = nums.size();
        while(i<n){

            if(nums[i]==nums[j]){
                i++; //dont consider the element (not unique)
            }
            else{
                ++j;
                nums[j] = nums[i];
                ++i;

                // nums[++j] = nums[i++];
            }

        }

        return j+1;
}

int main(){

    vector <int> arr = {0,0,1,1,1,2,2,3,3,4};
    // vector <int> arr = {1, 1, 2};

    int newSize = removeDuplicates(arr);

    cout << "Array elements without duplicates are: " <<endl;
    for(int i=0; i<newSize; ++i){
        cout << arr[i] << " " ;
    }
    return 0;
}



/*
sample test case output:

Array elements without duplicates are: 
0 1 2 3 4

*/