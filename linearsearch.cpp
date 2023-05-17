#include<iostream>
using namespace std;

bool linearsearch(int arr[],int n,int k){
    int ans;
    if(n==0){
        return false;
    }
    else if(arr[0]==k){
        return true;
    }
    else{
        return linearsearch(arr + 1, n - 1, k);

    }
    // return ans;
}

int main(){
    int arr[5] = {1, 2, 6, 4, 5};
    if(linearsearch(arr,5,16)){
        cout << "yes found"<<endl;
    }
    else{
        cout << "not found"<<endl;
    }
    
    
}   
