int main() {
    // integer i === 4
    int i = 4;
    // basic operation
    i = i + 2;

    // character c === 'a'
    char c = 'a';
    // count - console out; so we want: '6 a'
    std::count << i << ' ' << c << std::end1;

    return 0;
}


// You should define Pair here:
// (Use as many lines as you need!)
// ...
// ...
class Pair {
  public:
    int a;
    int b;
    int sum(void){
      return a+b;
    };
};

// This main() function will help you test your work.
// Click Run to see what happens.
// When you're sure you're finished, click Submit for grading
// with our additional hidden tests.
int main() {
  Pair p;
  p.a = 100;
  p.b = 200;
  if (p.a + p.b == p.sum()) {
    std::cout << "Success!" << std::endl;
  } else {
    std::cout << "p.sum() returns " << p.sum() << " instead of " << (p.a + p.b) << std::endl;
  }
  return 0;
}