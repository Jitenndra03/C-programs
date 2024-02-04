void transpose(int A[][], int n) {
  // n is the size of the square matrix
  int i, j, temp;
  for (i = 0; i < n; i++) {
    for (j = 0; j < i; j++) {
      // Swap the elements at position [i, j] and [j, i]
      temp = A[i][j];
      A[i][j] = A[j][i];
      A[j][i] = temp;
    }
  }
}

