/* Class Pair has already been declared
 * as shown in the following comments:
 *
 * class Pair {
 * public:
 *   int *pa,*pb;
 *   Pair(int, int);
 *   Pair(const Pair &);
 *  ~Pair();
 * };
 *
B::B()
{
    //Allocate the memory to hold an int
    m_p = new int;

    *m_p = 0;
}

B::B(const B& b)
{
    //Allocate the memory first
    m_p = new int;

    //Then copy the value from the passed object
    *m_p = *b.m_p;
}

B::~B()
{

    //Release the memory allocated
    delete m_p;
    m_p = NULL;
}
 * Implement its member functions below.
 */

  Pair::Pair(int a, int b){
    pa = new int;
    pb = new int;
    *pa = a;
    *pb = b;

  }
  Pair::Pair(const Pair & obj) {
    pa  =  new int;
    pb = new int;
    *pa = *obj.pa;
    *pb = *obj.pb;


  }
  Pair::~Pair() {
    delete pa;
    delete pb;
    pa = NULL;
    pb =  NULL;
  }


 /* Here is a main() function you can use
  * to check your implementation of the
  * class Pair member functions.
  */

int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  delete hp;

  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;
  return 0;
}