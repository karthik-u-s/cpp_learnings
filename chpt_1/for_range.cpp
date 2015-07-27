#include <iostream>
using namespace std;

int main()
{
        int arr1[10] = {10,20,30,40,50,60,70,80,90,100};
        for(auto arr2 : arr1)
        {
                cout<< arr2 <<"\n";
        }

        auto str="hello";
        cout<< str << endl;
}
