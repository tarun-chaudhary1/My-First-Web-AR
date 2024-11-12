#include<iostream>
using namespace std;

// int  sumOf( int arr[],int size){

//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum=sum+arr[i];
//     }
//     return sum;
// }

void reverse(int arr[],int size){
    
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
        
}
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
   cout<<endl;
}

int main(){
    int num[5]={  5,4,3,9,-22};
    int n = sizeof(num)/sizeof(int);
    cout<<"Hello";
    reverse(num,n);
    
    printArr(num,n);

}