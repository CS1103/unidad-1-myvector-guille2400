#include <iostream>
#include <cassert>
#include "myVector.h"
using namespace std;
int main() {
    myVector v1(9);
    assert(v1.size() == 0);
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    assert(v1.size() == 3);

    myVector v2(9);
    //myVector v3 = v1 + v2;
   // assert(v3.size() == 3);

    int total = 0;
    //for (int i = 0; i<v1.size(); i++)
       // total += v1[i];
    assert(total == 50);
    string resultado;
    try
    {
        v1.insert(10, 10);
    }
    catch(const exception& e)
    {
        resultado = e.what();
    }
    assert(resultado == "Fuera del limite");

    return 0;
}