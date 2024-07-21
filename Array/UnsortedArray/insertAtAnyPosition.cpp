#include<iostream>

using namespace std;

void insertAtPosition(int arr[], int n, int x, int p){
    // shift element to the right which are on right side of position
    for(int i=n; i>=p; i--){
        arr[i+1] = arr[i];
    }
    arr[p] = x;
}

int main(){
    int arr[15] = {10,34,64,63,12,34};
    int n = 6;

    cout<<"Before the insertion: ";
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    int x= 23, p=3;
    insertAtPosition(arr, n,x,p);
    n++;
    cout<<endl;
    cout<<"After Insertion";
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}