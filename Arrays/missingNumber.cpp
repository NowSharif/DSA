
// Find missing number in an array 
// LeetCode : 268. Missing Number
// https://leetcode.com/problems/missing-number/description/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Using XOR to cancel out same numbers & leave ans with missing one; TC = O(N) ; SC=O(1)
int findMissingNum4(vector <int> arr){
    int n = arr.size();

    int res = 0;

    for(int i=0; i<=n; ++i){
        res^=i;
    }

    for(int i=0; i<n; ++i){
        res^=arr[i];
    }


    return res;
}

//Using sum of first N numbers ; TC=O(N); SC=O(1)
int findMissingNum3(vector <int> arr){
    int n = arr.size();
    int vectorSum = 0;

    for(int i=0; i<arr.size(); ++i){
        vectorSum += arr[i];
    }

    int totalSum = 0 + (n*(n+1)/2);

    int res = totalSum - vectorSum;

    return res;

}




//Using sorting; TC=O(N*logN); SC=O(1)
int findMissingNum2(vector <int> arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; ++i){
        if(arr[i]!=i){
            return i;
        }
    }

    return n;
}

//Approach-1: Bruteforce ; TC=O(N*N); SC=O(1)
int findMissingNum1(vector<int> v){
    int n = v.size();

    for(int ele=0; ele<=n; ele++){
        bool isFound = false;

        for(int j=0; j<n; ++j){
            if(v[j]==ele){
                isFound = true;
                break;
            }
        }

        if(!isFound){
            return ele;
        }
    }

    return -1;
}

int main(){

    int n = 8;
    vector <int> arr;
    arr = {0,8,2,3,4,1,6,5};

    // int missing = findMissingNum1(arr);
    // int missing = findMissingNum2(arr);
    int missing = findMissingNum3(arr);

    //  int missing = findMissingNum4(arr);


    cout << "Missing number in the array is: " << missing << endl;

    return 0;
}



/*
output:
Missing number in the array is: 7
*/