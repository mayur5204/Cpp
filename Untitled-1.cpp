#include <iostream>
using namespace std;

int Partition(int A[], int l, int h) {
    int pivot = A[l];
    int i = l, j = h;
    while (i < j) {
        while (A[i] <= pivot) {
            i++;
        }
        while (A[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(A[i], A[j]);
        }
    }
    swap(A[l], A[j]);
    return j;
} // added closing brace for Partition function

int main() {
    int A[] = { 5, 3, 8, 4, 2, 7, 1, 10 };
    int n = sizeof(A) / sizeof(A[0]);
    int l = 0, h = n - 1;
    int p = Partition(A, l, h);
    cout << "Array after partitioning: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Index of pivot element: " << p << endl;
    return 0;
}