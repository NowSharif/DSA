
// 204. Count Primes

// https://leetcode.com/problems/count-primes/description/


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


bool isPrime(int n){

      if(n<=1) return false;

      for(int i=2; i<n; ++i){
          if(n%i==0) return false;
      }

      return true;
  }


  // TC = O(N*N) ; SC = O(1)
  int bruteForce(int n){
      int count = 0;

      for(int i = 0; i<n; ++i){
          if(isPrime(i)) ++count;
      }

      return count;
  }

//////////////////////////////


  bool isPrimeSqrt(int n){

      if(n<=1) return false;

      for(int i=2; i<=sqrt(n); ++i){
          if(n%i==0) return false;
      }

      return true;
  }





  // TC = O(N*sqrt(N)) ; SC = O(1)
  int squareRootApproach(int n){
      int count = 0;

      for(int i = 0; i<n; ++i){
          if(isPrimeSqrt(i)) ++count;
      }

      return count;

  }


  ////////////////////////////////////////

  // TC = O(N*log(logN)) ; SC = O(N)
  int sieveOfEratosthenes(int n){

      if(n==0)  return 0;

      int count = 0;
      vector <bool> primes(n, true); //already marked all as primes

      primes[0] = primes[1] = false;

      for(int i= 2; i<n; ++i){

          if(primes[i]){
              //if its a prime, marks its multiples as composite
              count++;

              int j= i*2;

              while(j<n){
                  primes[j] = false;
                  j = j+i;
              }

          }
      }

      return count;
  }






  int countPrimes(int n) {
      // int ans = bruteForce(n);
      // int ans = squareRootApproach(n);
      int ans = sieveOfEratosthenes(n);

      return ans;
  }





int main() {

int n = 10;
int ans;
ans = countPrimes(n);
cout << "No.of primes till " << n-1 <<" are:\n" << ans << endl;
}

/*
Sample Testcase Output:

No.of primes till 9 are: 
4

*/
