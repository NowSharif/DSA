
// Leetcode:  2149. Rearrange Array Elements by Sign
// https://leetcode.com/problems/rearrange-array-elements-by-sign/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void printArray(vector <int> v){
    for(int i=0; i<v.size(); ++i){
        cout << v[i] << " ";
    }
}


//Store Pos & Neg in separate vectors & combine, 
//Without updating input vector => TC: O(N) ; SC=O(N/2) = O(N) ===> for Pos + Neg Vectors
//Update existing input vector => TC=O(N) ; SC= O(N) ====> temp vector to store updated vector values(as below)
vector<int> rearrangeArray1(vector<int>& nums) {
int n = nums.size();
vector <int> temp;
vector <int> pos;
vector <int> neg;


for(auto x: nums){
    (x>0 ? pos : neg).push_back(x);
}

for(int i=0; i<nums.size()/2; ++i){
    temp.push_back(pos[i]);
    temp.push_back(neg[i]);
}

return temp;

}


// Without the use of pos & neg vectors but pointers for the same
//TC=O(N) ; SC=O(N)
vector <int> rearrangeArray2(vector <int> arr){

    
    int n = arr.size(), i=0, pos = 0, neg = 1;
    vector <int> temp(n);

    while(i<n){
        if(arr[i]>0){
            temp[pos] = arr[i];
            pos+=2;
        }
        else{
            temp[neg] = arr[i];
            neg+=2;
        }
        i++;
    }
     
    return temp;

}


int main(){

    int n = 6;
    vector <int> brr(n);
    brr = {3,1,-2,-5,2,-4};

    cout << "\nPrinting array before rearrangement: " << endl;
    printArray(brr);

    // vector <int> krr = rearrangeArray1(brr);

    vector <int> krr = rearrangeArray2(brr);

    cout << "\n\nPrinting array after rearrangement: " << endl;
    printArray(krr);

    return 0;
}



/*
sample test case:

Printing array before rearrangement:
3 1 -2 -5 2 -4

Printing array after rearrangement:
3 -2 1 -5 2 -4

*/