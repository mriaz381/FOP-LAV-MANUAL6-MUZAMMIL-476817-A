#include <iostream>

using namespace std;

int main() {
  int rows; 
  
  cout << "Enter the number of rows: ";
  cin >> rows;
  int triangle[rows + 1][rows + 1]; 
  for (int i = 0; i < rows + 1; i++) {
    triangle[0][i] = 1;
  }
  for (int i = 1; i < rows + 1; i++) {
    triangle[i][0] = 1;

    for (int j = 1; j < rows + 1; j++) {
      triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
    }
  }
  for (int i = 0; i < rows + 1; i++) {
    for (int j = 0; j < rows + 1; j++) {
      if (triangle[i][j] == 0) {
        continue;
      }
      cout << triangle[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

