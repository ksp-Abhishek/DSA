#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;

        }
        // eske baad right wale part p jaana
        if (key>arr[mid]){
            start=mid+1;

        }
        else{
            end=mid-1;
            }
            
            mid=(start+end)/2;
            
        
    }
    return -1;
}
int main(){
    int arr[6]={2,4,6,8,12,18};
    
    int arrindex=binarysearch(arr,6,12);
    cout<<"index of 12 is"<<arrindex<<endl;
     
   
    return 0;
}