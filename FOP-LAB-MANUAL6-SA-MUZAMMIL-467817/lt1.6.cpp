#include <iostream>

using namespace std;

int main() {
  int n; 

  cout << "Enter the number of terms to generate: ";
  cin >> n;
  int a = 0;
  int b = 1;

  for (int i = 0; i < n; i++) {
    cout << a << " ";

    int temp = a;
    a = b;
    b = temp + b;
  }

  return 0;
}

