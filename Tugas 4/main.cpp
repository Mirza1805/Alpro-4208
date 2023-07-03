#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int linearSearch(const vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}


int binarySearch(const vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> numbers = {6, 2, 4, 10, 3};

    cout << "Array sebelum diurutkan: ";
    printVector(numbers);

    cout << "\nBubble Sort:" << endl;
    bubbleSort(numbers);
    cout << "Array setelah diurutkan (Bubble Sort): ";
    printVector(numbers);

    cout << "\nInsertion Sort:" << endl;
    insertionSort(numbers);
    cout << "Array setelah diurutkan (Insertion Sort): ";
    printVector(numbers);

    cout << "\nSelection Sort:" << endl;
    selectionSort(numbers);
    cout << "Array setelah diurutkan (Selection Sort): ";
    printVector(numbers);

     int target;
    cout << "\n Masukkan angka yang ingin dicari: ";
    cin >> target;


    int linearIndex = linearSearch(numbers, target);

    if (linearIndex != -1)
    {
        cout << "Angka ditemukan pada indeks " << linearIndex << " (linear search)" << endl;
    }
    else
    {
        cout << "Angka tidak ditemukan (linear search)" << endl;
    }


    int binaryIndex = binarySearch(numbers, target);
    if (binaryIndex != -1)
    {
        cout << "Angka ditemukan pada indeks " << binaryIndex << " (binary search)" << endl;
    }
    else
    {
        cout << "Angka tidak ditemukan (binary search)" << endl;
    }

    return 0;
}
