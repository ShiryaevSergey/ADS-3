// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int l = 0;
int r = size - 1;
int mid = 0;
int k = 0;
  while (l < r) {
    mid = (l + r) / 2;
    if (value < arr[mid]) 
      r = mid;
    else 
      l = mid + 1;   
  }
  if (arr[l] == value) {
    while (arr[l] == value) {
      k++;
      l++;
    }
  }
  if (k != 0)
    return k;
  else
    return 0;      
}
