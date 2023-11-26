#include <iostream>

template <class T>
struct Node {
    T data;
    Node* left;
    Node* right;

    Node(T data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

template <class T>
class BST
{
public:
    BST() {
        root = nullptr;
    }

    void insert(T data) {
        Node<T>* parent = nullptr;
        Node<T>* node = root;

        while (node != nullptr) {
            parent = node;

            if (data < node->data) {
                node = node->left;
            }
            else if (data > node->data) {
                node = node->right;
            }
            else {
                return;
            }
        }

        Node<T>* newNode = new Node<T>(data);

        if (parent == nullptr) {
            root = newNode;
        }
        else if (data < parent->data) {
            parent->left = newNode;
        }
        else if (data > parent->data) {
            parent->right = newNode;
        }
    }

    void print() {
        treePrint(root);
    }

    ~BST() {
        destroyNode(root);
    }

private:
    Node<T>* root;

    void destroyNode(Node<T>* node) {
        if (node != nullptr) {
            destroyNode(node->left);
            destroyNode(node->right);
            delete node;
        }
    }

    void treePrint(Node<T>* tree) {
        if (tree != nullptr) {
            treePrint(tree->left);          // l
            std::cout << tree->data << ' '; // n
            treePrint(tree->right);         // r
        }
    }
};

int main() {
    BST<int> bst;

    bst.insert(10);
    bst.insert(7);
    bst.insert(4);

    bst.print();

    return 0;
}