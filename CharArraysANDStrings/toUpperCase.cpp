

//Program to convert a character from lower case to upper case


#include <iostream>
#include <cctype>
#include <string.h>

using namespace std;



int findLength(char ch[]){
    int i=0;
    while(ch[i++]!='\0'){
      
    }

    return i;
}

void convertToUpperCase1 (char ch[], int n){

    for(int i=0; i<n; ++i){

        if(ch[i]>='a' && ch[i]<='z'){
        ch[i] = ch[i] - 'a' + 'A';
    }
    }

    
}

void convertToUpperCase2 (char ch[], int n){

    for(int i=0; i<n; ++i){

        ch[i] = toupper(ch[i]);
    }
    }



int main(){
    char ch[100];

    cout << "Enter a string: " << endl;

    cin.getline(ch, 100);

    int len = findLength(ch);


    // cout << "len: " << len << endl;

    convertToUpperCase1(ch, len);
    // convertToUpperCase2(ch, len);


    cout << "The Uppercase converted string is: " << ch << endl;


    return 0;
}



/*
Sample test case:

Enter a string: 
Sharif Shaik
The Uppercase converted string is: SHARIF SHAIK

*/