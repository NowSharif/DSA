

#include <iostream>
#include <vector>         //header file for the definitions of vector DataStructure
using namespace std;

void printArray(int arr[], int n){

    cout << "Printing the array: " << endl;
    for(int i=0; i<n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void readArray(int arr[], int n){
    cout << "Enter " << n << " elements into the array: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

}


void printVector(vector <int> &v){
    int size = v.size();
    cout << "Printing the vector: " << endl;
    for(int i=0; i<size; ++i){
        cout << v.at(i) << " ";
    }
    cout << endl;
}


void readVector(vector <int> &v){
    int n;
    cout << "How many elements you want to enter: " << endl;
    cin >> n;
    cout << "Enter " << n << " elements into the vector: " << endl;
    for(int i=0; i<n; i++){
        int data;
        cin >> data;
        v.push_back(data);
       
    }

}

int main(){

    //Static way of creating and printing an array

    // int n = 5;
    // int arr[n] = {1,2,3,4,5};
    // printArray(arr, n);





    //dynamic array initialization-1

    // int n ;
    // cout << "Enter the length of the array: " << endl;
    // cin >> n;
    // int srr[n];
    // readArray(srr, n);
    // printArray(srr, n);



    //dynamic array initialization -2

    // int n;

    // int *arr = new int[n];

    // cout << "Enter the size of the array: " << endl;
    // cin >> n;

    // readArray(arr, n);
    
    // printArray(arr, n);


    //vector 

    //declaration & initilization
    vector <int> krr;
    vector <int> v(5);
    vector <int> a(4, -2);
    vector <int> b= {1,1,1,5,5,7};
    vector <int> c{2,5,8,9};
    vector <int> d(c);
    vector <int> e;
    e=b;

    // vector <int> k;
    // if(k.empty()){
    //     cout << "k is empty\n";
    // }
    // else{
    //     cout << "k is non-empty\n";
    // }

    cout << "Printing C: \n";
    for(auto i:c){
        cout << i << " ";
    }



    // vector <char> ch;
    // ch.push_back('q');
    // ch.push_back('p');
    // cout << ch.front() << " , " << ch.back() << endl;

    //inserting elements
    // krr.push_back(-99);
    // krr.push_back(100);
    // krr.push_back(0);
    
    // //printing vector
    // printVector(krr);

    // //removing vector elements from back
    // krr.pop_back();
    // cout << endl;
    // printVector(krr);


//    //Read Vector elements
//    readVector(krr);

//    //Print Vector
//    printVector(krr);

//    //adding extra elements to the vector
//    krr.push_back(230);

//    printVector(krr);

// //clear the vector
// krr.clear();

// printVector(krr);

//  printVector(d);
    




    return 0;
}