#include <iostream>
using namespace std;

int main(){
    int ROWS;
   cout << "Enter the no.of rows: " <<endl;
   cin >> ROWS;
   cout << "The pattern is:" << endl <<endl;

   for(int row=0; row<ROWS; row++){
     for(int col=0; col<row; col++){
       cout << " ";
     }
     for(int col=0; col<2*(ROWS-row)-1; col++){
       if(row==0 || col==0 || col==2*(ROWS-row)-2)
         cout << "*";
       else
       cout << " ";
     }
     cout << endl;
   }


    return 0;
}





/*
Smaple Test Case:

Enter the no.of rows: 
8
The pattern is:

***************
 *           *
  *         *
   *       *
    *     *
     *   *
      * *
       *


*/