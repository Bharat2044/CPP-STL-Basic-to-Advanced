/*
Vector Erase and Clear:

Given a Vector V of size N containing integers. Complete below functions on given vector depending on type of erasable query
1. clearAll(): This function removes all elements from vector.
2. eraseAt(): This function removes element from specified position present in the vector.
3. eraseInRange(): This function removes element from vector in the given range start & end.

Example 1:

Input:
N = 5
vector -> 2 3 4 5 6
2 3

Output: 
2 3 4 6

Explanation:
Query in this case is to remove element from specified position, thus after removal/modification elements present in the vector are 2 3 4 6.

Your Task:
Your task is to complete all the functions.
*/


#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v) {
    for(auto &ele : v)
        cout << ele << "  ";
    cout << "\n";
}

void clearAll(vector<int> v) {
    cout << "Before clear vector elements are : ";
    print(v);
    
    v.clear();
    
    cout << "After  clear vector elements are : ";
    print(v);
}

void eraseAt(vector<int> v) {
    cout << "\n\nBefore erase 2nd index elements vector elements are : ";
    print(v);
    
    v.erase(v.begin()+2);
    
    cout << "After  erase 2nd index elements vector elements are : ";
    print(v);
}

void eraseInRange(vector<int> v) {
    cout << "\n\nBefore erase from 1st to 3rd index elements vector elements are : ";
    print(v);
    
    v.erase(v.begin()+1, v.begin()+4);
    
    cout << "After  erase from 1st to 3rd index elements vector elements are : ";
    print(v);
}

int main() {
    int n = 5;
    vector<int> v = {2, 3, 4, 5, 6};
    
    clearAll(v);
    eraseAt(v);
    eraseInRange(v);
    
    return 0;
}
