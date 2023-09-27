
//Check Palindrome - Brute force approach
// TC = O(N), SC=O(N) 
#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;



bool isPalindrome(string str, int n){

  // reverse string
  string rev;
  for(int i=n-1; i>=0; i--){
    rev.push_back(tolower(str[i])); 
  }

//check if palindrome
  for(int i=0; i<n; ++i){
    str[i] = tolower(str[i]);
    if(str[i]!=rev[i]){
      return false;
    }
  }

  return true;
  
}


int stringLength(string str){
  int len = 0, i=0;

  while(str[i]!='\0'){
    i++;
    len++;
  }

  return len;
}

int main() { 
  string str;

  cout << "Enter a string: " << endl;
  cin >> str;
  int n = stringLength(str);
  bool isPalin = isPalindrome(str,n);


  if(isPalin){
    cout << "The string " << str << " is a valid Palindrome." << endl;
  }
  else{
    cout << "The string " << str << " is not a valid palindrome." << endl;
  }
  
  
  
  
  
  
  return 0; 
}




/*
sample test case:

Enter a string: 
Racecar
The string Racecar is a valid Palindrome.


*/












