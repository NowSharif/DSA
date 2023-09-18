
//linearSearch ; TC=O(N) ; SC=O(1)


#include <iostream>
#include <vector>
using namespace std;


int linearSearch(vector <int> nums, int target){
    int n = nums.size();
    int ans = -1;
    for(int i=0; i<n; ++i){
        if(nums[i]==target){
            ans = i;
            return ans;
        }
    }

    return ans;
}

int main(){

    int n = 8;

    vector <int> arr{1, -9, 33, 0, 982, 20, 50, -174};

    int target = -174;

    int index = linearSearch(arr, target);

    if(index!=-1){
        cout << "The target " << target << " is found at index: " << index << endl;;
    }
    else{
        cout << "The target " << target << " is not found!" << endl;
    }

    return 0;
}



/*
sample test case output:

The target 50 is found at index: 6

*/