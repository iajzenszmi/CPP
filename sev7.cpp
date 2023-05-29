#include <iostream>
#include <random>

using namespace std;

int main() {
  // Initialize the array.
  int array[7][7][7][7][7][7] = {};

  // Generate random values for the array.
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dis(1, 100);

  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      for (int k = 0; k < 7; k++) {
        for (int l = 0; l < 7; l++) {
          for (int m = 0; m < 7; m++) {
            for (int n = 0; n < 7; n++) {
              array[i][j][k][l][m][n] = dis(gen);
            }
          }
        }
      }
    }
  }

  // Print the array.
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      for (int k = 0; k < 7; k++) {
        for (int l = 0; l < 7; l++) {
          for (int m = 0; m < 7; m++) {
            for (int n = 0; n < 7; n++) {
              cout << array[i][j][k][l][m][n] << " ";
            }
            cout << endl;
          }
        }
      }
    }
  }

  // Insert a value into the array.
  int value = 101;
  int i = 2;
  int j = 3;
  int k = 4;
  int l = 5;
  int m = 6;
  int n = 1;

  array[i][j][k][l][m][n] = value;

  // Print the array again.
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      for (int k = 0; k < 7; k++) {
        for (int l = 0; l < 7; l++) {
          for (int m = 0; m < 7; m++) {
            for (int n = 0; n < 7; n++) {
              cout << array[i][j][k][l][m][n] << " ";
            }
            cout << endl;
          }
        }
      }
    }
  }

  // Delete a value from the array.
  i = 2;
  j = 3;
  k = 4;
  l = 5;
  m = 6;
  n = 1;

  array[i][j][k][l][m][n] = 0;

  // Print the array again.
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      for (int k = 0; k < 7; k++) {
        for (int l = 0; l < 7; l++) {
          for (int m = 0; m < 7; m++) {
            for (int n = 0; n < 7; n++) {
              cout << array[i][j][k][l][m][n] << " ";
            }
            cout << endl;
          }
        }
      }
    }
  }

  return 0;
}
