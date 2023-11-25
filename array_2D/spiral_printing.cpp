#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
int top=0;
int bottom=n-1;
int right=n-1;
int left=0;
while(top<=bottom && left<=right){
// top row
for(int i=left;i<=right;i++){
    cout<<arr[top][i]<<" ";
}
top++;
// right columun
for(int i=top;i<=bottom;i++){
    cout<<arr[i][right]<<" ";
}
right--;
//bottom row
for(int i=right;i>=left;i--){
    cout<<arr[bottom][i]<<" ";
}
bottom--;

//left columun
for(int i=bottom;i>=top;i--){
    cout<<arr[i][left]<<" ";
}
left++;


}
    return 0;
}
