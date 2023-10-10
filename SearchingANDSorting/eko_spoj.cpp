

// EKP-SPOJ
//https://www.spoj.com/problems/EKO/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



bool isPossibleSolution(vector <long long int> &trees, long long int &m, long long int &sol){
     
    long long int woodCollected = 0;
    
    for(long long int i=0; i<trees.size(); ++i){
        if(trees[i]>sol){

            woodCollected += trees[i]-sol;
        }
    }
    
   
    return woodCollected>=m;

}





// Using Binary Search ; TC = O(N*log(end)) ; SC = O(1)
long long int maximumSawbladeHeight(vector <long long int> &trees, long long int m){
    long long int start = 0, end ;
    long long int ans = -1;

    end = *max_element(trees.begin(), trees.end());

    while(start<=end){

        long long int mid = start + (end-start)/2;
       

        if(isPossibleSolution(trees, m, mid)){
            
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
long long int bruteForce(vector <long long int> &trees, long long int &m){

    long long int max = *max_element(trees.begin(), trees.end());
    long long int ans = -1;
    for(long long int i=0; i<=max; ++i){
         if(isPossibleSolution(trees, m, i)){
            ans = i;
    }
    else{
        return ans;
    }
}

return -1;

}


int main(){
    
    long long int m,n;
    cin >> n >> m;

    vector <long long int> trees;

    while(n--){
        long long int height;

        cin >> height;

        trees.push_back(height);
    }

    //  long long int ans = maximumSawbladeHeight(trees, m);

    long long int ans = bruteForce(trees, m);

     cout << "Ans: " << ans << endl;




    return 0;
}


/*
sample test case:
1.
Input:
4 7
20 15 10 17

Output:
15








2.
Input:
5 20
4 42 40 26 46

Output:
36





*/

