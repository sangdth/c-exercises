#include <iostream>
using namespace std;

int main() {
    int *mypointer {nullptr};
    int age {36};

    /* cout << "Value of age: " << age << endl; */
    int temp1 {100};
    int temp2 {200};
    int *temp1_ptr {&temp1};
    int *temp2_ptr {&temp2};

    cout << "temp1_ptr is: " << *temp1_ptr << endl;

    *temp1_ptr = 110;
    cout << "temp1 should be changed to 110: " << temp1 << endl;
    cout << "temp1_ptr before assignment should be same 110: " << *temp1_ptr << endl;

    temp1_ptr = &temp2;
    cout << "temp1_ptr after assignment: " << *temp1_ptr << endl;

    return 0;
}

