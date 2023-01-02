#include <iostream>
using namespace std;

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}
void printArray(int A[], int S) {
  for (int i = 0; i < S; i++) {
    cout << A[i] << " ";
  }
  cout << endl;
}

void selectionSort(int A[], int S) {
  for (int step = 0; step < S - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < S; i++) {
      if (A[i] < A[min_idx])
        min_idx = i;
    }

    swap(A[min_idx], A[step]);
  }
}

int main() {
  int data[] = {22, 11, 14, 19, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  cout << "Sorted array is = :\n";
  printArray(data, size);
}