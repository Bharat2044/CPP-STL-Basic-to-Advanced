#include<iostream>
#include<array>
using namespace std;

int main() {
	array<int, 5> arr1;    // declaration
	array<int, 6> arr2 = {1, 2, 3, 4, 5, 6};    // declaration + initialization
	array<int, 6> arr3{6, 7, 8, 9, 10, 11};	    // declaration + initialization

    // printing elements
    cout << "Array arr1 elements are: ";
    for(int i=0; i<5; i++)
        cout << arr1[i] << "  ";
    cout << endl;
	
    cout << "\nArray arr2 elements are: ";
    for(int i=0; i<6; i++)
        cout << arr2.at(i) << "  ";
    cout << endl;
    
    for(int i=0; i<10; i++)
        cout << arr2[i] << "  ";    // not bound checking here
    cout << endl;
    
    cout << "\nArray arr3 elements are: ";
    for(auto ele : arr3)
        cout << ele << "  ";
    cout << endl;
    
    // for(int i=0; i<10; i++)      //     // not bound checking here
    //     cout << arr2.at(i) << "  ";    // bound checking here
    // cout << endl;
    
    
    // taking input from user
    int n;
    cout << "\nEnter size of the array: ";
    cin >> n;
    
    array<int, 100> arr4;
    cout << "Enter array arr4 elements:\n";
    for(int i=0; i<n; i++) 
        cin >> arr4[i];
        
    cout << "\nArray arr4 elements are: ";
    for(int i=0; i<n; i++)
        cout << arr4.at(i) << "  ";
    cout << endl;

	return 0;
}
