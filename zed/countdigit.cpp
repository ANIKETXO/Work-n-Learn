#include<bits/stdc++.h>
using namespace std;
int evenlyDivides(int N) {
  int count = 0;
  int digit;

  // Loop until N becomes 0
  while (N > 0) {
    // Extract the last digit
    digit = N % 10;

    // Check if the digit is non-zero and divides N evenly
    if (digit != 0 && N % digit == 0) {
      count++;
    }

    // Remove the last digit for next iteration
    N /= 10;
  }

  return count;
};
