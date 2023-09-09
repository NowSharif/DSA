// Program to Print count from N to 1

#include <iostream>
using namespace std;

int main(){
  int num;
  cout << "Enter the value of N" <<endl;
  cin >> num;

  int temp = num;
  cout << "The numbers from " << num << " to 1 are: " << endl;
  while(temp>=1){
    cout << temp <<endl;
    temp--;
  }



    return 0;
}


/*
Ouput:
Enter the value of N
7
The numbers from 7 to 1 are:
7
6
5
4
3
2
1



*/