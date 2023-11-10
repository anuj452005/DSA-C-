#include<iostream>

using namespace std;

//swap aan elemen t 

void swap(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//find unique elemrnt in array 
void unique(int arr[],int n){
int ans=0;
for(int i=0;i<n;i++){
    ans=ans^arr[i];
    }
cout<<"unique"<<" "<<ans;


}


int main(){
int odd[]={1,2,3,4,5,6,7};
int even[]={1,2,3,4,5,6};

swap(odd,7);
swap(even,6);

int uni[]={1,1,2,2,3,3,6};
unique(uni,7);//unique element 



    return 0;
}