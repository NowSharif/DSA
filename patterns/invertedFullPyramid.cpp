#include <iostream>
using namespace std;

int main(){
  int ROWS;

  cout << "Enter the no.of rows: " <<endl;
  cin >> ROWS;
  cout << "The pattern is:" << endl << endl;
  for(int row=0; row<ROWS; row++){

    //starts
    for(int col=0; col<row; col++){
       cout << " "; //left space
    }

    //spaces
    for(int col=0; col<ROWS-row; col++){
       cout << "* "; //middle start+space
    }

    cout << endl;
  }

    return 0;
}



/*
Sample TestCase:

Enter the no.of rows: 
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

c:\Users\Masthan Sharif Shaik\Desktop\DSA\patterns>


*/