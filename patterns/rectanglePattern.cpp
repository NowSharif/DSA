
#include <iostream>
using namespace std;

int main() {
    int ROWS, COLS;

    cout << "Enter the no.of rows: " << endl;
    cin >> ROWS;

    cout << "Enter the no.of columns: " << endl;
    cin >> COLS;

    cout << "The pattern is: " <<endl <<endl;

    for(int row=0; row<ROWS; row++){

      for(int col=0; col<COLS; col++){
        cout << "* ";
      }
      cout << endl;
    }

    return 0;
}



/*
Output:
Enter the no.of rows: 
4
Enter the no.of columns:
8
The pattern is:

* * * * * * * *
* * * * * * * *
* * * * * * * *
* * * * * * * *


*/