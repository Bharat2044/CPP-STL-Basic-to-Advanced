#include <iostream>
#include <forward_list>
using namespace std;

void print(const forward_list<int> &l) {
    for(auto &ele : l)
        cout << ele << "  ";
    cout << "\n\n";
}

int main() {
    // Declaration
    forward_list<int> l1;
    forward_list<int> l2(5);
    
    // Declaration + Initialization
    forward_list<int> l3(4, 0);
    forward_list<int> l4(6, -2);
    forward_list<int> l5{1, 2, 6, 4};
    forward_list<int> l6 = {1, 2, 3, 4, 5, 6};
    
    // Initializing from another forward_list 
    forward_list<int> l7(l6.begin(), l6.end());
    
    // Fill element using push_front()
    forward_list<int> l8;
    l8.push_front(11);
    l8.push_front(12);
    l8.push_front(13);
    l8.push_front(14);
    l8.push_front(15);
    
    // Fill element using assign()
    forward_list<int> l9;
    forward_list<int> l10;
    forward_list<int> l11;
    
    l9.assign({ 1, 2, 3, 99});
    l10.assign(5, 10);
    l11.assign(l9.begin(), l9.end());
    
    // Printing Forward List Elements
    cout << "\n--------- Printing forward list elements: ---------\n";
    cout << "Forward list l1 elements are: ";
    print(l1);

    cout << "Forward list l2 elements are: ";
    print(l2);

    cout << "Forward list l3 elements are: ";
    print(l3);

    cout << "Forward list l4 elements are: ";
    print(l4);

    cout << "Forward list l5 elements are: ";
    print(l5);

    cout << "Forward list l6 elements are: ";
    print(l6);
    
    cout << "Forward list l7 elements are: ";
    print(l7);

    cout << "Forward list l8 elements are: ";
    print(l8);

    cout << "Forward list l9 elements are: ";
    print(l9);

    cout << "Forward list l10 elements are: ";
    print(l10);
    
    cout << "Forward list l11 elements are: ";
    print(l11);
    
    
    // Taking Input From User
    int n;
    cout << "\nEnter size of list: ";
    cin >> n;
    
    forward_list<int> l12;
    cout << "Enter list elements:\n";
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        l12.push_front(x);
    }
    
    cout << "Forward list v12 elements are: ";    
    print(l12);
    
    return 0;
}
