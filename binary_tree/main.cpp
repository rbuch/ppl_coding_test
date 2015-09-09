#include "binary.h"

#include <stdio.h>

int main(int argc, char** argv) {
  int num_elements = 10;
  if (argc > 1) num_elements = atoi(argv[1]);
  Node* root = generate_tree(num_elements);

  /*
    Insert code to flatten tree here.
   */
  
  return 0;
}
