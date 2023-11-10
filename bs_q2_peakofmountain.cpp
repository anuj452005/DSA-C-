#include<iostream>
using namespace std;
int main()
{
	int x,start=0,end=5;
	int arr[]={7,8,9,10,3};
    while(start<end)
    {
    	x=(start+end)/2;
    	if(arr[x+1]<arr[x] && arr[x-1]<arr[x])
    	{
    		cout<<"The peak elememt is:"<<arr[x]<<endl;
    		return 0;
    	}
    	else
    	{
    		if(arr[x+1]>arr[x])
    		start=x;
    		else
    		end=x;
    	}
    }
return  0;
}