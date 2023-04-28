#include<iostream>
using namespace std;

void display(int a) {
    cout << "Value of a is : " << a << endl;  
}

template<class X>    // template<class X> 
void display(X b) {  
    cout << "Value of b is : " << b << endl;  
}

template<class X, class Y>       // template<class X, class Y> 
void display(X c ,Y d) {  
    cout << "Value of c is : " << c << endl;  
    cout << "Value of d is : " << d << endl;  
}  

int main() {  
   display(20);
   display(20.55);
   display('G');
   display(20, 30.5);  
   
   return 0;  
} 
