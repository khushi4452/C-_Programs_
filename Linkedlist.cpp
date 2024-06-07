#include <iostream>
#include <vector> 
using namespace std;

struct Node {
    public:
 int data;
        Node* next;

    public:
        Node(int data1, Node* next1 = nullptr)
        {
            data = data1;
            next = next1;
        }
};

int main() {
    vector<int> arr = {2, 5, 8, 7}; 
    Node* y = new Node(arr[0], nullptr); 
    cout << "Node data: " << y->data << endl; 
    delete y; 
    return 0;
}
