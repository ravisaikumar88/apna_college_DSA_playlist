#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

void countSort(int arr[], int n)
{
    int k = arr[0];
    for (int i = 0; i < n; i++) {
        k = max(k, arr[i]);
    }
    int countArray[k+1];
    memset(countArray, 0, sizeof(countArray));
    for (int i = 0; i < n; i++) {
        countArray[arr[i]]++;
    }
    for (int i = 1; i <= k; i++) {
        countArray[i] += countArray[i - 1];
    }

    int output[n];

    for (int i = n - 1; i >= 0; i--) {
        output[--countArray[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    countSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
