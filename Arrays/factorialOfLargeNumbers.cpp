

// Factorials of large numbers
// https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;



// TC = O(N*N) ; SC = O(N) ---for storing ans
vector<int> findFactorial(long long int N){

        vector <int> ans;
        ans.push_back(1);
        int carry = 0;
        
        
        for(int i=2; i<=N; ++i){
            
            //push new factorial to ans
            
            for(int j=0; j<ans.size(); ++j){
                int x = ans[j]*i + carry;
                ans[j] = x%10;
                carry = x/10;
            }
            
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
        }
        
        
        reverse(ans.begin(), ans.end());
        
        return ans;


}

int main(){
    
    long long int n;
    cout << "Enter a number: " << endl;
    cin >> n;


    vector <int> ans;

    ans = findFactorial(n);

    cout << "Factorial of " <<n << " is: " << endl;
    for(int i=0; i< ans.size(); ++i){
        cout << ans[i] << "";
    }


    return 0;
}



/*
sample test case:

Enter a number: 
99
Factorial of 99 is:
933262154439441526816992388562667004907159682643816214685929638952175999932299156089414639761565182862536979208272237582511852109168640000000000000000000000

*/