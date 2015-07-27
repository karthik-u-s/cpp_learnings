#include <iostream>
using namespace std;

class vector
{
        double *ele;
        int sz;

public:
        vector(int sz);
        void read();
        void disp();
};