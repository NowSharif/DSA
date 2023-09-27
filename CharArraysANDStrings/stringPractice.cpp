
#include <iostream>
#include <string.h>


using namespace std;

int main(){

    string str;


    cout << "Enter a string: " << endl; 
    // cin >> str;
    getline(cin, str);

    // cout << "Entered string is: " << str << endl;

    // int len = str.length();
    // cout << "Length of the string is: " << len << endl;




    // if(str.empty()){ //0 or 1
    //     cout << "Entered string is empty!" << endl;
    // }
    // else{
    //     cout << "Entered string is not empty!!" << endl;
    // }


    // cout << "Character at index-2 is: " << str.at(2) << endl;

    // cout << "front character: " << str.front() << " & back character: " << str.back() << endl;



    // string str2 = "Hello! " ;

    // str = str2.append(str);
    // cout << "Appended string: " << str << endl;



    // str.erase(2,5);
    // cout << "String after erasing: " << str << endl;


    // string str2 = "Test ";

    // str.insert(7,str2);
    // cout << "String after insertion: " << str << endl;


    // str.push_back('K');
    // cout << "After pushing: \n" << str << endl;
    // str.pop_back();
    // cout << "After popping: \n" << str << endl;




    // if(str.find("Ma")==string::npos){
    //     cout << "substr Not found" << endl;
    // }
    // else{
    //     cout << "Substr found!" << endl;
    // }
    




    // string str2 = "Sharif";

    // if(str.compare(str2)==0){
    //     cout << "Both strings match!" << endl;
    // }
    // else{
    //     cout << "Both strings do not match!!" << endl;
    // }



    cout << "Substr of str: " << str.substr(2,5) << endl;



    return 0;
}