#include <iostream>
#include <vector>     
using namespace std;

void print(const vector<int> &v) {
    for(auto ele : v)
        cout << ele << "  ";
    cout << endl;
}

int main() {
    vector<int> v1;
    
    cout << "Initially vector v1 elements are: ";
    print(v1);
    cout << endl;
    
    // 1.push_back() => Insert element from last
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    
    cout << "After push_back() vector v1 elements are: ";
    print(v1);
    
    // 2.pop_back() => Delete element from last
    v1.pop_back();
    v1.pop_back();
    
    cout << "After pop_back() vector v1 elements are: ";
    print(v1);
    cout << endl;
    
    // 3. insert()  => Insert element any position
    v1.insert(v1.begin(), 6);
    cout << "After v1.insert(v1.begin(), 6) vector v1 elements are: ";
    print(v1);
    
    v1.insert(v1.begin()+2, 7);
    cout << "After v1.insert(v1.begin()+2, 7) vector v1 elements are: ";
    print(v1);
    
    v1.insert(v1.begin(), 2, 8);
    cout << "After v1.insert(v1.begin(), 2, 8) vector v1 elements are: ";
    print(v1);
    
    v1.insert(v1.end(),  9);
    cout << "After v1.insert(v1.end(), 9) vector v1 elements are: ";
    print(v1);
    
    v1.insert(v1.end()-2, 10);
    cout << "After v1.insert(v1.end()-2, 10) vector v1 elements are: ";
    print(v1);
    
    v1.insert(v1.end(), 2, 88);
    cout << "After v1.insert(v1.end(), 2, 99) vector v1 elements are: ";
    print(v1);
    cout << endl;
    
    // 4. erase()  => Remove element from any position
    v1.erase(v1.begin());
    cout << "After v1.erase(v1.begin()) vector v1 elements are: ";
    print(v1);
    
    v1.erase(v1.begin()+2);
    cout << "After v1.erase(v1.begin()+2) vector v1 elements are: ";
    print(v1);
    
    v1.erase(v1.end()-1);
    cout << "After v1.erase(v1.end()-1) vector v1 elements are: ";
    print(v1);
    
    v1.erase(v1.end()-3);
    cout << "After v1.erase(v1.end()-3) vector v1 elements are: ";
    print(v1);
    
    v1.erase(v1.begin(), v1.end()-2);
    cout << "After v1.erase(v1.begin(), v1.end()-2) vector v1 elements are: ";
    print(v1);
    
    cout << endl << endl;
    
	// 5. assign()  =>  It assigns new value to the vector elements by replacing old
    
    cout << "The vector v1 elements before assign operations: ";
    print(v1);
    // fill the vector with 10 five times
    v1.assign(v1.size(), 10);       // v1.size(2, 10);
 
    cout << "The vector v1 elements after v1.assign(v1.size(), 10) operations: ";
    print(v1);
    
    v1.assign(5, 10);       // v1.size(2, 10);
 
    cout << "The vector v1 elements after v1.assign(5, 10) operations: ";
    print(v1);
    
    // 6. emplace()    =>  inserts at the beginning
    cout << "\nThe vector v1 elements before emplace() operations: ";
    print(v1);
    
    v1.emplace(v1.begin(), 44);
    
    cout << "The vector v1 elements after emplace() operations: ";
    print(v1);
 
    // 7. emplace_back()   =>  Inserts at the end
    cout << "\nThe vector v1 elements before emplace_back() operations: ";
    print(v1);
    
    v1.emplace_back(99);
    
    cout << "The vector v1 elements after emplace_back() operations: ";
    print(v1);
    
    // 8. clear()   => erases the vector or clear vector
    cout << "\nVector v1 size before clear(): " << v1.size() << endl;
    v1.clear();
    cout << "Vector v1 size after clear(): " << v1.size() << endl;
    
    
    // 9. copy()    =>   It is used to swap the contents of one vector with another vector of same type. Sizes may differ
    vector<int> v2 = {11, 12, 13, 14, 15};
 
    vector<int> v3 = {22, 33, 44, 55, 66};
 
    cout << "\n\nBefore Swap vector v2 elements are: ";
    print(v2);
 
    cout << "Before Swap vector v3 elements are: ";
    print(v3);

    v2.swap(v3);
 
    cout << "\nAfter Swap vector v2 elements are: ";
    print(v2);
 
    cout << "After Swap vector v3 elements are: ";
    print(v3);


    // 9. copy vector elements
    vector<int> v4;
    cout << "\n\Before copy vector v3 vector v4 elements are:";
    print(v4);
    
    v4 = v3;
    
    cout << "After copy vector v3 vector v4 elements are:";
    print(v4);
  
	return 0;

}
