#include <iostream>
using namespace std;

int main(){
  int ROWS;
  cout << "Enter the no.of rows" <<endl;
  cin >> ROWS;

  cout << "The pattern is: " << endl;

  for(int row=0; row<ROWS; row++){
    for(int col=0; col<ROWS-row; col++){
      cout << col+1 << " ";
    }
    cout << endl;
  }

    return 0;
}



/*

sample test case:

Enter the no.of rows
8
The pattern is:
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/