
// Program to print percentage of marks in 5 subjects out of 100

#include <iostream>
using namespace std;

int main(){
  int marksInSub1, marksInSub2, marksInSub3, marksInSub4, marksInSub5;
   
  cout << "Enter the marks in subject-1" << endl;
  cin >> marksInSub1;

  cout << "Enter the marks in subject-2" << endl;
  cin >> marksInSub2;

  cout << "Enter the marks in subject-3" << endl;
  cin >> marksInSub3;

  cout << "Enter the marks in subject-4" << endl;
  cin >> marksInSub4;

  cout << "Enter the marks in subject-5" << endl;
  cin >> marksInSub5;

  int sumOfMarks = (marksInSub1 + marksInSub2 + marksInSub3 + marksInSub4 +
  marksInSub5); 

  float percentageOfMarks = (float(sumOfMarks)/500)*100;

  cout << "Percentage of the entered marks is: \n" << percentageOfMarks << "%" <<endl;

    return 0;
}


/*

Output:
Enter the marks in subject-1
89
Enter the marks in subject-2
95
Enter the marks in subject-3
95
Enter the marks in subject-4
95
Enter the marks in subject-5
99
Percentage of the entered marks is:
94.6%

*/