// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int count = 0;
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == value) {
            count++;
            int leftCount = mid - 1;
            while (arr[leftCount] == value && leftCount >= 0) {
                count++;
                leftCount--;
            }
            int rightCount = mid + 1;
            while (arr[rightCount] == value && rightCount < size) {
                count++;
                rightCount++;
            }
            break;
        } 
        else if (arr[mid] < value) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
      return count;
    }  
  return 0;
}
