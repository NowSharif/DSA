#include <iostream>
using namespace std;

int main(){
   int ROWS;

   cout << "Enter the no.of rows" << endl;
   cin >> ROWS;

   cout << "The pattern is: " <<endl <<endl;
   for(int row=0; row<ROWS; row++){
     for(int col=0; col<ROWS-row; col++){
       cout << "* ";
     }
     cout << endl;
   }

    return 0;
}


/*
Inverted Half Pyramid:

Enter the no.of rows
8
The pattern is:

* * * * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/