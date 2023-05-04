#include <iostream> 
#include <algorithm>
#include <vector> 
#include <numeric> //For accumulate operation
using namespace std; 

void print(const vector<int> &v) {
    for(auto &ele : v)
        cout << ele << "  ";
    cout << endl;
}

int main() { 
    // 1. sort() : sort(first_iterator, last_iterator) – To sort the given vector, bydefault in ascending order.
    // sort(first_iterator, last_iterator, greater<int>()) – To sort the given container/vector in descending order
    vector<int> v1 = {4, 2, 7, 5, 3};
    cout << "1. sort() function =====>\n";
    
    cout << "Initially vector v1 is: ";
    print(v1);
 
    // Sorting the vector in Ascending order
    sort(v1.begin(), v1.end());
    cout << "After sorting in Ascending order vector v1 is: ";
    print(v1);
   
    // Sorting the vector in Descending order
    sort(v1.begin(),v1.end(), greater<int>());
    cout << "After sorting in Desscending order vector v1 is: ";
    print(v1);
    
    
    // 2. reverse() : reverse(first_iterator, last_iterator) – To reverse a vector. (if ascending -> descending  OR  if descending -> ascending)
    cout << "\n2. reverse() function =====>\n"; 
    vector<int> v2 = {4, 2, 7, 5, 3};
    
    cout << "Before reversed vector v2 is: ";
    print(v2);
 
    // reverse the vector
    reverse(v2.begin(), v2.end());
    cout << "After  reversed vector v2 is: ";
    print(v2);
    
    
    // 3. max_element() : *max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
    cout << "\n3. max_element() function =====>\n"; 
    vector<int> v3 = {4, 2, -7, 5, -3};
    cout << "Vector v3 is: ";
    print(v3);
    cout << "Largest element of vector v3 = " << *max_element(v3.begin(), v3.end()) << endl;
    
    
    // 4. min_element() : *min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
    cout << "\n4. min_element() function =====>\n"; 
    cout << "Vector v3 is: ";
    print(v3);
    cout << "Smallgest element of vector v3 = " << *min_element(v3.begin(), v3.end()) << endl;
    
    
    // 5. accumulate() : accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements
    cout << "\n5. accumulate() function =====>\n";
    cout << "Vector v3 is: ";
    print(v3);
    // Starting the summation from 0
    cout << "The summation of vector v3 elements is = " << accumulate(v3.begin(), v3.end(), 0) << endl;
    cout << "The summation of vector v3 elements from 0 to 3 index is = " << accumulate(v3.begin(), v3.begin()+4, 0) << endl;
    
    
    // 6. count() : count(first_iterator, last_iterator, x) – To count the occurrences of x in vector.
    cout << "\n6. count() function =====>\n";
    vector<int> v4 = {1, 8, 99, 5, 8, 7, 3, 8, 2, 8};
    cout << "Vector v4 is: ";
    print(v4);
    
    // Counts the occurrences of 20 from 1st tolast element
    cout << "Occurrences of 8 in vector v4 = " << count(v4.begin(), v4.end(), 8) << endl;
    
    
    // 7. binary_search() : binary_search(first_iterator, last_iterator, x) – Tests whether x exists in sorted vector or not.
    cout << "\n7. binary_search() function =====>\n";
    vector<int> v5 = {1, 2, 5, 8, 9, 11, 22, 55, 190};
    cout << "Vector v5 is: ";
    print(v5);
    
    cout << "Element 11 is present in vector v5 or not = " << binary_search(v5.begin(), v5.end(), 11) << endl;
    cout << "Element 10 is present in vector v5 or not = " << binary_search(v5.begin(), v5.end(), 10) << endl;
    
    // 8. lower_bound() : lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.
    cout << "\n8. lower_bound() function =====>\n";
    vector<int> v6 = {5, 10, 15, 20, 20, 23, 42, 45};
    cout << "Vector v6 is: ";
    print(v6);
    vector<int>::iterator x = lower_bound(v6.begin(), v6.end(), 20);   // auto x = lower_bound(v6.begin(), v6.end(), 20);
    // cout << lower_bound(arr, arr+n, 20) << endl;
    cout << "Lower bound of 20 in vector v6 = " << (x-v6.begin()) << endl;
    
    
    // 9. upper_bound() : upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last)  which has a value greater than ‘x’. 
    cout << "\n9. upper_bound() function =====>\n";
    cout << "Vector v6 is: ";
    print(v6);
    
    vector<int>::iterator y = upper_bound(v6.begin(), v6.end(), 20);   // auto y = upper_bound(v6.begin(), v6.end(), 20);
    // cout << upper_bound(arr, arr+n, 20) << endl;
    cout << "Upper bound of 20 in vector v6 = " << (y-v6.begin()) << endl;
    
    
    
    
    return 0; 
}
