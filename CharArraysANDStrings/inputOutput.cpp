
//Practicing taking input to char array & printing char array as output 
#include <iostream>
#include <string.h>
using namespace std;



int main(){

    char ch[100];
    // cin >> ch;
    // cout << "Printing the character array: " << endl;
    // cout << ch << endl;

    cin.getline(ch,100);
    cout << "Printing the character array read using getline: " << endl;
    cout << ch << endl;


    return 0;
}

