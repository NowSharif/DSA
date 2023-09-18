/*
Pattern
N = 4
   1
  232
 34543
4567654
*/
#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int i=1;
    int n = 2*no;
    while(i<=(no)){
        int gaps = n-i,k=1;
        
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps + 1;
        // z = (ch+1)/2;
        int j = i;
        int z = i;
        while(z>=1){
            cout<<j;
            j = j + 1;
            z--;
        }
        j = j - 1;
        z = i-1;
        while(z>=1){
            j = j - 1;
            cout<<j;
            z = z - 1;
        }
        k = 1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}