// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int left = 0;
    int right = size - 1;
    int count = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (left >= size || arr[left] != value) {
        return 0;
    }

    int leftBorder = left;
    right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    count = left - leftBorder;
    return count;
}
