
/*Rotate an array clockwise by K times
Leetcode 189. Rotate Array
https://leetcode.com/problems/rotate-array/description/
*/
#include <iostream>
#include <vector>
using namespace std;


void printArray(vector <int> &v, int n){

    for(int i=0; i<n; ++i){
        cout << v[i] << " ";
    }
}




void reverse(vector <int> &x, int l, int r){

        while(l<r){
            int temp = x[l];
            x[l] = x[r];
            x[r] = temp;
            l++;
            r--;
        }
    }



//approach-1 : TC=O(N) ; SC=O(N)
void rotate1(vector<int>& nums, int k) {

        
        int n = nums.size();
        vector <int> temp(n);
        for(int i=0; i<n; ++i){
            int newIndex = (i+k)%n;
            temp[newIndex] = nums[i];
        }

        nums = temp;
    }



//Rotate one element at a time ; TC=O(N*K); SC=O(K)/O(1)
void rotate2(vector <int> &nums, int k){

    int n = nums.size();

        while(k--){
            int temp = nums[n-1];
            for(int i=n-2; i>=0; --i){
                nums[i+1] = nums[i];
            }
            nums[0] = temp;
        }


}



//Reversing 3 times ; TC=O(N)--> for reversing ; SC=O(1)
void rotate3(vector <int> &nums, int k){

     int n = nums.size();

        k = k%n;
        if(n==1){
            return;
        }
        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
}


//approach-4 :Bruteforce:: TC=O(N) ; SC=O(N)
void rotate4(vector<int>& nums, int k) {

        
        int n = nums.size();
        vector <int> temp(n);
        for(int i=0; i<n-k; ++i){
            temp[(i+k)] = nums[i];
        }

        int j=0;
        for(int i=n-k; i<n; ++i){
            temp[j++] = nums[i];
        }

        nums = temp;
    }


int main(){

    int n = 7;
    vector <int> arr(n);
    arr = {1,2,3,4,5,6,7};
    int k = 2;

    cout << "\nPrinting the array before rotation: " << endl;
    printArray(arr, n);

    // rotate1(arr, k);
    // rotate2(arr, k);
    rotate3(arr, k);
    //  rotate4(arr, k);

    cout << "\nPrinting the array after rotation:" << endl;
    printArray(arr, n);

    return 0;
}




/*
sample test case:

Printing the array before rotation:
1 2 3 4 5 6 7
Printing the array after rotation:
6 7 1 2 3 4 5

*/