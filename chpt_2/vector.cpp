#include "vector.h"

vector::vector(int s) :ele{new double[s]},sz{s} 
{ cout <<"Vector initialized with size "<< sz << endl; };

void
vector::read()
{
        cout <<"Enter " << sz << " elements\n";
        for(int i=0;i<sz;i++)
                cin >> ele[i];
}

void
vector::disp()
{
        cout << "Elements are:\t";
        for(int i=0;i<sz;i++)
                cout << ele[i] << "\t";
        cout << endl;
}

int main()
{
        vector v(5);
        v.read();
        v.disp();
}