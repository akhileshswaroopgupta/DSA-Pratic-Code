#include <iostream>
using namespace std;

void printArray(int arr[], int S) {
  for (int i = 0; i < S; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void insertionSort(int arr[], int S) {
  for (int step = 1; step < S; step++) {
    int key = arr[step];
    int j = step - 1;

   while (key < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
  }
}

int main() {
  int data[] = {11, 7, 2, 15, 3};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  cout << "Sorted array is = :\n";
  printArray(data, size);
}