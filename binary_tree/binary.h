#include <stdlib.h>

struct Node {
  int val;
  Node* left;
  Node* right;
  Node* parent;

  Node() : val(0), left(NULL), right(NULL), parent(NULL) {}
};

Node* generate_tree(int);
