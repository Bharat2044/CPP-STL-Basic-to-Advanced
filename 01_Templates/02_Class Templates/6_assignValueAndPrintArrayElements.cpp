// C++ Program to implement
// template Array class
#include <iostream>
using namespace std;

template <typename T> 
class Array {
    private:
    	T* ptr;
    	int size;
    
    public:
    	Array(T arr[], int s);
    	void printArray();
};

template <typename T> 
Array<T>::Array(T arr[], int s) {
	ptr = new T[s];
	size = s;
	for (int i = 0; i < size; i++)
		ptr[i] = arr[i];
}

template <typename T> 
void Array<T>::printArray() {
	for (int i=0; i<size; i++)
		cout << *(ptr+i) << "  ";
	cout << endl;
}

int main() {
	int arr1[5] = {1, 2, 3, 4, 5};
	Array<int> obj1(arr1, 5);
	cout << "Integer arrays are: ";
	obj1.printArray();
	
	char arr2[5] = {'a', 'b', 'c', 'd', 'e'};
	Array<char> obj2(arr2, 5);
	cout << "\nCharacter arrays are: ";
	obj2.printArray();
	
	return 0;
}
