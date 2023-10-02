// Find missing element in an array which has duplicate elements in it

#include <iostream>

using namespace std;


//sorting + swapping ; TC=O(N); SC=O(1)
void printMissing2(int nums[], int n){
    int i = 0;
    while(i<n){
        int index = nums[i];

        if(nums[i]!=nums[index-1]){
            swap(nums[i], nums[index-1]);
        }

        else{
            ++i;
        }
    }

    for(int i=0; i<n; ++i){
        if(nums[i]!=(i+1)){
            cout << (i+1) << " ";
        }
    }

}




// Visited-Negative Marking approach ; TC = O(N); SC=O(1)
void printMissing1(int nums[], int n){
    for(int i=0; i<n; ++i){
        int index = abs(nums[i]);
        if(nums[index-1]>0){
            nums[index-1]*=-1;
        }
    }


    for(int i=0; i<n; ++i){
        if(nums[i]>0){
            cout << (i+1) << " ";
        }
    }
}


int main(){

    // int a[] = {1,3,4,3,5};
    // int a[] = {1,3,3,3,3};
    int a[] = {3,3,1,3,2};
    // int a[] = {2,2,2,2,2,2};

    int n = sizeof(a)/sizeof(int);
    cout << "Missing elements: " << endl;
    // printMissing1(a, n);
    printMissing2(a, n);

    return 0;
}






/*
Sample test case output:

Missing elements: 
4 5

*/