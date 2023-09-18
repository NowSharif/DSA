
// Find total number of occurances of an element in a sorted array
//TC=O(logN) ; SC=O(1)
using namespace std;
#include <iostream>
#include <vector>

int firstOccurance(vector <int> arr, int target){

    int ans = -1;
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){

        if(arr[mid]== target){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }

        //imp
        mid = start + (end-start)/2;

    }

    return ans;
}


int lastOccurance(vector <int> arr, int target){

    int ans = -1;
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){

        if(arr[mid]== target){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }

        //imp
        mid = start + (end-start)/2;

    }

    return ans;
}




int main(){

    vector <int> arr;
    arr = {-8, -1, -1 , 0, 1, 8, 8};
    // arr ={-99, -78,  -78, 1, 1};
    // arr = {-1, -1, -1, 0, 2, 2, 3, 5, 5};
    int target = -1;
    int firstIndex = firstOccurance(arr, target);
    int lastIndex = lastOccurance(arr, target);

    
    if(firstIndex>=0 && lastIndex>=0){
        int totalOccurances = lastIndex - firstIndex +1;
        cout << "The element " << target << " has " << totalOccurances << " occurances in the array" << endl;
    }
    else{
        cout << "The element " << target << " is not found in the array at any index :(" << endl;
    }

    return 0;
}



/*


sample test case output:

The element -1 has 2 occurances in the array


*/