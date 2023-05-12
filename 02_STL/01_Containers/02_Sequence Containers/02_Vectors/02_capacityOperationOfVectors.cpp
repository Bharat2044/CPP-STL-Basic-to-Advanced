#include <iostream>
#include <vector>     
using namespace std;

void print(const vector<int> &v) {
    for(auto ele : v)
        cout << ele << "  ";
    cout << endl;
}

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    
    cout << "Initially vector v1 elements are: ";
    print(v1);
    cout << endl;
    
    // 1. size() : O(n)    =>  Printing number of vector elements
    cout << "The number of vector v1 elements is : " << v1.size() << endl << endl;
 
    // 2. max_size() : O(1)   =>  Printing maximum elements vector can hold
    cout << "Maximum elements vector v1 can hold is : " << v1.max_size() << endl << endl;
    
    // 3. capacity() : O(1)    =>  Gives capacity of vector
    cout << "The capacity of vector v1 is : " << v1.capacity() << endl << endl;
    
    // 4. empty() : O(1)   =>  Checking size of vector if it is empty
    cout << "Vector v1 is empty or not : " << v1.empty() << endl << endl;
 
    // 5. resize()   =>  inserting or deleting the elements from vector
    cout << "Contents of vector v1 before resizing: ";
    print(v1);
 
    // Size of the vector container is lowered
    v1.resize(4);
 
    cout << "Contents of vector v1 after resizing with lowered: ";
    print(v1);
    
    // Size of the vector container is increased
    v1.resize(8);
 
    cout << "Contents of vector v1  after resizing with increased: ";
    print(v1);
    
    // Size of the vector container is increased and new elements are initialized with specified value 
    v1.resize(12, 9);
 
    cout << "Contents of vector v1 after resizing with increased and specified value: ";
    print(v1);
    
    
    // 6. shrink_to_fit()   =>  reduces the capacity of the container to fit its size and destroys all elements beyond the capacity. 
    vector<int> v2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout << "\n\nVector v2 initial size: " << v2.size();
 
    cout << "\nVector v2 elements are: ";
    print(v2);
 
    // changes the size of the Vector, but does not destroys the elements
    v2.resize(5);
 
    cout << "\nVector v2 size after resize(5): " << v2.size();
 
    cout << "\nVector elements after resize(5) are: ";
    print(v2);
        
    v2.shrink_to_fit();
 
    cout << "\nVector v2 size after shrink_to_fit(): " << v2.size();
 
    cout << "\nVector v2 elements after shrink_to_fit() are: ";
    print(v2);

	return 0;

}
