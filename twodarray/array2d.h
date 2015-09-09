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
  ~Array();
  int* operator[](int row);
};
