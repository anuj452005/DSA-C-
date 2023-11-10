#include <iostream>
using namespace std;
 

 long long int sqrtInteger(int n) {
        
        int s = 0;
        int e = n/2;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){// may be possible answer 
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }


int main()
{
    int n;
    cin >> n;
   
     int tempSol = sqrtInteger(n);
     cout<<"tem "<<tempSol<<endl;
   
    return 0;
}