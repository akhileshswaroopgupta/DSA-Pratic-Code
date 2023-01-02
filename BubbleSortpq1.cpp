#include<iostream>
using namespace std;

void bubbleSort(int arr[], int S) {

  for (int step = 0; step < (S-1); ++step) {
  int swapped = 0;
 
    for (int i = 0; i < (S-step-1); ++i) {
   
      if (arr[i] > arr[i + 1]) {

        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        
        swapped = 1;
      }
    }

    if (swapped == 0)
      break;
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-1, 42, 0, 13, -7};
  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);
  cout << "Sorted Array is = :\n";
  printArray(data, size);
}