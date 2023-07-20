#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int L[n1], R[n2];
    
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
    i = 0;
    j = 0;
    k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        
        merge(arr, left, mid, right);
    }
}

bool check(int time, int* nums, int n) {
    int currIdx = 0;
    int currWorkers = 1;
    for (int i = 0; i < n; i++) {
        if (nums[i] - nums[currIdx] > 2 * time) {
            currIdx = i;
            currWorkers++;
        }
    }
    return currWorkers <= 3;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int nums[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }
        
        mergeSort(nums, 0, n - 1);
        
        int currLeft = 0;
        int currRight = nums[n - 1];
        while (1) {
            if (currLeft == currRight) {
                printf("%d\n", currLeft);
                break;
            }
            if (currLeft == currRight - 1) {
                if (check(currLeft, nums, n)) {
                    printf("%d\n", currLeft);
                    break;
                } else {
                    printf("%d\n", currRight);
                    break;
                }
            }
            int currMid = (currLeft + currRight) / 2;
            if (check(currMid, nums, n)) {
                currRight = currMid;
            } else {
                currLeft = currMid + 1;
            }
        }
    }

    return 0;
}
