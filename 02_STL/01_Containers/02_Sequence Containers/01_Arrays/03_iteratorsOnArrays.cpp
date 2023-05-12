#include<iostream>
#include<array>     
using namespace std;

int main() {
	array<int, 6> arr{1, 2, 3, 4, 5, 6};  // array<int, 6> arr = {1, 2, 3, 4, 5, 6};
		
    array<int, 6> :: iterator it = arr.begin();
	
	cout << "Initiallay it = " << it << endl;
    cout << "Initiallay (*it) = " << (*it) << endl;
    
    it++;
    cout << "After it++ it = " << it << endl;
    cout << "After it++ (*it) = " << (*it) << endl;
    
    it--;
    cout << "After it-- it = " << it << endl;
    cout << "After it-- (*it) = " << (*it) << endl;
    
    it = next(it);
    cout << "After next(it) it = " << it << endl;
    cout << "After next(it) (*it) = " << (*it) << endl;
    
    it = next(it, 2);
    cout << "After next(it, 2) it = " << it << endl;
    cout << "After next(it, 2) (*it) = " << (*it) << endl;
    
    it = prev(it);
    cout << "After prev(it) it = " << it << endl;
    cout << "After prev(it) (*it) = " << (*it) << endl;
    
    it = prev(it, 3);
    cout << "After prev(it, 3) it = " << it << endl;
    cout << "After prev(it, 3) (*it) = " << (*it) << endl << endl;


    // 1. forward iterator
    cout << "1. Forward Iteraror =====>\n";
    // array<int, 6> :: iterator it1;
    // it1 = arr.begin();    // OR
    array<int, 6> :: iterator it1 = arr.begin();
    
    cout << "Printing array elements:\n";
    for(it1=arr.begin(); it1!=arr.end(); it1++) 
        cout << *it1 << "  ";
    cout << endl;
    
    for(array<int, 6> :: iterator it=arr.begin(); it!=arr.end(); it++)
        cout << *it << "  ";
    cout << endl;
    
    for(auto it = arr.begin(); it!=arr.end(); it++)
        cout << *it << "  ";
    cout << endl;
        
    cout << "Printing array elements in reverse order:\n";
    for(it1=arr.end()-1; it1!=arr.begin()-1; it1--)
        cout << *it1 << "  ";
    cout << endl;
    
    for(auto it = arr.begin(); it!=arr.end(); it++)
        *it *= 2;
    
    cout << "After updating  array elements are:\n";
    for(auto it = arr.begin(); it!=arr.end(); it++)
        cout << *it << "  ";
    cout << endl;
    
    arr = {1, 2, 3, 4, 5, 6};   // set initial value
    
    // 2. reverse_iterator
    cout << "\n\n2. Reverse Iteraror =====>\n";
    array<int, 6> :: reverse_iterator it2 = arr.rbegin();
    
    cout << "Printing array elements:\n";
    for(it2=arr.rend()-1; it2!=arr.rbegin()-1; it2--)
        cout << *it2 << "  ";
    cout << endl;
        
    cout << "Printing array elements in reverse order:\n";
    for(it2=arr.rbegin(); it2!=arr.rend(); it2++) 
        cout << *it2 << "  ";
    cout << endl;
    
    for(array<int, 6> :: reverse_iterator it2=arr.rbegin(); it2!=arr.rend(); it2++)
        cout << *it2 << "  ";
    cout << endl;
    
    for(auto it2 = arr.rbegin(); it2!=arr.rend(); it2++)
        cout << *it2 << "  ";
    cout << endl;
    
    
    // const_iterator   =>  read only
    cout << "\n\n3. Const Iteraror =====>\n";
    // array<int, 6> :: const_iterator it3 = arr.begin(); // OR
    array<int, 6> :: const_iterator it3 = arr.cbegin(); 
    
    cout << "Printing array elements:\n";
    for(it3=arr.begin(); it3!=arr.end(); it3++) 
        cout << *it3 << "  ";
    cout << endl;
    
    for(array<int, 6> :: const_iterator it3=arr.begin(); it3!=arr.end(); it3++)
        cout << *it3 << "  ";
    cout << endl;
    
    for(auto it3 = arr.begin(); it3!=arr.end(); it3++)
        cout << *it3 << "  ";
    cout << endl;
        
    cout << "Printing array elements in reverse order:\n";
    for(it3=arr.cend()-1; it3!=arr.cbegin()-1; it3--)
        cout << *it3 << "  ";
    cout << endl;
    // *it3 *= 2;  //error: assignment of read-only location '* it3'
    
    
    // 4. const_iterator   =>  read only
    cout << "\n\n4. Const Reverse Iteraror =====>\n";
    array<int, 6> :: const_reverse_iterator it4 = arr.rbegin();
    
    cout << "Printing array elements:\n";
    for(it4=arr.rend()-1; it4!=arr.rbegin()-1; it4--)
        cout << *it4 << "  ";
    cout << endl;
        
    cout << "Printing array elements in reverse order:\n";
    for(it4=arr.rbegin(); it4!=arr.rend(); it4++) 
        cout << *it4 << "  ";
    cout << endl;
    
    for(array<int, 6> :: const_reverse_iterator it4=arr.rbegin(); it4!=arr.rend(); it4++)
        cout << *it4 << "  ";
    cout << endl;
    
    for(auto it4 = arr.crbegin(); it4!=arr.crend(); it4++)
        cout << *it4 << "  ";
    cout << endl;
    
    // *it4 *= 2;  // error: assignment of read-only location ‘it4.std::reverse_iterator::operator*()’
    
	return 0;

}
