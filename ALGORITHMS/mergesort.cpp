// Merge sort in C++

#include <iostream>
using namespace std;

// Merge two subarrays L and M into arr
void merge(int arr[], int strt, int mid, int end) {
  
  // Create L ← A[strt..mid] and M ← A[mid+1..end]
  int n1 = mid - strt + 1;
  int n2 = end - mid;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[strt + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[mid + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = strt;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[strt..end]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[strt..end]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int strt, int end) {
  if (strt < end) {
    // m is the point where the array is divided into two subarrays
    int mid = strt + (end - strt) / 2;

    mergeSort(arr, strt, mid);
    mergeSort(arr, mid + 1, end);

    // Merge the sorted subarrays
    merge(arr, strt, mid, end);
  }
}

// Print the array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

// Driver program
int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  cout << "Sorted array: \n";
  printArray(arr, size);
  return 0;
}