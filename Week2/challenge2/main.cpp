#include <iostream>

// This class Pair has already been defined for you.
// (You may not change this definition.)
class Pair {
public:
  int first, second;
  void check() {
    first = 5;
    std::cout << "Congratulations! The check() method of the Pair class \n has executed. (But, this isn't enough to guarantee \n that your code is correct.)" << std::endl;
  }
};

// Insert your declaration and implementation of the function pairFactory()
// below, by replacing "..." with proper C++ code. Be sure to declare the
// function type to return a pointer to a Pair.


// so the function MUST return a pointer to an instance of the object => Pair * func () {}
Pair * pairFactory() {
//then I create an instance on the heap with the new operator
  Pair *c1 = new Pair;
  //then create a pointer to the instance on the heap
  Pair *c2 = c1;
  // (You can use as many lines as you want.)
  return c2;
}

// Your function should be able to satisfy the tests below. You should try
// some other things to convince yourself. If you have a bug in this problem,
// the usual symptom is that after you submit, the grader will crash with a
// system error. :-)
int main() {
  Pair *p;
  p = pairFactory();

  // This function call should work without crashing:
  p->check();

  // Deallocating the heap memory. (Assuming it was made on the heap!)
  delete p;

  std::cout << "If you can see this text, the system hasn't crashed yet!" << std::endl;

  return 0;
}
