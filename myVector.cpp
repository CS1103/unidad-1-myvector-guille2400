//
// Created by sanch on 8/27/2019.
//
#include <iostream>
#include "myVector.h"
using namespace std;
myVector::myVector(int cantidad): data(nullptr), nelem{0}
{
    data = new int [nelem];
}

int myVector::size()
{
    return nelem;
}

void myVector::push_back(int numinsert)
{
    int *temp;
    temp = new int [nelem+1];
    for (int i = 0; i < nelem; i++)
    {
        temp[i] = data[i];
    }
    delete [] data;
    data = temp;
    temp [nelem-1] = numinsert;
    nelem++;
}

void myVector::insert(int, int)
{

}
