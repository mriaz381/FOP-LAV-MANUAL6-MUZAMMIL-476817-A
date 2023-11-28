#include <iostream>

using namespace std;

int main() {
  int sum = 0;
  int num = 2; 

  while (num <= 50) {
    bool isPrime = true;

    for (int i = 2; i * i <= num; i++) { 
      if (num % i == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      cout << num << " ";
      sum += num;
    }
    num++;
  }
  cout << endl;
  cout << "Sum of prime numbers from 1 to 50: " << sum << endl;

  return 0;
}

