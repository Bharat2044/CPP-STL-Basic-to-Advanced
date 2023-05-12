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
    
    // Initializing from another vector 
    vector<int> v7(v6.begin(), v6.end());
    
    // Initializing from an array
    int arr[] = {10, 5, 20, 45};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> v8(arr, arr+size);
    
    // Initializing all elements with a particular value :
    vector<int> v9(10);
    int value = 5;
    fill(v9.begin(), v9.end(), value);

    // Printing Vector Size  
    cout << "--------- Printing Vector Size: ---------\n";
    cout << "Size of v1 = " << v1.size() << endl;
    cout << "Size of v2 = " << v2.size() << endl;
    cout << "Size of v3 = " << v3.size() << endl;
    cout << "Size of v4 = " << v4.size() << endl;
    cout << "Size of v5 = " << v5.size() << endl;
    cout << "Size of v6 = " << v6.size() << endl;
    cout << "Size of v7 = " << v7.size() << endl;
    cout << "Size of v8 = " << v8.size() << endl;
    cout << "Size of v9 = " << v9.size() << endl;


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
    
    cout << "Vector v8 elements are: ";
    print(v8);
    
    cout << "Vector v9 elements are: ";
    print(v9);
    
    // Taking Input From User
    int n;
    cout << "\nEnter size of vector: ";
    cin >> n;
    
    vector<int> v10;
    cout << "Enter vector elements:\n";
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        v10.push_back(x);
    }
    
    cout << "Vetcor v10 elements are: ";    
    print(v10);
    cout << "First element of v10 = " << v10.front() << endl;
    cout << "First element of v10 = " << v10.back() << endl;

    return 0;
}
