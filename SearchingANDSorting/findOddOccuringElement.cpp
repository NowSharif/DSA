// Find the odd occuring element in an array (not sorted)...........no same elements would be next to each other more than 3 times


#include <iostream>
#include <vector>
using namespace std;

int findOddOccuringElement(vector <int> &nums, int n){

    int start = 0, end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){

        if(start==end){
            return start;
        }

        if(mid&1){
            if((mid-1>=0) && (nums[mid-1]==nums[mid])){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        else{
            if((mid+1<n) && (nums[mid]==nums[mid+1])){
                start = mid+2;
            }
            else{
                end = mid;
            }
        }

        mid = start + (end-start)/2;
    }


    return -1;
}


int main(){

    int n = 11;

    vector <int> arr = {1,1,5,5,9,2,2,3,3,4,4};

    // int n=22;
    // vector <int> arr = {1,1,5,5,2,2,3,3,4,4, 3,1,1,5,5,2,2,3,3,4,4};

    int index = findOddOccuringElement(arr, n);

    if(index!= -1){
        cout << "The odd occuring element is: " << arr[index] << endl;
    }
    else{
        cout << "No odd occuring element found!" << endl;
    }

    return 0;
}




/*
sample test case output:

The odd occuring element is: 9

*/