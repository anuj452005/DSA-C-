#include<bits/stdc++.h>
using namespace std;

int point(int arr[], int n)
{
    int s = 0;
    int e = 5;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[0])
        {
            s = mid + 1; // rigth wale me jao
        }
        else if (arr[mid] < arr[n - 1])
        {
            e = mid - 1; // left wale me jao
        }
    }
    return -1;
}

int binary(int crr[], int n,int key,int start,int end)
{
     start = 0;
    end = n - 1;
   
   int mid=(start+end)/2;
   while (start<=end)
   {
    if(crr[mid]==key){
        return mid;
    }
if(key>crr[mid]){
    start=mid+1;
}
else{
    end=mid-1;}

mid=(start+end)/2;

   }
   return -1;
   }


int search(int arr[],int n,int s,int e,int key ){
    int povit=point(arr,5);
    if(key>=arr[povit] && key<=arr[n-1]){
        //second line me lie kar rah ah 
        return binary(arr,n,key,povit,n-1);
    }
    else{
        return binary(arr,n,key,0,povit-1);
    }
}



int main(){
int arr[]={11,12,18,2,4};

int a=search(arr,5,0,4,12);
cout<<"key= "<<a<<endl;

    return 0;
}