/*Running the for loop till the square root of the number

A prime number is a natural number that is only divisible by 1 and by itself. Examples 1 2 3 5 7 11 13 17 19 …

Using a for loop for checking if the number is divisible by a number from 2 to its square root.

Running the for loop from 2 to the square root of the number.

And then checking if the number is divisible by the numbers from 2 to its square root.

Then, If the remainder is zero, that means it is divisible and hence not a prime number.

If the loop runs till square root and none of the numbers divided it completely. So it is the Prime number.*/



#include<bits/stdc++.h>

using namespace std;

bool isPrime(int N) {
  for (int i = 2; i < sqrt(N); i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {

  int n = 11;

  bool ans = isPrime(n);
  if (n != 1 && ans == true) {
    cout << "Prime Number";
  } else {
    cout << "Non Prime Number";
  }
  return 0;
}

