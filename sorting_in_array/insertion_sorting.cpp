#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={8,4,1,5,9,2};
for(int i=1;i<6;i++){
    int temp=arr[i];
    int j=i-1;
while(arr[j]>temp && j>=0){
    arr[j+1]=arr[j];//shift right by one 
}
arr[j+1]=temp;
j--;
}
for(int i=0;i<6;i++){
    printf("%d",arr[i]);
}

    return 0;
}

