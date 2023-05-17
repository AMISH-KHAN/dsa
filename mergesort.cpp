#include<iostream>
using namespace std;

void merge(int arr[],int s,int e){
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid ;
    int *leftarr = new int[len1];
    int *rightarr = new int[len2];
    int mainarrayindex = s;
    for (int i = 0; i < len1; i++)
    {
        leftarr[i] = arr[mainarrayindex++];
    }
    mainarrayindex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        rightarr[i] = arr[mainarrayindex++];
    }
    // combinig two array
    mainarrayindex = s;
    int index1 = 0;
    int index2 = 0;
    while(index1<len1 && index2<len2){
        if(leftarr[index1]<rightarr[index2]){
            arr[mainarrayindex++] = leftarr[index1++];
        }else{
            arr[mainarrayindex++] = rightarr[index2++];

        }
    }
    while(index1<len1){
         arr[mainarrayindex++] = leftarr[index1++];
    }
    while(index2<len2){
        arr[mainarrayindex++] = rightarr[index2++];
    }
}

void mergeSort(int arr[],int s,int e){
if(s>=e){
    return;
}
int mid=s+(e-s)/2;
// left part
mergeSort(arr, s, mid);
// right part
mergeSort(arr, mid+1, e);

merge(arr, s, e);
}
int main(){
    int arr[6] = {5, 66, 1, 33, 0,-1};
    int n = 6;
    cout << "unsorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
    cout << arr[i] << " ";
    }
    mergeSort(arr, 0, n - 1);
    cout << "sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
    cout << arr[i] << " ";
    }
}