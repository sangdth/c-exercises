#include <iostream>
using namespace std;

struct Block {
    int data;                         // Initialized and point nowhere
    struct Block *previous {nullptr}; // without {nullptr} it will point to anywhere!
    struct Block *next {nullptr};     // which is bad because it could generate garbage.
};

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}

