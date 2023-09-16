

//Program to move all negative elements of an array to left end of the array


#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; ++i){
        cout << arr[i] << " ";
    }

}

// Using temp array with extra space ; TC=O(N) ; SC= O(N)
void moveNegativesToLeft1(int arr[], int n){
    
    int temp[n], j=0;

    for(int i=0; i<n ;++i){
        if(arr[i]<0){
            temp[j++] = arr[i];
        }
    }

    for(int k=0; k<n; k++){
        if(arr[k]>0){
            temp[j++] = arr[k];
        }
         
    }


    for(int i=0; i<n; ++i){
        arr[i] = temp[i];
    }

}

//using 2 pointer approach ; TC: O(N) ; SC:O(1)
void moveNegativesToLeft2(int arr[], int n){
    int i=0, j=0;
    while(i<n){
        if(arr[i]<0){
            swap(arr[i], arr[j++]);
        }
        i++;
    }
}

int main(){

    int n = 7;
    int arr[7] = {23, -7, 12, -10, -11, 40, 60};

    cout << "\nPrinting the array before the operation:" << endl;
    printArray(arr, n);

    // moveNegativesToLeft1(arr, n); 
    moveNegativesToLeft2(arr, n); 


    //approach-3: sorting; TC=O(N*logN) ; SC = O(1) 
    // sort(arr, arr+n);

    cout << "\nPrinting the array after the operation:" << endl;
    printArray(arr, n);


    return 0;
}



/*
sample test case:

Printing the array before the operation:
23 -7 12 -10 -11 40 60
Printing the array after the operation:
-7 -10 -11 23 12 40 60

*/