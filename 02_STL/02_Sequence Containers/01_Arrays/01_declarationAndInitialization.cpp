#include<iostream>
#include<array>
using namespace std;

int main() {
	array<int, 5> arr1;    // declaration
	array<int, 6> arr2 = {1, 2, 3, 4, 5, 6};    // declaration + initialization

    // printing elements
    cout << "arr1 elements are: ";
    for(int i=0; i<5; i++)
        cout << arr1[i] << "  ";
    cout << endl;
    
    // printing elements
    cout << "\narr2 elements are: ";
    for(int i=0; i<6; i++)
        cout << arr2.at(i) << "  ";
    cout << endl;
    
    for(int i=0; i<10; i++)
        cout << arr2[i] << "  ";    // not bound checking here
    cout << endl;
    
    // for(int i=0; i<10; i++)      //     // not bound checking here
    //     cout << arr2.at(i) << "  ";    // bound checking here
    // cout << endl;
    
    
    // taking input from user
    int n;
    cout << "\nEnter size of the array: ";
    cin >> n;
    
    array<int, 100> arr3;
    cout << "Enter array arr3 elements:\n";
    for(int i=0; i<n; i++) 
        cin >> arr3[i];
        
    cout << "\narr3 elements are: ";
    for(int i=0; i<n; i++)
        cout << arr3.at(i) << "  ";
    cout << endl;
    

	return 0;

}
