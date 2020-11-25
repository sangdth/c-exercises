#include <iostream>
using namespace std;

struct Node {
    int data;                    // Initialized and point nowhere
    struct Node *prev {nullptr}; // without {nullptr} it will point to anywhere!
    struct Node *next {nullptr}; // which is bad because it could generate garbage.
};

struct Node* head = NULL;

char menu();
void insert();
void remove();
void show();

int main() {
    cout << "Hello, doubly linked list!" << endl;
    return 0;
}

