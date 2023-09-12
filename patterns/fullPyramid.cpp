#include <iostream>
using namespace std;

int main(){
    int ROWS;

    cout << "Enter the no.of rows: " <<endl;
    cin >> ROWS;
    cout << "The pattern is:" <<endl;
    for(int row=0; row<ROWS; row++){
      for(int col=0; col<ROWS-row-1; col++)
        cout << " "; //left space
      for(int col=0; col<row+1; col++)
        cout << "* "; //middle start+space

      cout << endl;
    }

    return 0;
}


/*

Sample TestCase:
Enter the no.of rows: 
7
The pattern is:
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *

*/