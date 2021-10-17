#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr1[], int low, int mid, int high)
{
    int i, j, k, arr2[high + 1];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (arr1[i] < arr1[j])
        {
            arr2[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr2[k] = arr1[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        arr2[k] = arr1[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        arr2[k] = arr1[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr1[i] = arr2[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before sorting ";
    printArray(arr, n);
    cout << "Sorting by Merge Sort\n";
    mergeSort(arr, 0, n - 1);
    cout << "After sorting by Merge Sort ";
    printArray(arr, n);

    return 0;
}