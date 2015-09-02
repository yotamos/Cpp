#include <iostream>
#include <stdio.h>
#define length 5
#define LENGTH 3
#define WIDTH 3

using namespace std;

void printArray(int *pa) {
    int i;
    
    cout << "[";
    for (i = 0; i < length - 1; i++) {
        cout << *(pa + i) << ", ";
    }
    cout << *(pa + i) << "]";
}

void reverse(int *pa) {
    int arr[length];
    int *ptr = &arr[0];
    int i;
    
    for (i = 0; i < length; i++) {
        *(ptr  + i) = *(pa + i);
    }
    
    for (i = 0; i < length; i++) {
        *(pa + i) = *(ptr + length - 1 - i);
    }
}

void transpose(const int input[][LENGTH], int output[][WIDTH]) {
    int a;
    int b;
    
    for (a = 0; a < LENGTH; a++) {
        int *pout = &output[a][0];
        for (b = 0; b < WIDTH; b++) {
            *(pout + b) = input[b][a];
        }
    }
}

void inputArray(int *pa) {
    int i;
    
    for (i = 0; i < length; i++, pa++) {
        cout << "Please input an integer: ";
        cin >> *pa;
    }
}

void insertionSort(int *pa) {
    int j;
    int i;
    int key;
    for (j = 1; j < length; j++) {
        i = j - 1;
        key = *(pa + j);
        while (i >= 0 && *(pa + i) > key) {
            *(pa + i + 1) = *(pa + i);
            i--;
        }
        *(pa + i + 1) = key;
    }
}

void merge(int *pa, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int a = 0;
    int b = 2;
    int *a1 = &a;
    int *a2 = &b;
    int i;
    int j;
    int k;
    printf("%d\n", n2);
    for (i = 0; i < n1; i++) {
        *(a1 + i) = *(pa + p + i - 1);
    }
    for (j = 0; j < n2; j++) {
        *(a2 + j) = *(pa + q + j);
    }
     printf("%d\n", n2);
    *(a1 + n1) = 100;
    printf("%d\n", n2);
    *(a2 + n2) = 100;
    printf("banana\n");
    i = 0;
    j = 0;
    
    for (k = p; k <= r; k++) {
        if (*(a1 + i) <= *(a2 + j)) {
            *(pa + k) = *(a1 + i);
            i++;
        } else {
            *(pa + k) = *(a2 + j);
            j++;
        }
    }
}

void mergeSort(int *pa, int p, int r) {
    if (p < r) {
        int q = ((p + r) / 2);
        mergeSort(pa, p, q);
        mergeSort(pa, q + 1, r);
        merge(pa, p, q, r);
    }
}

void bubbleSort(int *pa) {
    int i;
    int j;
    int a;
    
    for (i = 0; i < length - 1; i++) {
        for (j = length - 1; j >= i + 1; j--) {
            if (*(pa + j) < *(pa + j - 1)) {
                a = *(pa + j);
                *(pa + j) = *(pa + j - 1);
                *(pa + j - 1) = a;
            }
        }
    }
}

int main() {
    int a[length];
    int *pa = &a[0];
    
    inputArray(pa);

    mergeSort(pa, 0 , length);
    
    printArray(pa);
    
    fflush(stdin);
    getchar();
    return 0;
}
