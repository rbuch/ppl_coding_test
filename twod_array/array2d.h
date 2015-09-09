#pragma once

#include <ctime>
#include <cstdlib>

class Array
{
private:
  int n;
  int* data;
public:
  Array(int n);
  Array(const Array& other);
  ~Array();
  int* operator[](int row);
};
