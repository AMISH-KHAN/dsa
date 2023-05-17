#include<iostream>
using namespace std;

bool checksort(int arr[],int n){
    int ans;
    if (n == 0 || n == 1)
    {
        return true;
        }
        else if(arr[0]>arr[1]){
        return false;
        }
        else{
            ans = checksort(arr + 1, n - 1);
            return ans;
        }
        
}
int getsum(int arr[],int n){
        int sum;
        if (n == 0)
        {
            return 0;
    }
    else{
        // cout << "getsum";
            // cout << sum<<" ";
            sum = arr[0]+ getsum(arr + 1, n - 1);
    }
    return sum;
}

int main(){
    int arr[5] = {1, 2, 6, 4, 5};
    if(checksort(arr,5)){
        cout << "yes sorted"<<endl;
    }
    else{
        cout << "not sorted"<<endl;
    }
    int ans = getsum(arr, 5);
    
         cout<< ans << endl;
    
}   
