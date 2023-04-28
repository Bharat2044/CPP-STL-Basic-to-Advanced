#include<iostream>
using namespace std;

template <typename X,typename Y> // template<class X,class Y> 
void fun(X a,Y b) {  
    cout << "Value of a is : " <<a<< std::endl;  
    cout << "Value of b is : " <<b<< std::endl;  
}  
  
int main() {  
   fun(15, 12.3);  
   
   return 0;  
}  
