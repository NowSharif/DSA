

// Common elements
//https://practice.geeksforgeeks.org/problems/common-elements1132/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
#include <vector>
#include <set>
using namespace std;

// TC = O(n1*n2*n3) ; SC = O(min(n1,n2,n3))
set <int> bruteForce(int A[], int B[], int C[], int n1, int n2, int n3){
        
        set <int> st; //using set-  to avoid duplicates
        for(int i=0; i<n1; ++i){
            for(int j=0; j<n2; ++j){
                for(int k=0; k<n3; ++k){
                    if(A[i]==B[j] && B[j]==C[k]){
                        st.insert(A[i]);
                    }
                }
            }
        }
        
        return st;
        
    }



// TC = O(N) ; SC = O(N)
set <int> usingThreePointersApproach(int A[], int B[], int C[], int n1, int n2, int n3){
        
        set <int> st;
        
        int i=0, j=0, k=0;
        
        while(i<n1 && j<n2 && k<n3){
            
            if(A[i]==B[j] && B[j]==C[k]){
                st.insert(A[i]);
                i++;
                j++;
                k++;
            }
            
            else if(A[i] < B[j]){
                i++;
            }
            
            else if(B[j] < C[k]){
                j++;
            }
            else{
                k++;
            }
            
        }
        
        return st;  
    }








int removeDuplicates(int arr[], int &n){

    int i=0, j=1;

    while(j<n){
        if(arr[i]==arr[j]){
            j++;
        }
        else{
            ++i;
            arr[i] = arr[j];
            ++j;
        }
    }

    return j+1;



}


// TC = O(N); SC = O(N) ; Without using additional data structure (set)
vector<int> removingDupesAnd3pointer(int A[], int B[], int C[], int n1, int n2, int n3){

    int n11 = removeDuplicates(A,n1);
    int n22 = removeDuplicates(B,n2);
    int n33 = removeDuplicates(C,n3);

    int i=0, j=0, k=0;

    vector <int> ans;

    while(i<n11 && j<n22 & k<n33){
        if(A[i]==B[j] && B[j]==C[k]){
            ans.push_back(A[i]);
            i++;
            j++;
            k++;
        }
        else if(A[i] < B[j]){
            i++;
        }
        else if(B[j]<C[k]){
            j++;
        }
        else{
            k++;
        }
    }


    return ans;
    

}



int main(){

    

    int A[6] = {1, 5, 10, 20, 40, 80};
    int B[5] = {6, 7, 20, 80, 100};
    int C[8] = {3, 4, 15, 20, 30, 70, 80, 120};


    vector <int> res;
    set <int> ans;
    int n1 = sizeof(A)/sizeof(int);
    int n2 = sizeof(B)/sizeof(int);
    int n3 = sizeof(C)/sizeof(int);
    ans = bruteForce(A,B,C,n1,n2,n3);
    ans = usingThreePointersApproach(A,B,C,n1,n2,n3);
   
            
    for(auto i:ans){
        res.push_back(i);
    }
    

    //  res = removingDupesAnd3pointer(A,B,C,n1,n2,n3);

    cout << "\nCommon elements are: " << endl;
    for(int i:res){
        cout << i <<" ";
    }


            
    return 0;
}



/*
sample test case output:

Common elements are:
20 80



*/