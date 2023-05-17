#include<iostream>
using namespace std;

int part(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s+1; i < e + 1;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
        int pivotIndex = s+cnt;
        swap(arr[pivotIndex], arr[s]);
        int i = s;//left side
        int j = e;//rigt side
        while(i<pivotIndex && j>pivotIndex){
            // checking if all elements in s to p-1 are less than p
            while(arr[i]<pivot){
            i++;
            }
            while(arr[j]>pivot){
            j--;
            }
            if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
            }
        }
        return pivotIndex;
}

void quickSort(int arr[],int s,int e){
if(s>=e){
    return;
}
int p = part(arr, s, e);
// left part/
quickSort(arr, s, p - 1);
quickSort(arr, p+1, e);
}
int main(){
    int arr[6] = {5, 66, 1, 33, -3,-1};
    int n = 6;
    cout << "unsorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
    cout << arr[i] << " ";
    }
    quickSort(arr, 0, n - 1);
cout << endl;
    cout << "sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
    cout << arr[i] << " ";
    }
}