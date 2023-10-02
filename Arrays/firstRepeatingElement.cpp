
// GFG: First Repeating Element
// https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1


#include <iostream>
#include <unordered_map>
#include <limits.h>
using namespace std;



// TC = O(N*N); SC=O(1)
int bruteForceApproach(int arr[], int n){
        
        for(int i=0; i<n; ++i){
            for(int j= i+1; j<n; ++j){
                if(arr[i]==arr[j]){
                    return (i+1);
                }
            }
        }
        
        return -1;
    }
    


    // TC = O(N); SC=O(N)
    int usingExtraHashMap(int arr[], int n){
        unordered_map<int, int> hash;
        
        for(int i=0; i<n; ++i){
            hash[arr[i]]++;
        }
        
        for(int i=0; i<n; ++i){
            if(hash[arr[i]]>1){
                return (i+1);
            }
        }
        
        return -1;
    }
    


 int findArrayMax(int arr[], int n){
        int max = INT_MIN;
        for(int i=0; i<n; ++i){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        
        return max;
    }
    
    
    

    // TC = O(N) ; SC = O(N)
    int usingExtraHashArray(int arr[], int n){
        
        int max = findArrayMax(arr, n);
        int hash[max+1]={0};
        
        for(int i=0; i<n; ++i){
            hash[arr[i]]++;
        }
        
        for(int i=0; i<n; ++i){
            if(hash[arr[i]]>1){
                return (i+1);
            }
        }
        
        return -1;
    }




int main(){

    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    // int arr[] = {1, 2, 3, 4};
    // int arr[] = {1, 1, 1, 1};

    int n = sizeof(arr)/sizeof(int);

    // int ans = bruteForceApproach(arr, n);
    // int ans = usingExtraHashMap(arr, n);
    int ans = usingExtraHashArray(arr, n);

    

    if(ans!=-1){
        cout << "First repeating element is at position: " << ans << endl;
    }
    else{
        cout << "No repeating element found!" << endl;
    }

    return 0;
}




/*
sample test case output:

First repeating element is at position: 2

*/