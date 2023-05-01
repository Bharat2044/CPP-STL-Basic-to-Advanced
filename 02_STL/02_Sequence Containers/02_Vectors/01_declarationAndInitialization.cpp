#include <iostream>
#include <vector>
using namespace std;

// Printing Vector Elements
void print(const vector<int> &v) {
    for(int i=0; i<v.size(); i++)
        cout << v[i] << "  ";
    cout << endl;
}

int main() {
    // Declaration
    vector<int> v1;
    vector<int> v2(5);
    
    // Declaration + Initialization
    vector<int> v3(4, 0);
    vector<int> v4(6, -2);
    vector<int> v5{1, 2, 6, 4};
    vector<int> v6 = {1, 2, 3, 4, 5, 7};
    
    // Copy array elements into vector
    int arr[] = {10, 5, 20, 45};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> v7(arr, arr+size);

    // Printing Vector Size  
    cout << "--------- Printing Vector Size: ---------\n";
    cout << "Size of v1 = " << v1.size() << endl;
    cout << "Size of v2 = " << v2.size() << endl;
    cout << "Size of v3 = " << v3.size() << endl;
    cout << "Size of v4 = " << v4.size() << endl;
    cout << "Size of v5 = " << v5.size() << endl;
    cout << "Size of v5 = " << v6.size() << endl;
    cout << "Size of v7 = " << v7.size() << endl;


    // Printing Vector Elements
    cout << "\n--------- Printing vector Elements: ---------\n";
    cout << "Vector v1 elements are: ";
    print(v1);

    cout << "Vector v2 elements are: ";
    print(v2);

    cout << "Vector v3 elements are: ";
    print(v3);

    cout << "Vector v4 elements are: ";
    print(v4);

    cout << "Vector v5 elements are: ";
    print(v5);

    cout << "Vector v6 elements are: ";
    print(v6);
    
    cout << "Vector v7 elements are: ";
    print(v7);
    
    // Taking Input From User
    int n;
    cout << "\nEnter size of vector: ";
    cin >> n;
    
    vector<int> v8;
    cout << "Enter vector elements:\n";
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        v8.push_back(x);
    }
    
    cout << "Vetcor v8 elements are: ";    
    print(v8);
    cout << "First element of v8 = " << v8.front() << endl;
    cout << "First element of v8 = " << v8.back() << endl;

    return 0;
}
