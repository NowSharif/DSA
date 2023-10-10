
// PRATA - Roti Prata
// https://www.spoj.com/problems/PRATA/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



bool isPossibleSolution(vector <int> cooksRanks, int & nP, int mid){

    int currP = 0;
    for(int i=0; i<cooksRanks.size(); ++i){


        int R = cooksRanks[i], j = 1;
        int timeTaken = 0;

        while(true){

            if(timeTaken + j*R <= mid){
                ++currP;
                timeTaken += j*R;
                ++j;
            }
            else{
                break;
            }
        }

        if(currP >=nP){
            return true;
        }
    }


    return false;
}



//Using Binary Search ; TC = O(nC*log(end)) ; SC = O(1)
int minTimeToCompleteOrder(vector <int> cooksRanks, int &nP){

    int start = 0;
    int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
    int end = highestRank*(nP*(nP+1)/2);
    int ans = -1;
    while(start <= end){

        int mid = (start+end) >> 1;

        if(isPossibleSolution(cooksRanks, nP, mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }


    return ans;
}






// TC = O(N*end) ; SC = O(1)
int bruteForce(vector <int> cooksRanks, int nP){

    int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
    int last = highestRank*(nP*(nP+1)/2);
    int ans = -1;
    for(int i=0; i<=last; ++i){
        if(isPossibleSolution(cooksRanks, nP, i)){
           return i;
        }
        
    }

    return -1;
    
}

int main(){


    int T; cin >> T;

    while(T--){
        int nP, nC; 
        cin >> nP >> nC;
        vector <int> cooksRanks;
        while(nC--){
            int rank; cin >> rank;
            cooksRanks.push_back(rank);
        }

        cout << bruteForce(cooksRanks, nP) << endl;
        // cout << minTimeToCompleteOrder(cooksRanks, nP) << endl;
    }

    return 0;
}


/*
sample test case:

3
10
4 1 2 3 4
-------output: 12
8
1 1
-------output: 36
8
8 1 1 1 1 1 1 1 1
-------output: 1

*/