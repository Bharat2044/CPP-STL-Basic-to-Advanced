#include<iostream>
#include<array>     // for arrray, at()
#include<tuple>     // for get()
using namespace std;

int main() {
	array<int, 6> arr = {1, 2, 3, 4, 5, 6};    // declarration + initialization
    
    // 1. at()  =>  Printing array elements using at()
    cout << "The arrray elements are (using at()) : ";
    for(int i=0; i<6; i++)
        cout << arr.at(i) << "  ";
    cout << endl << endl;
 
    // 2. get() =>  Printing array elements using get()
    cout << "The arrray elements are (using get()) : ";
    cout << get<0>(arr) << "  " << get<1>(arr) << "  ";
    cout << get<2>(arr) << "  " << get<3>(arr) << "  ";
    cout << get<4>(arr) << "  " << get<5>(arr) << "  ";
    cout << endl << endl;
 
    // 3. operator[]    =>  Printing arrray elements using operator[]
    cout << "The arrray elements are (using operator[]) : ";
    for(int i=0; i<6; i++)
        cout << arr[i] << "  ";
    cout << endl << endl;
    
    // 4. front()   =>  Printing first element of array
    cout << "First element of array is : ";
    int &a = arr.front();   // int a = arr.front();
    cout << a << endl << endl;
 
    // 5. back()    =>  Printing last element of array
    cout << "Last element of array is : ";
    int &b = arr.back();    // int b = arr.back();
    cout << b << endl << endl;
    
    cout<<"Array before updating first and last element : ";
    for(auto x: arr) 
        cout << x << "  ";
    cout << endl;
    
    //change first and last element of array using these references
    a = 10;
    b = 60; 
    
    cout<<"Array after updating first and last element : ";
    for(auto x: arr) 
        cout << x << "  ";
    cout << endl << endl;
    
    
    // 6. size()    =>  Printing number of array elements
    cout << "The number of array elements is : ";
    cout << arr.size() << endl << endl;
 
    // 7. max_size()   =>  Printing maximum elements array can hold
    cout << "Maximum elements array can hold is : ";
    cout << arr.max_size() << endl << endl;
    
    // 8. empty()   =>  Checking size of array if it is empty
    cout << "Array is empty or not : " << arr.empty() << endl << endl;
    
    array<int, 5> arr2;
    // Displaying array before filling
    cout << "Array arr2 after filling operation is : ";
    for(int i=0; i<arr2.size(); i++)
        cout << arr2[i] << " ";
    cout << endl;
    
    // 9. fill()    =>  Filling array with value
    arr2.fill(9);
    
    // Displaying array after filling
    cout << "Array arr2 before filling operation is : ";
    for(int i=0; i<arr2.size(); i++)
        cout << arr2[i] << " ";
    cout << endl << endl;
    
    // 10. swap() :- The swap() swaps all elements of one array with other.
    array<int, 6> arr3 = {1, 2, 3, 4, 5, 6};
    array<int, 6> arr4 = {7, 8, 9, 10, 11, 12};
 
    // Printing 1st and 2nd array before swapping
    cout << "The arr3 array elements before swapping are : ";
    for(int i=0; i<6; i++)
        cout << arr3[i] << "  ";
    cout << endl;
    cout << "The arr4 array elements before swapping are : ";
    for(int i=0; i<6; i++)
        cout << arr4[i] << "  ";
    cout << endl;
 
    // Swapping ar1 values with ar
    arr3.swap(arr4);
 
    // Printing 1st and 2nd array after swapping
    cout << "The arr3 array elements after swapping are : ";
    for(int i=0; i<6; i++)
        cout << arr3[i] << "  ";
    cout << endl;
	
    cout << "The arr4 array elements after swapping are : ";
    for(int i=0; i<6; i++)
        cout << arr4[i] << "  ";
    cout << endl;

	return 0;

}
