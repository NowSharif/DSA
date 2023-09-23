//Find the length of a char array

#include <iostream>
#include <string.h>
using namespace std;


int findLength (char ch[], int n){

    int index = 0;
    while(ch[index]!='\0'){
        index++;
    }

    return index;
}

int main(){

    char ch[100];

    // cin >> ch;

    cin.getline(ch, 100);

    int length = findLength(ch,100);

    int lengthUtil = strlen(ch);

    cout << "Length of the char array using custom function is: " << length << endl;
    cout << "Length of the char array using utility function is: " << lengthUtil << endl;

    return 0;
}



/*
Sample Test Case Output:

Masthan Sharif  Shaik
Length of the char array using custom function is: 20
Length of the char array using utility function is: 20

*/