#include <iostream>
using namespace std;

int main() {
    int *mypointer {nullptr};
    int age {36};

    cout << "Value of age: " << age << endl;
    cout << "Size of age: " << sizeof(age) << endl;
    cout << "Address of age: " << &age << endl;

    cout << "Value of mypointer: " << mypointer << endl;
    /* cout << "Size of mypointer: " << sizeof(*mypointer) << endl; */
    cout << "Address of mypointer: " << &mypointer << endl;

    return 0;
}

