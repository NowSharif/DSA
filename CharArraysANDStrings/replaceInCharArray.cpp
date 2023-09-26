//Replace @ with space in a char Array
//TC=O(N); SC=O(1)


#include <iostream>
using namespace std;

//len = strlen(ch);
int findLength(char ch[]){
    int i=0;
    while(ch[i++]!='\0'){
      
    }

    return i;
}


void printCharArray(char ch[], int n){
    for(int i=0; i<n; ++i){
        cout << ch[i] ;
    }

    // cout << ch;
}



void replaceCharArray(char ch[], int n){
    for(int i=0; i<n ; ++i){
        if(ch[i]=='@'){
            ch[i] = ' ';
        }
    }

}






int main(){

    char ch[100];
    cout << "Enter any string containing @" << endl;
    cin.getline(ch, 100);

    int n = findLength(ch);

    cout << "\nPrinting char array before replacing:  " << endl;
    // printCharArray(ch, n);
    cout <<ch;

    replaceCharArray(ch, n);

    cout << "\n\nPrinting char array after replacing:  " << endl;
    // printCharArray(ch, n);
    cout << ch;


    return 0;
}



/*
Sample test case:

Enter any string containing @
Masthan@Sharif@Shaik@-@DSA

Printing char array before replacing:
Masthan@Sharif@Shaik@-@DSA

Printing char array after replacing:
Masthan Sharif Shaik - DSA

*/