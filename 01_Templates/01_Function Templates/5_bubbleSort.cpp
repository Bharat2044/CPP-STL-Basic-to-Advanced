#include<iostream>
using namespace std;

template<class T>    // template<class T> 
void printArray(T arr[], int n) {
    for (int i=0; i<n; i++)
        cout << arr[i] << "  ";
    cout << endl < endl;
}

template<class T>    // template<class T> 
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}
 
int main() {
    int arr1[] = {10, 50, 30, 40, 20};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    bubbleSort(arr1, n1);      // bubbleSort<int>(arr1, n1);
    cout << "Sorted integer array : ";
    printArray(arr1, n1);
    
    
    char arr2[] = {'c', 'b', 'g', 'e', 'a', 'f', 'd'};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    bubbleSort(arr2, n2);     // bubbleSort<char>(arr2, n2);
    cout << "Sorted character array : ";
    printArray(arr2, n2);
 
    return 0;
}
