#include "binary.h"

#include <stdio.h>
#include <stdlib.h>

void insert(Node* root, int val) {
  if (val < root->val) {
    if (root->left) {
      insert(root->left, val);
    } else {
      root->left = new Node;
      root->left->val = val;
    }
  } else {
    if (root->right) {
      insert(root->right, val);
    } else {
      root->right = new Node;
      root->right->val = val;
    }
  }
}

Node* generate_tree(int num_nodes) {
  if (num_nodes == 0) return NULL;

  int val = rand() % 1000;

  Node* root = new Node;
  root->val = val;
  printf("Root of tree: %i\n", root->val);

  for (int i = 1; i < num_nodes; i++) {
    val = rand() % 1000;
    printf("Inserting: %i\n", val);
    insert(root, val);
  }

  return root;
}
