#include<iostream>
using namespace std;


//function for searching element

int findElement(int arr[] ,int n, int key){
    int i;
    for(i=0; i<n; i++){
        if(arr[i] == key)
            return i;
    }
    return -1;
}


int main(){
    int arr[] = {23,43,56, 58,45,34};
    int key = 53;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<n;

    int position = findElement(arr, n, key);

    if(position == -1){
        cout<<"Element is not exist" <<endl;
    }else{
        cout<<"Element is found at "<<position+1 <<" position " <<endl;
    }

    return 0;
}