#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> l = {1, 2, 3, 4, 5, 6}; 

    // 1. forward iterator
    cout << "1. Forward Iteraror =====>\n";
    forward_list<int> :: iterator it1 = l.begin();
    
    cout << "Printing forward_list elements:\n";
    for(it1=l.begin(); it1!=l.end(); it1++) 
        cout << *it1 << "  ";
    cout << endl;
    
    for(forward_list<int> :: iterator it=l.begin(); it!=l.end(); it++)
        cout << *it << "  ";
    cout << endl;
    
    for(auto it = l.begin(); it!=l.end(); it++)
        cout << *it << "  ";
    cout << endl;
    
    
    // const_iterator   =>  read only
    cout << "\n\n2. Const Iteraror =====>\n";
    // forward_list<int, 6> :: const_iterator it3 = l.begin(); // OR
    forward_list<int> :: const_iterator it3 = l.cbegin(); 
    
    cout << "Printing forward_list elements:\n";
    for(it3=l.begin(); it3!=l.end(); it3++) 
        cout << *it3 << "  ";
    cout << endl;
    
    for(forward_list<int> :: const_iterator it3=l.begin(); it3!=l.end(); it3++)
        cout << *it3 << "  ";
    cout << endl;
    
    for(auto it3 = l.begin(); it3!=l.end(); it3++)
        cout << *it3 << "  ";
    cout << endl;
    
    
    return 0;
}
