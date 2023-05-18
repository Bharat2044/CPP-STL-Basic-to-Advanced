#include <iostream>
#include <vector>
#include <list>
using namespace std;

void print(const list<int> &l) {
    for(auto &ele : l)
        cout << ele << "  ";
    cout << "\n\n";
}

int main() {
    // Declaration
    list<int> l1;
    list<int> l2(5);
    
    // Declaration + Initialization
    list<int> l3(4, 0);
    list<int> l4(6, -2);
    list<int> l5{1, 2, 6, 4};
    list<int> l6 = {1, 2, 3, 4, 5, 6};
    
    // Initializing from another list 
    list<int> l7(l6.begin(), l6.end());
    
    // Fill element using push_front()
    list<int> l8;
    l8.push_front(11);
    l8.push_front(12);
    l8.push_front(13);
    l8.push_front(14);
    l8.push_front(15);
    
    // Fill element using push_back()
    list<int> l9;
    l9.push_back(11);
    l9.push_back(12);
    l9.push_back(13);
    l9.push_back(14);
    l9.push_back(15);
    
    // Fill element using assign()
    list<int> l10;
    list<int> l11;
    list<int> l12;
    
    l10.assign({ 1, 2, 3, 99});
    l11.assign(5, 10);
    l12.assign(l10.begin(), l10.end());
    
    
    // Initializing a list from an array : list<data_type>li(old_array,old_array+size); 
    int arr[] = { 10, 20, 30 };
    int n = sizeof(arr)/sizeof(arr[0]);
    list<int> l13(arr, arr + n);
    
    // Initializing a list from a vector : list<data_type>li(old_vector.begin(),old_vector.end()); 
    vector<int> v{10, 20, 30};
    list<int> l14(v.begin(), v.end());
    
    // Initializing from another List : list<data_type>li(old_list.begin(),old_list.end()); 
    list<int> li{10, 20, 30};
    list<int> l15(li.begin(), li.end());
    
    // Initializing the List using the fill() function : list<data_type> li(n); fill(li.begin(), li.end(), val);
    list<int> l16(3);
    fill(l16.begin(), l16.end(), 10);
    
    
    // Printing List Elements
    cout << "\n--------- Printing List elements: ---------\n";
    cout << "List l1 elements are: ";
    print(l1);

    cout << "List l2 elements are: ";
    print(l2);

    cout << "List l3 elements are: ";
    print(l3);

    cout << "List l4 elements are: ";
    print(l4);

    cout << "List l5 elements are: ";
    print(l5);

    cout << "List l6 elements are: ";
    print(l6);
    
    cout << "List l7 elements are: ";
    print(l7);

    cout << "List l8 elements are: ";
    print(l8);

    cout << "List l9 elements are: ";
    print(l9);

    cout << "List l10 elements are: ";
    print(l10);
    
    cout << "List l11 elements are: ";
    print(l11);
    
    cout << "List l12 elements are: ";
    print(l12);

    cout << "List l13 elements are: ";
    print(l13);
    
    cout << "List l14 elements are: ";
    print(l14);
    
    cout << "List l15 elements are: ";
    print(l15);
    
    cout << "List l16 elements are: ";
    print(l16);
    
    
    
    // Taking Input From User
    int n1;
    cout << "\nEnter size of list: ";
    cin >> n1;
    
    list<int> l17;
    cout << "Enter list elements:\n";
    for(int i=0; i<n1; i++) {
        int x;
        cin >> x;
        l17.push_back(x);
    }
    
    cout << "List l17 elements are: ";    
    print(l17);
    
    return 0;
}
