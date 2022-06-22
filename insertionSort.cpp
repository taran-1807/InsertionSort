#include <iostream>

using namespace std;

void inputArray(int arr[], int n){
    
    cout<<"Enter array element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void sortArray(int arr[], int n){
    
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--){
            
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
        
}

void printArray(int arr[], int n){
    
    for(int i=0; i<n; i++){
        //printing the array
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    //array declaration
    int arr[100];
    
    //taking input: array size
    cout<<"Enter the size of the array: ";
    int size;
    cin>>size;
    
    inputArray(arr, size);
    sortArray(arr, size);
    printArray(arr, size);
    
    return 0;
    
}
