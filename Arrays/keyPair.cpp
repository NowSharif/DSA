

// KeyPair-GFG

#include <iostream>
#include <bits/stdc++.h>
using namespace std;



// TC = O(N*N); SC=O(1)
bool findPair1(int arr[], int n, int x){

    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            int sum = arr[i]+arr[j];
            if(sum == x){
                return true;
            }
        }
    }
    return false;
}



// TC = O(N*logN) ; SC=O(1)
bool findPair2(int arr[], int n, int x){

    sort(arr, arr+n);

    int l = 0, h = n-1;

    while(l<h){
        int sum = arr[l] + arr[h];
        if(sum == x){
            return true;
        }

        else if(sum > x){
            h--;
        }

        else{
            l++;
        }

    }

    return false;
}

int main(){

int n = 6, x = 16;
int arr[6] = {1, 4, 45, 6, 10, 8};

// bool ans = findPair1(arr, n, x);
bool ans = findPair2(arr, n, x);

if(ans){
    cout << "The pair with sum " << x << " is present in the array!" << endl;
}
else{
    cout << "The pair with sum " << x << " is not present in the array!!" << endl;
}

return 0;
}



/*
sample test case output:

The pair with sum 16 is present in the array!

*/