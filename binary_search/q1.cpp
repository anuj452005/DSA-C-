#include <iostream>

using namespace std;
int firstocc(int crr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans=0;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (crr[mid] == key)
        {
            ans=mid;
            end=mid-1;
        }
      else if (key > crr[mid])//irght me aa gao
        {
            start = mid + 1;
        }
        else if(key<crr[mid])//left me aa gao
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
        
    }
    return ans;
}
int lastocc(int crr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans=0;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (crr[mid] == key)
        {
            ans=mid;
           start=mid+1;
        }
      else if (key > crr[mid])
        {
            start = mid + 1;
        }
        else if(key<crr[mid])
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
        
    }
    return ans;
}


int main()
{
    int arr[6] = {1, 2, 3,3 , 5, 6};
    int brr[7] = {2, 3, 3,4,4, 6, 7};

    int indexarr = firstocc(arr, 6, 3);
    cout << "index of first occurrence of  3 in arr = " << indexarr << endl;

    int a=lastocc(arr,6,3);
   cout << "index of last occurrence of  3 in arr = " << a << endl;
    

    return 0;
}
// time compexcity of binary search is log(N)