
// The Painter's Partition Problem-II

// https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1


#include <iostream>
#include <numeric>

using namespace std;




bool isPossibleSolution(int arr[], int n, int k, long long sol){
        
        long long timeSum = 0;
        long long count = 1;
        
        
        for(int i=0; i<n; ++i){
            if(arr[i]>sol){
                return false;
            }
            
            if(timeSum + arr[i] > sol){
                
                count++;
                
                timeSum = arr[i];
                
                
                if(count>k){
                    return false;
                }
                
                
            }
            else{
                timeSum+=arr[i];
            }
        }
        
        return true;
    }
    
    
    
    long long minTime(int arr[], int n, int k)
    {
       
        
          if(k>n){
            return -1;
        }
        
        long long start = 0;
        long long end = 0;
        long long ans = -1;
        
        for(auto i=0; i<n; ++i){
            end+=arr[i];
        }
        
      
        
        while(start<=end){
            
            long long mid = start + (end-start)/2;
            
            if(isPossibleSolution(arr,n,k, mid)){
                
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            
        }
        
        return ans;
    }



int main(){

    // int A[] = {12,34,67,90};
    // int N =4, M = 2;

    // int N = 3;
    // int A[] = {15,17,20};
    // int M = 2;

    int n = 5, k = 3;
    int arr[] = {5,10,30,20,15};
    

    // int ans = bruteForce(A, N, M);
    int ans = minTime(arr, n, k);
 


    if(ans!=-1){
        cout << "Most units of time allocated to a painter with minimum time is: " << ans << " units!"<< endl;
    }
    else{
        cout << "Unable to allocate the given units of time to apinters!" << endl;
    }

    return 0;
}




/*
Sample test case output:
Most units of time allocated to a painter with minimum time is: 35 units!

*/