#include<iostream>
using namespace std;

template<class T>    // template<class T> 
T arrMax(T arr[], int n){
    T ans = arr[0];
    
    for(int i=1; i<n; i++) {
        if(arr[i] > ans)
            ans = arr[i];
    }
    return ans;
}

int main() {
    int arr1[] = {10, 40, 3};
    cout << arrMax(arr1, 3) << endl;         // cout << arrMax<int> (arr1, 3) << endl;
    
    float arr2[] = {10.5, 3.5, 1.5, 30.5};
    cout << arrMax(arr2, 4) << endl;        // cout << arrMax<float> (arr2, 4) << endl;
    
    return 0;
}
