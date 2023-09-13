#include <iostream>
using namespace std;

int main(){

  int ROWS;
  cout << "Enter the no.of rows: " << endl;
  cin >> ROWS;

  cout << "The Pattern is: " << endl;
  for(int row=1; row<=ROWS; row++){
    int C = 1;
    for(int col=1; col<=row; col++){
      cout << C;
      C = C*(row-col)/(col);
    }

    cout << endl;
  }

    return 0;
}



/*
sample test case:

Enter the no.of rows: 
8
The Pattern is:
1
11
121
1331
14641
15101051
1615201561
172135352171

*/