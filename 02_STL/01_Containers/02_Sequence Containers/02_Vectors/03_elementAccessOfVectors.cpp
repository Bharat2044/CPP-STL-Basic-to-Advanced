#include <iostream>
#include <vector>     
using namespace std;

void print(const vector<int> &v) {
    for(auto ele : v)
        cout << ele << "  ";
    cout << endl;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    
    // 1. at()  =>  Printing vector elements using at()
    cout << "The vector v elements are (using at()) : ";
    for(int i=0; i<v.size(); i++)
        cout << v.at(i) << "  ";
    cout << endl << endl;
 
    // 2. operator[]    =>  Printing vector elements using operator[]
    cout << "The vector v elements are (using operator[]) : ";
    for(int i=0; i<v.size(); i++)
        cout << v[i] << "  ";
    cout << endl << endl;
    
    // 3. front()   =>  Printing first element of vector
    cout << "First element of vector v is : ";
    int &a = v.front();   // int a = v.front();
    cout << a << endl;
 
    // 4. back()    =>  Printing last element of vector
    cout << "Last element of vector v is : ";
    int &b = v.back();    // int b = v.back();
    cout << b << endl << endl;
    
    cout<<"Vector v before updating first and last element : ";
    print(v);
    
    //change first and last element of array using these references
    a = 10;
    b = 60; 
    
    cout<<"Vector v after updating first and last element : ";
    print(v);
    cout << endl;
    
    // 5. data()  =>  Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
    int* pos = v.data();
    cout << "The first element of vector v is : " << *pos << endl;
    cout << "The third element of vector v is : " << *(pos+2) << endl << endl;

	return 0;

}
