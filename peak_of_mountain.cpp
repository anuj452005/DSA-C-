#include<iostream>

using namespace std;
 int peakofmountain(int arr[],int n,int s,int e){
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
        return mid;
        }
        else if(arr[mid]>arr[mid-1] ){
            //increasing taraf 
            s=mid+1;
        }
        else if(arr[mid]<arr[mid-1] ){
            //decresing taraf h 
            e=mid-1;
        }
    }
    return ans;

 }

int main(){
   
int arr[]={1,2,8,6,5};
int a=peakofmountain(arr,5,0,4);
cout<<" index of peak index in arr  "<<a<<endl;








    return 0;
}