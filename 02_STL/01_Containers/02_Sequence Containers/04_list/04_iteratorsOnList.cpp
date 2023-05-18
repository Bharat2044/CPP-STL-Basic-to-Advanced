#include <iostream>
#include <list>
using namespace std;

void print(const list<int> &l) {
    for(auto &ele : l)
        cout << ele << "  ";
    cout << "\n";
}

int main() {
    list<int> l = {1, 2, 3, 4, 5, 6}; 
	
    list<int> :: iterator it = l.begin();
    
    cout << "Initiallay (*it) = " << (*it) << endl;
    
    it++;
    cout << "After it++ (*it) = " << (*it) << endl;
    
    it--;
    cout << "After it-- (*it) = " << (*it) << endl;
    
    it = next(it);
    cout << "After next(it) (*it) = " << (*it) << endl;
    
    it = next(it, 2);
    cout << "After next(it, 2) (*it) = " << (*it) << endl;
    
    it = prev(it);
    cout << "After prev(it) (*it) = " << (*it) << endl;
    
    it = prev(it, 3);
    cout << "After prev(it, 3) (*it) = " << (*it) << endl << endl;


    // 1. forward iterator
    cout << "1. Forward Iteraror =====>\n";
    // list<int, 6> :: iterator it1;
    // it1 = l.begin();    // OR
    list<int> :: iterator it1 = l.begin();
    
    cout << "Printing list elements:\n";
    for(it1=l.begin(); it1!=l.end(); it1++) 
        cout << *it1 << "  ";
    cout << endl;
    
    for(list<int> :: iterator it=l.begin(); it!=l.end(); it++)
        cout << *it << "  ";
    cout << endl;
    
    for(auto it = l.begin(); it!=l.end(); it++)
        cout << *it << "  ";
    cout << endl;
    
    for(auto it = l.begin(); it!=l.end(); it++)
        *it *= 2;
    
    cout << "After updating  list elements are:\n";
    for(auto it = l.begin(); it!=l.end(); it++)
        cout << *it << "  ";
    cout << endl;
    
    l = {1, 2, 3, 4, 5, 6};   // set initial value
    
    
    // 2. reverse_iterator
    cout << "\n\n2. Reverse Iteraror =====>\n";
    list<int> :: reverse_iterator it2 = l.rbegin();
        
    cout << "Printing list elements in reverse order:\n";
    for(it2=l.rbegin(); it2!=l.rend(); it2++) 
        cout << *it2 << "  ";
    cout << endl;
    
    for(list<int> :: reverse_iterator it2=l.rbegin(); it2!=l.rend(); it2++)
        cout << *it2 << "  ";
    cout << endl;
    
    for(auto it2 = l.rbegin(); it2!=l.rend(); it2++)
        cout << *it2 << "  ";
    cout << endl;
    
    
    // 3. const_iterator   =>  read only
    cout << "\n\n3. Const Iteraror =====>\n";
    // list<int, 6> :: const_iterator it3 = l.begin(); // OR
    list<int> :: const_iterator it3 = l.cbegin(); 
    
    cout << "Printing list elements:\n";
    for(it3=l.begin(); it3!=l.end(); it3++) 
        cout << *it3 << "  ";
    cout << endl;
    
    for(list<int> :: const_iterator it3=l.begin(); it3!=l.end(); it3++)
        cout << *it3 << "  ";
    cout << endl;
    
    for(auto it3 = l.begin(); it3!=l.end(); it3++)
        cout << *it3 << "  ";
    cout << endl;
    
    
    // 4. const_iterator   =>  read only
    cout << "\n\n4. Const Reverse Iteraror =====>\n";
    list<int> :: const_reverse_iterator it4 = l.rbegin();
        
    cout << "Printing list elements in reverse order:\n";
    for(it4=l.rbegin(); it4!=l.rend(); it4++) 
        cout << *it4 << "  ";
    cout << endl;
    
    for(list<int> :: const_reverse_iterator it4=l.rbegin(); it4!=l.rend(); it4++)
        cout << *it4 << "  ";
    cout << endl;
    
    for(auto it4 = l.crbegin(); it4!=l.crend(); it4++)
        cout << *it4 << "  ";
    cout << endl;
    
    return 0;
}
