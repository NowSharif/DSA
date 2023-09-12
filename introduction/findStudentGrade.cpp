// Program to find student's grade based on marks

#include <iostream>
using namespace std;

int main(){

  int marks;
  cout << "Enter the total marks of the student(out of 100)" <<endl;
  cin >> marks;

  if(marks >=90){
    cout << "Student has passed with the grade - A" <<endl;
  }
  else if(marks >=70){
    cout << "Student has passed with the grade - B" <<endl;
  }
  else if(marks >=50){
    cout << "Student has passed with the grade - C" <<endl;
  }
  else if(marks >=35){
    cout << "Student has passed with the grade - D" <<endl;
  }
  else{
    cout << "Student has got failed - F" << endl;
  }

    return 0;
}


/*

Output:

Enter the total marks of the student(out of 100)
56
Student has passed with the grade - C

*/