//convert array to the Arraylinkedlist
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

public:
    Node(int data1, Node* next, Node* back) {
        data = data1;
        this->next = next;
        this->back = back;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> &arr) {
    if (arr.size() == 0) return nullptr; 

    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (size_t i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArr2DLL(arr);
    print(head);
    return 0;
}
