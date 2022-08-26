//Name:- Shivam Sindhi
//Roll No:- 2010992094
//Group:-20
//Set:- 03
//Q1
#include <iostream>
#include <stdio.h>
using namespace std;

//function to swap elements
void swap(int arr[], int i, int j){
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

// rearrange the array
void rearrange(int arr[], int n){

    for (int i=1; i<n; i+=2){
        // swap
        if (arr[i-1] > arr[i]){
            swap(arr, i-1, i);
        }
        //swap
        if (i+1<n && arr[i+1] > arr[i]){
            swap(arr, i+1, i);
        }
    }
}

int main(void){
    int n; //size of array
    cin>>n;
    int arr[n];

    //input array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    try
    {
        rearrange(arr, n);
    }
    catch (int error)
    {
        cout <<"Error: "<<error<<endl;
    }

    //print output array
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
