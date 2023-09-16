

// 2D Vectors Practice


#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<vector<int>> p){

    cout << "\nPrinting the Vector: " << endl;
    for(int i=0; i<p.size(); ++i){
        for(int j=0; j<p[i].size(); ++j){
            cout << p[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){

    //Initialization

    vector < vector<int> > v;

    //Initilization with size

    vector <vector<int>> arr(5);

    //Initialization with size and default values
    vector < vector <int> > brr(5, vector<int>(4, -7));

    // print vector

    // printVector(brr);

    //Size of the vector

    // cout << "v size: " << v.size() << "\narr size: " << arr.size() << "\n brr size: " << brr.size() << endl;





    //Jagged vector

    vector <vector<int>> a;

    vector<int>b(5, -1);
    vector<int>c(2, 8);
    vector<int>d(7, -9);
    vector<int>e(6, 6);
    vector<int>f(4, -2);
    vector<int>g(8, 0);

    a.push_back(b);
    a.push_back(c);
    a.push_back(d);
    a.push_back(e);
    a.push_back(f);
    a.push_back(g);

    printVector(a);


    //output
    /*
    
    Printing the Vector:
    -1 -1 -1 -1 -1
    8 8
    -9 -9 -9 -9 -9 -9 -9
    6 6 6 6 6 6
    -2 -2 -2 -2
    0 0 0 0 0 0 0 0
    
    */

   
    

    return 0;
}