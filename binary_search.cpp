#include <iostream>

using namespace std;
int binary(int crr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
   
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




int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[7] = {2, 3, 4, 5, 6, 7};
    int indexarr = binary(arr, 6, 10);
    cout << "index of 5in arr = " << indexarr << endl;

    int indexbrr = binary(brr, 6, 11);

    cout << "index of 5 in brr= " << indexbrr << endl;

    return 0;
}
// time compexcity of binary search is log(N)