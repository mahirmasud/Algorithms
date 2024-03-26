
#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        int min_idx = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}
int binarySearch(const int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int size, target;
    cout << "Enter the size: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    selectionSort(arr, size);
    cout << "Sorted: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the interested number: ";
    cin >> target;
    int index = binarySearch(arr, size, target);
    if (index != -1)
    {
        cout << "Interested number found at: " << index << endl;
    }
    else
    {
        cout << "Interested number not found." << endl;
    }
    return 0;
}