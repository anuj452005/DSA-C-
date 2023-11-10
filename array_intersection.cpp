#include<iostream>

using namespace std;
 void inter(int arr[],int n,int brr[],int m){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i]==brr[j]){
            cout<<arr[i]<<" ";
            brr[j]=INT16_MIN;
            break;
        }
    }
}



 }



int main(){
    int arr[]={1,2,2,2,3};
    int brr[]={2,2,3};

inter(arr,5,brr,3);
    return 0;
}