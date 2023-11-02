#include <iostream>

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

int main()
{

    int arr[] = {4, 5, 6, 1, 2, 3};
    int a = point(arr, 6);
    cout << "povit ponnt " << a << endl;
    return 0;
}
// first point
/*We need to mention one exceptional case here, that if the array is properly sorted (0 times rotation), then we can return 0 in such cases.
Now, the minimum element possess a unique property here that it is less than both of its adjacent elements, and that is also quite obvious.
So as usual we’ll check the mid element if its less than its previous as well as its next element.
If it comes out to be like this, then it is surely the minimum element, and we’ll return its index.
One thing we need to take care about is, suppose my mid is pointing to index=0, then how I’ll reach to its previous element, assuming that its previous element
will be the last element (since it is also a rotated array), then for fetching its previous element, we need to do prev=(mid+n-1)%n, here mid+n-1 will give me n-1 and
(n-1%n) will be n-1, which is the index of the last element. Similarly, if my mid is pointing to the last element, then its next element has to be the first element
of the array, so for that do next=(mid+1)%n. By doing this, we can avoid out of bound situations.*/

// second point
/*Now, if the mid element doesn’t comes out to be the minimum element, we have to move to either side of the array, to pursue the binary search algorithm.
We need to move to that part of the array which consists the minimum element, because that’s what we’re finding.
Suppose my array is:- 6, 8, 9, 10, 1, 3 ,4 , then mid=3(which is pointing to 10), this mid is not the minimum element, so my array gets divided into two parts,
one is (6,8,9,10) an the other is(10,1,2,3), as you can see one part is sorted and the other one is unsorted, so my minimum element always lies in the unsorted
part and this is true for every case. So I’ll be moving to this unsorted part of the array.*/

// third point
/*How can I decide which part is sorted and which is unsorted, then only I can proceed moving to the unsorted part in order to find my minimum element.
For that, we need to check whether my first element is smaller than the mid element or not, if arr[0]<=arr[mid], then this first part of the array is sorted,
and I need to do start=mid+1, in order to move to the second part which is unsorted. Similarly, I’ll check if arr[mid]<=arr[n-1], then the second part is
sorted and first part is unsorted, so do end=mid-1. And then keep on doing this, you’ll definitely reach to the minimum element, because it is pretty sure
that the minimum element lies somewhere in the array. Return mid, when the condition for the minimum element is hit. */
