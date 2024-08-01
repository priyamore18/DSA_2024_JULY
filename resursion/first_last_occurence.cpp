#include <iostream>
using namespace std;

int first(int start, int end, int key, int arr[]) {
    if (start > end) {
        return -1; // Element not found
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key) {
        int temp = first(start, mid - 1, key, arr);
        if (temp != -1) {
            return temp; // Return earlier occurrence
        } else {
            return mid; // Return current occurrence
        }
    } else if (arr[mid] > key) {
        return first(start, mid - 1, key, arr);
    } else {
        return first(mid + 1, end, key, arr);
    }
}

int last(int start, int end, int key, int arr[]) {
    if (start > end) {
        return -1; // Element not found
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key) {
        int temp = last(mid + 1, end, key, arr);
        if (temp != -1) {
            return temp; // Return later occurrence
        } else {
            return mid; // Return current occurrence
        }
    } else if (arr[mid] > key) {
        return last(start, mid - 1, key, arr);
    } else {
        return last(mid + 1, end, key, arr);
    }
}

int main() {
    int arr[6] = {1, 2, 3, 3, 4, 5};
    int key = 3;

    int a = first(0, 5, key, arr);
    int b1 = last(0, 5, key, arr);

    if (a != -1) {
        cout << "First occurrence of the element is at index " << a << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    if (b1 != -1) {
        cout << "Last occurrence of the element is at index " << b1 << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
