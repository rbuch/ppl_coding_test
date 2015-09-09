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

Array::Array(const Array& other)
{
  n = other.n;
  data = new int[n];
  for (int i = 0; i < n; ++i)
  {
    data[i] = other.data[i];
  }
}

Array::~Array()
{
  delete [] data;
  data = NULL;
}

int* Array::operator[](int row)
{
  return &data[row*n];
}
