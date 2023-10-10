
// Aggressive Cows
// https://practice.geeksforgeeks.org/problems/aggressive-cows/0


#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;





bool isPossibleSolution(vector<int> stalls, int k, int sol){
        // can all k cows be paced with min.distance of sol between them
        int count = 1;
        int pos = stalls[0];
        
        for(int i=1; i<stalls.size(); ++i){
            if(stalls[i] - pos >= sol){
                count++;
                pos = stalls[i]; //one more cow has been placed
            }
            
            if(count ==k){
                return true;
            }
        }
        
        return false;
    }








    //TC = O(N*log(end)) ; SC = O(1)

    int binarySearch(vector<int> &stalls, int n, int k) {
    
        // Write your code here
        
        sort(stalls.begin(), stalls.end());
        
        int start = 0;
        int end = stalls[stalls.size()-1] - stalls[0];
        int ans = -1;
        
        while(start<=end){
            
            int mid = (start+end) >> 1;
            
            if(isPossibleSolution(stalls, k, mid)){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            
        }
        
        return ans;
    }






// TC = O(N*end) ; SC = O(1)
int bruteForce(vector<int> & stalls, int n, int k){
    sort(stalls.begin(), stalls.end());
    int last = stalls[stalls.size()-1]-stalls[0];
    int ans = -1;
    for(int i=0; i<=last; ++i){
        if(isPossibleSolution(stalls, k, i)){
            ans = i;
        }
        else{
            return ans;
        }
    }

}





int main(){

    int n = 5, k = 3;
    
    vector <int> stalls = {1, 2, 4, 8, 9};
    // vector <int> stalls = {10, 1, 2, 7, 5};

    // int ans = bruteForce(stalls, n, k);
    int ans = binarySearch(stalls, n, k);

    if(ans!=-1){
        cout << "The maximum possible distance between the aggressive cows is: " << ans << endl;
    }
    else{
        cout << "Unable to place aggressive cows!" << endl;
    }




    return 0;
}


/*
sample test case output:
The maximum possible distance between the aggressive cows is: 3
*/