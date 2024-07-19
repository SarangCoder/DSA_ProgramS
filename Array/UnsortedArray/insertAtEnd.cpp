#include<iostream>
using namespace std;

//function to insert at end position;

int insertAtEnd(int arr[] , int n, int key , int capacity){
    if(n >= capacity){
        return n;
    }

    arr[n] = key;
    return (n+1);
}

int main(){
    int arr[20] = {23,43,54,23,21,56,34};
    int capacity = sizeof(arr) / sizeof(arr[0]);

    int key = 34;
    int n = 6;

    cout<<"Before Insertion: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    n = insertAtEnd(arr, n, key, capacity);

    cout<<endl<<"After Insertion at end: ";
    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }

    return 0;
}