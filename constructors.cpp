#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
class IntArray
{
  public:
  IntArray(int n);
  int get(int index);
  
  private:
  int *data;
};

  IntArray::IntArray(int n)
  {
    data = (int *)malloc(sizeof(int)*n);
  }

  int IntArray::get(int index)
  {
    return data[index];
  }

  void func()
  {
    IntArray a(100), b(200);
  }
int main() {
  func();
  
  return 0;
}
