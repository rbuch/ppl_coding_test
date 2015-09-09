#include "array2d.h"

int cmp (const void * a, const void * b)
{
   return (*(int*)a - *(int*)b);
}

Array::Array(int size) : n(size)
{
  data = new int[n*n];
  srand(time(NULL));
  
  for (int i = 0; i < n*n; ++i)
  {
    data[i] = rand() % 1024;
  }

  std::qsort(data, n*n, sizeof(int), cmp);
}

Array::~Array()
{
  delete [] data;
}

int* Array::operator[](int row)
{
  return &data[row*n];
}
