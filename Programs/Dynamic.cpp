#include <iostream> using namespace std;

class stud {

public:

int^ * p

stud()

{

p = new int; * p = 0

}

stud (int x) {

p = new int;

*p = x;

}

void display()

{ cout << *p << endl;

}

~stud()

{

delete p;

};

}

int main()

{

stud obj * 1 =stud()

obj1.display();

stud obj * 2 = stud(7) ; obj2.display();

}
