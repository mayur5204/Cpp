int Partition(int A[], int l, int h) {
  int pivot = A[l];
  int i = l - 1;
  int j = h + 1;

  while (true) {
    do {
      i++;
    } while (A[i] < pivot);

    do {
      j--;
    } while (A[j] > pivot);

    if (i < j) {
      swap(A[i], A[j]);
    } else {
      if (i == j) {
        return j;
      } else {
        return j - 1;
      }
    }
  }
}
