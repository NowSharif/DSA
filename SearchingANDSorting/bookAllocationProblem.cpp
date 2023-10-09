//Allocate minimum number of pages
//https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
#include <numeric>

using namespace std;



  bool isPossibleSolution(int A[], int N, int M, int sol){
        
        int pageSum = 0;
        int count = 1;
        
        for(int i=0; i<N; ++i){
            
            if(A[i]>sol){
                return false;
            }
            
            
            if(pageSum+A[i]> sol){
                count++;
                pageSum = A[i];
                
                if(count>M){
                    return false;
                }
            }
            
            
            else{
                pageSum+=A[i];
            }
        }
        
        return true;
    }










//Function to find minimum number of pages.
// TC = O(N*logN) ; SC = O(1)
    int findPages(int A[], int N, int M) 
    {
        //code here
        
        if(M>N){
            return -1;
        }
        
        int start = 0;
        int end = accumulate(A, A+N, 0);
        
        int ans = -1;
        
        while(start<=end){
            
            int mid = start + (end-start)/2;
            
            
            if(isPossibleSolution(A,N,M,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            
        }
        
        return ans;
        
    }





// Brute force approach
// O(N*N*N); SC = O(1);
// sum = N(N+1)/2 =~ N*N ;  isPossibleSolution()---O(N)

int bruteForce(int A[], int N, int M){
    int sum = accumulate(A, A+N, 0);

     if(M>N){
            return -1;
        }

    for(int i=0; i<=sum; ++i){
        if(isPossibleSolution(A,N,M,i)){
            return i;
        }
    }

    return -1;


}




int main(){

    int A[] = {12,34,67,90};
    int N =4, M = 2;

    // int N = 3;
    // int A[] = {15,17,20};
    // int M = 2;

    // int ans = bruteForce(A, N, M);
    int ans = findPages(A, N, M);
 


    if(ans!=-1){
        cout << "Most books allocated to a student with minimum pages are: " << ans << endl;
    }
    else{
        cout << "Unable to allocate the given books to students!" << endl;
    }

    return 0;
}




/*
Sample test case output:
Most books allocated to a student with minimum pages are: 113
*/