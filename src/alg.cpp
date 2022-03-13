// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int l = 0;
int r = size - 1;
int mid = 0;
int k = 0;
    while (l <= r) {
        mid = (l + r) / 2;
        if (value == arr[mid]) {
            k++;
        } else if (value < arr[mid]) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return k;  
}
