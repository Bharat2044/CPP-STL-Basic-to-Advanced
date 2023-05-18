#include <iostream>
#include <list>
using namespace std;

void print(const list<int> &l) {
    for(auto &ele : l)
        cout << ele << "  ";
    cout << "\n";
}

int main() {
    // 1. operator “=” :- This operator copies one  list into other. The copy made in this case is deep copy. 
    list<int> l1 = {1, 2, 3};
    list<int> l2;
    
    cout << "Initially list l1 elements are: ";
    print(l1);
    cout << "Initially list l2 elements are: ";
    print(l2);
    
    l2 = l1;
    cout << "After copy (l2 = l1) list l2 elements are: ";
    print(l2);
    cout << "\n\n";
    
    
    // 2. merge() : This function is used to merge one  list with other. If both the lists are sorted then the resultant list returned is also sorted. 
    cout << "Before merge() list l1 elements are: ";
    print(l1);
    cout << "Before merge() list l2 elements are: ";
    print(l2);
    
    l1.merge(l2);
    
    cout << "After l1.merge(l2)list l1 elements are: ";
    print(l1);
    cout << "After l1.merge(l2) list l2 elements are: ";
    print(l2);
    cout << "\n\n";
    
    
    // 3. sort() : This function is used to sort the  list. 
    list<int> l3 = {1, 2, 3, 2, 3, 3, 1, 8, -4};
    cout << "Before sort() list l3 elements are: ";
    print(l3);
    
    l3.sort();
    cout << "After  sort() list l3 elements are: ";
    print(l3);
    cout << "\n\n";
    
    
    // 4. unique() : This function deletes the multiple occurrences of a number and returns a  list with unique elements. The  list should be sorted for this function to execute successfully. 
    cout << "Before unique() list l3 elements are: ";
    print(l3);
    
    l3.unique();
    cout << "After  unique() list l3 elements are: ";
    print(l3);
    cout << "\n\n";
    
    
    // 5. reverse() :- This function is used to reverse the  list.
    cout << "Before reverse() list l3 elements are: ";
    print(l3);
    
    l3.reverse();
    cout << "After  reverse() list l3 elements are: ";
    print(l3);
    cout << "\n\n";
    

    // 6. swap() :- This function swaps the content of one  list with other. 
    list<int> l4 = {1, 2, 3};
    list<int> l5 = {4, 5, 6};
    
    cout << "Before swap() list l4 elements are: ";
    print(l4);
    cout << "Before swap() list l5 elements are: ";
    print(l5);
    
    l4.swap(l5);
    
    cout << "After l4.swap(l5)list l4 elements are: ";
    print(l4);
    cout << "After l4.swap(l5) list l5 elements are: ";
    print(l5);
    cout << "\n\n";
    
    
    // 7. clear() : This function clears the contents of  list. After this function, the  list becomes empty.
    cout << "Before clear() list l5 elements are: ";
    print(l5);
    
    l5. clear();
    cout << "After  clear() list l5 elements are: ";
    print(l5);
    cout << "\n\n";
    
    
    //  8. empty() : This function returns true if the list is empty otherwise false. 
    cout << "list l4 elements are: ";
    print(l4);
    cout << "list l5 elements are: ";
    print(l5);
    
    cout << "list l4 is empty or not = " << l4.empty() << endl;
    cout << "list l5 is empty or not = " << l5.empty() << endl;
    
    return 0;
}
