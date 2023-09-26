

//Program to convert a character from upper case to lower case


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

void convertToLowerCase1 (char ch[], int n){

    for(int i=0; i<n; ++i){

        if(ch[i]>='A' && ch[i]<='Z'){
        ch[i] = ch[i] - 'A' + 'a';
    }

    }

    
}

void convertToLowerCase2 (char ch[], int n){

    for(int i=0; i<n; ++i){

        ch[i] = tolower(ch[i]);
    }
    }



int main(){
    char ch[100];

    cout << "Enter a string: " << endl;

    cin.getline(ch, 100);

    int len = findLength(ch);


    // cout << "len: " << len << endl;

    // convertToLowerCase1(ch, len);
    convertToLowerCase2(ch, len);


    cout << "The Lowercase converted string is: " << ch << endl;


    return 0;
}



/*
Sample test case:

Enter a string: 
MASTHAN SHARIF Shaik
The Lowercase converted string is: masthan sharif shaik

*/