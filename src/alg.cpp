// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int l = 0, r = size - 1, mid = 0, k = 0;
       while (l < r) {
         mid = (l + r) / 2;
         if (arr[mid] < value)
          l = mid + 1;
        else
          r = mid;
      }
      if (arr[l] == value) {
        while (arr[l] == value) {
          k++;
          l++;
        }
      }
      if (k)
        return k;
      else
      return 0;  
}
