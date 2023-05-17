#include <iostream>
#include <forward_list>
using namespace std;

void print(const forward_list<int> &l) {
    for(auto &ele : l)
        cout << ele << "  ";
    cout << "\n";
}

int main() {
    forward_list<int> l1;
    
    cout << "Initially forward_list l1 elements are: ";
    print(l1);
    
    // 1. push_front() => Used to insert the element at the first position on forward list
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4);
    
    cout << "After push_front() forward_list l1 elements: ";
    print(l1);
    
    
    // 2. pop_front() => Used to delete the first element of the list
    l1.pop_front();
    l1.pop_front();
    
    cout << "After pop_front() forward_list l1 elements are: ";
    print(l1);
    cout << endl << endl;
    
    
    // 3. assign() => used to assign values to the forward list
    forward_list<int> l2;
    forward_list<int> l3;
    forward_list<int> l4;
    
    l2.assign({ 1, 2, 3, 99});
    l3.assign(5, 10);
    l4.assign(l2.begin(), l2.end());
    
    cout << "Forward list l2 elements are: ";
    print(l2);

    cout << "Forward list l3 elements are: ";
    print(l3);

    cout << "Forward list l4 elements are: ";
    print(l4);
    cout << endl << endl;
    
    
    // 4. emplace_front(): Used to delete the first element of the list, but in this no copying operation occurs, the element is created directly at the memory before the first element of the forward list.
    forward_list<int> l5;
    
    cout << "Initially forward_list l5 elements are: ";
    print(l5);
    
    l5.emplace_front(1);
    l5.emplace_front(2);
    l5.emplace_front(3);
    l5.emplace_front(4);
    
    cout << "After emplace_front() forward_list l5 elements: ";
    print(l5);
    cout << endl << endl;
    
    
    // 5. insert_after(): This function gives us a choice to insert elements at any position in forward list. The arguments in this function are copied at the desired position.
    forward_list<int> l6 = {10, 20, 30};
    cout << "Initially forward_list l6 elements are: ";
    print(l6);
    
    forward_list<int>::iterator ptr;
    ptr = l6.insert_after(l6.begin(), {1, 2, 3});
    
    cout << "After insert_after() forward_list l6 elements:: ";
    print(l6);
    
    // 6. emplace_after(): This function also does the same operation as the above function but the elements are directly made without any copy operation.
    ptr = l6.emplace_after(ptr, 2);
    cout << "After emplace_after() forward_list l6 elements: ";
    print(l6);
    
    // 7. erase_after(): This function is used to erase elements from a particular position in the forward list. There are two variants of ‘erase after’ function.
    ptr = l6.erase_after(ptr);
    cout << "After erase_after() forward_list l6 elements: ";
    print(l6);
    
    ptr=l6.erase_after(l6.begin(), l6.end());
    cout << "After erase_after(range) forward_list l6 elements: ";
    print(l6);
    cout << endl << endl;
    
    
    // 8. remove(): This function removes the particular element from the forward list mentioned in its argument.
    forward_list<int> l7 = {10, 20, 30, 25, 40, 40};
    cout << "Initially forward_list l7 elements are: ";
    print(l7);
    
    l7.remove(40);
    cout << "After remove(40) forward_list l7 elements: ";
    print(l7);
    
    // 9. remove_if(): This function removes according to the condition in its argument. 
    l7.remove_if([](int x) {return x > 20;});
    cout << "After remove_if() forward_list l7 elements: ";
    print(l7);
    cout << endl << endl;
    
    
    // 10. clear(): This function deletes all the elements from the list. 
    forward_list<int> l8 = {10, 20, 300};
    cout << "Before clear() forward_list l8 elements: ";
    print(l8);
    
    l8.clear();
    cout << "After  clear() forward_list l8 elements: ";
    print(l8);
    cout << endl << endl;
    
    
    // 11. splice_after(): This function transfers elements from one forward list to other.
    forward_list<int> l9 = {10, 20, 30};
    forward_list<int> l10 = {40, 50, 60};
    cout << "Before splice_after() forward_list l9 elements: ";
    print(l9);
    cout << "Before splice_after() forward_list l10 elements: ";
    print(l10);
    
    l10.splice_after(l10.begin(), l9);
    
    cout << "After  splice_after() forward_list l9 elements: ";
    print(l9);
    cout << "After  splice_after() forward_list l10 elements: ";
    print(l10);
    cout << endl << endl;
    
    
    // 12. front(): This function is used to reference the first element of the forward list container. This function can be used to fetch the first element of a forward list.
    forward_list<int> l11 = {40, 50, 60};
    cout << "First element of forward_list l11 = " << l11.front() << endl;    //Time Complexity: O(n)
    cout << endl << endl;
    
    
    // 13. max_size(): Returns the maximum number of elements that can be held by forward_list.
    cout << "Max_size of the forward_list l11 = " << l11.max_size() << "\n\n";
    
    
    // 14. resize(): Changes the size of forward_list
    cout << "After resize(10) of the forward_list l11 elements: ";
    print(l11);
    
    l11.resize(10);
    
    cout << "After resize(10) of the forward_list l11 elements: ";
    print(l11);
    
    return 0;
}
