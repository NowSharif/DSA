
//Find the missing element in a sorted array
//TC=O(logN) ; SC=O(1)

#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector <int> nums){

    int n = nums.size();
    int ans = -1;
    int start = 0;
    int end  = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){

        int diff = nums[mid] - mid;

        if(diff ==1){
            start = mid+1;
        }
        else{
            ans = mid;
            end = mid-1;
        }


        mid = start + (end-start)/2;
    }  

    if(ans==-1){
        return n+1;
    }
    return ans+1;
}

int main(){

    // vector <int> arr{1,2,3,4,5,6,7};
     vector <int> arr{1,2,3,4,5,7,8,9,10};

    int missed = findMissing(arr);

    cout << "Missing element in the array is: "<< missed << endl;

    return  0;
}



/*
Missing element in the array is: 6

*/