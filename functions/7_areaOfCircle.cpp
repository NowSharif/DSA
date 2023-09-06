#include <iostream>
#include <cmath>
using namespace std;

#define pi 3.1415
int main(){
    int radius;

    cout << " Program to find Area of Circle " << endl << endl;
    cout << "Enter the radius of the circle: " << endl;
    cin >> radius;

    float area = pi*radius*radius;

    cout << "Area of the circle is: " << area << endl;
}