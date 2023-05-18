#include <iostream>
#include <list>
using namespace std;

void print(const list<int> &l) {
    for(auto &ele : l)
        cout << ele << "  ";
    cout << "\n";
}

int main() {
    list<int> l1;
    
    cout << "Initially list l1 elements are: ";
    print(l1);
    
    // 1. push_front() => Adds a new element ‘g’ at the beginning of the list.
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4);
    
    cout << "After push_front() list l1 elements: ";
    print(l1);
    
    
    // 2. pop_front() => Removes the first element of the list, and reduces the size of the list by 1.
    l1.pop_front();
    l1.pop_front();
    
    cout << "After pop_front() list l1 elements are: ";
    print(l1);
    
    
    // 3. push_back() => Adds a new element ‘g’ at the end of the list.
    l1.push_back(11);
    l1.push_back(22);
    l1.push_back(33);
    
    cout << "After push_back() list l1 elements: ";
    print(l1);
    
    
    // 4. pop_back() => Removes the last element of the list, and reduces the size of the list by 1.
    l1.pop_back();
    l1.pop_back();
    
    cout << "After pop_back() list l1 elements are: ";
    print(l1);
    cout << endl << endl;
    
    // 5. front() : Returns the value of the first element in the list.
    cout << "First element of list l1 = " << l1.front();
    cout << endl;
    
    
    // 6. back() : Returns the value of the last element in the list.
    cout << "Last element of list l1 = " << l1.back();
    cout << endl << endl << endl;
    
    
    // 7. assign() => used to assign values to the List
    list<int> l2;
    list<int> l3;
    list<int> l4;
    
    l2.assign({1, 2, 3, 99});
    l3.assign(5, 10);
    l4.assign(l2.begin(), l2.end());
    
    cout << "List l2 elements are: ";
    print(l2);

    cout << "List l3 elements are: ";
    print(l3);

    cout << "List l4 elements are: ";
    print(l4);
    cout << endl << endl;
    
    
    // 8. fill() : Initializing the List : list<data_type> li(n); fill(li.begin(), li.end(), val);
    list<int> l5(5);
    fill(l5.begin(), l5.end(), 11);

    cout << "List l5 elements are: ";
    print(l5);
    cout << endl << endl;
    
    
    // 9. insert() : Inserts new elements in the list before the element at a specified position.
    list<int> l6 = {1, 2, 3};
    cout << "Before insert() list l6 elements are: ";
    print(l6);
    
    auto it = l6.begin();
    it = l6.insert(it, 15);
    cout << "After insert(it, 15) list l6 elements are: ";
    print(l6);
    
    // advance(it, 2); => iterator to point to 3rd position
    
    it++;
    it = l6.insert(it, 11);
    cout << "After it++ insert(it, 11) list l6 elements are: ";
    print(l6);
    
    it = l6.insert(it, {101, 102, 103});
    cout << "After it++ insert(it, {101, 102, 103} list l6 elements are: ";
    print(l6);
    
    it = l6.insert(it, 2, 7);
    cout << "After insert(it, 2, 7) list l6 elements are: ";
    print(l6);
    cout << endl << endl;
    
    
    // 10. erase() : Removes a single element or a range of elements from the list.
    list<int> l7 = {10, 40, 5, 20, 30, 25, 40, 40};
    cout << "Before erase() list l7 elements: ";
    print(l7);
    
    list<int>::iterator itr = l7.begin();
    l7.erase(itr);
    
    cout << "After erase() list l7 elements: ";
    print(l7);
    cout << endl << endl;
    
    
    // 11. remove() : Removes all the elements from the list, which are equal to a given element.
    cout << "Before remove() list l7 elements are: ";
    print(l7);
    
    l7.remove(40);
    cout << "After remove(40) list l7 elements: ";
    print(l7);
    
    // 12. remove_if(): This function removes according to the condition in its argument. 
    l7.remove_if([](int x) {return x > 20;});
    cout << "After remove_if() list l7 elements: ";
    print(l7);
    cout << endl << endl;
    
    
    // 13. emplace_front() : emplace_front() function is used to insert a new element into the list container, and the new element is added to the beginning of the list.
    list<int> l8 = {1, 2, 3};
    cout << "Initially list l8 elements are: ";
    print(l8);
    
    l8.emplace_front(11);
    l8.emplace_front(12);
    l8.emplace_front(13);
    
    cout << "After emplace_front() list l8 elements are: ";
    print(l8);
    
    // 14. emplace_back() : emplace_back() function is used to insert a new element into the list container, and the new element is added to the end of the list.
    l8.emplace_back(101);
    l8.emplace_back(102);
    l8.emplace_back(103);
    
    cout << "After emplace_back() list l8 elements are: ";
    print(l8);
    cout << endl << endl;
    
    
    // 15. splice: Used to transfer elements from one list to another.
    list<int> l9 = {10, 20, 30};
    list<int> l10 = {40, 50, 60};
    list<int> l11 = {1, 2, 3};
    list<int> l12 = {11, 22, 33};
    
    cout << "Before splice() list l9 elements: ";
    print(l9);
    cout << "Before splice() list l10 elements: ";
    print(l10);
    cout << "Before splice() list l11 elements: ";
    print(l11);
    cout << "Before splice() list l12 elements: ";
    print(l12);
    
    l10.splice(l10.begin(), l9);
    l11.splice(l11.end(), l12);
    
    cout << "After  splice() list l9 elements: ";
    print(l9);
    cout << "After  splice() list l10 elements: ";
    print(l10);
    cout << "After  splice() list l11 elements: ";
    print(l11);
    cout << "After  splice() list l12 elements: ";
    print(l12);
    cout << endl << endl;
    
    
    // 16. emplace() : Extends the list by inserting a new element at a given position.
    list<int> l13 = { 5, 6, 7, 8, 9, 10 };
    cout << "Before emplace() list l13 elements: ";
    print(l13);
    
    auto it2 = l13.emplace(l13.begin(), 2);
    cout << "After emplace(l13.begin(), 2) list l13 elements: ";
    print(l13);
    
    // inserts at the beginning of the list
    l13.emplace(it2, 1);
    cout << "After l13.emplace(it, 1) list l13 elements: ";
    print(l13);
    cout << endl << endl;
    
    
    // 17. size() – Returns the number of elements in the list.
    cout << "Size of list l13 = " << l13.size() << endl;
    
    // 18. max_size() – Returns the maximum number of elements a list container can hold.
    cout << "Max_size of list l13 = " << l13.max_size() << endl;
    cout << endl << endl;
    
    
    // 19. resize(): Changes the size of list
    cout << "Before resize() list l13 size = " << l13.size() << endl;
    l13.resize(10);
    cout << "After resize(10) list l13 size = " << l13.size() << endl;
    cout << endl << endl;
    
    
    // 20. clear(): This function deletes all the elements from the list. 
    list<int> l14 = {10, 20, 300};
    cout << "Before clear() list l14 elements: ";
    print(l14);
    
    l14.clear();
    cout << "After  clear() list l14 elements: ";
    print(l14);
    cout << endl << endl;
    
    
    // 21. empty() 	Returns whether the list is empty(1) or not(0).
    cout << "List l13 is empty or not = " << l13.empty() << endl;
    cout << "List l14 is empty or not = " << l14.empty() << endl;
    
    return 0;
}
