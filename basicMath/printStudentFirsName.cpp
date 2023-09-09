
//Porgram to print name of the student

//cin considers a space as a terminating character, so only one word can be read
#include <iostream>
using namespace std;


int main(){

    string name;
    //Reading a single wprd as input
    cout << "Enter the first name of the Student(without a space): " << endl;
    cin >> name;

    cout << "Name of the student is: " << name << endl;

    return 0;
}



/*

Ouput:

Enter the first name of the Student(without a space): 
>> Masthan

Name of the student is: Masthan


*/