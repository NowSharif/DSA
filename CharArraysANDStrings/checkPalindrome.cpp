//Check if a string is palindrome or not

#include <iostream>
#include <string.h>

using namespace std;



int findLength(char ch[]){
    int i=0;

    while(ch[i]!='\0'){
        i++;
    }

    return i;
}

//TC=O(N/2) = O(N); SC=O(1)
bool isPalindrome(char ch[], int n){
    int s=0, e=n-1;

    while(s<e){
        char first = tolower(ch[s]);
        char second = tolower(ch[e]);
        if(first!=second){
            return false;
        }
        s++;
        e--;
    }

    return true;
}



int main(){

    char ch[100];

    cout << "Enter a string: " << endl;
    cin.getline(ch, 100);

    int n = findLength(ch);
    // int  n = strlen(ch);

    // cout << "len: " << n << endl;

    bool answer = isPalindrome(ch,n);

    if(answer){
        cout << "The string " << ch << " is a Palindrome!" << endl;
    }
    else{
        cout << "The string " << ch << " is not a Palindrome!!" << endl;
    }

    return 0;
}


/*
Sample test case:

Enter a string: 
Rotator
The string Rotator is a Palindrome!
*/