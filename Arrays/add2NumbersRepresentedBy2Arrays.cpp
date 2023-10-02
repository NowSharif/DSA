

// Add two numbers represented by two arrays
// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays2408/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


// TC = O(max(n,m))  ; SC = O(N+M) ---for storing ans
string calc_Sum(int *a,int n,int *b,int m){
    
    string ans;
    int carry = 0;
    int i=n-1, j=m-1;
    
    while(i>=0 && j>=0){
        int x = a[i] + b[j] + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        i--;
        j--;
    }
    
    
    while(i>=0){
        
        int x = a[i] + 0 + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        i--;
        
    }
    
        
    while(j>=0){
        
        int x = 0 + b[j] + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        j--;
        
    }
    
    
    if(carry){
        ans.push_back(carry + '0');
    }
    
    //remove 0s at the end
    
    while(ans[ans.size()-1]=='0'){
        ans.pop_back();
    }
    
    
    //reverse the result, as we're traversing & adding from right to left
    
    reverse(ans.begin(), ans.end());
    
    return ans;
    
}






int main(){

    int A[] = {9, 5, 4, 9};
    int B[] = {2, 1, 4};
    // int A[] = {1, 2};
    // int B[] = {2, 1};

    int n1 = sizeof(A)/sizeof(A[0]);
    int n2 = sizeof(B)/sizeof(int);

    string ans;
    ans = calc_Sum(A, n1, B, n2);

    cout << "The Sum is: " << endl;
    cout << ans;

    return 0;
}



/*
Sample test case output:

The Sum is: 
9763

*/