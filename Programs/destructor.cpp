#include <iostream> using namespace std; class Test { public:

Test() { cout << "\n Constructor executed"; }

~Test() { cout << "\nDestructor executed"; }

};

main()

{

Test t;

return 0;

}
