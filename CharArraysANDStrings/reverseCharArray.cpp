

// Program to reverse a character array
//TC: O(n/2)=O(n) ; SC=O(1)

#include <iostream>
#include <string.h>
using namespace std;


void swapCustom (char &a, char &b){
    char temp = b;
    b = a;
    a = temp;

}

void reverseCharArray(char ch[], int n){
    int i=0, j= n-1;

    while(i<j){
        swap(ch[i++], ch[j--]);
        // swapCustom(ch[i++], ch[j--]);
    }

}

int main(){

    int n = 7;

    char ch[100];

    cin.getline(ch, 100);

    cout << "\nPrinting the char array before reversing:\n " << endl;
    cout << ch;

    reverseCharArray(ch,n);

    cout << "\n\nPrinting the char array after reversing:\n " << endl;
    cout << ch;




    return 0;
}



/*
Sample Test Case output:


Masthan     

Printing the char array before reversing:

Masthan

Printing the char array after reversing:

nahtsaM
*/