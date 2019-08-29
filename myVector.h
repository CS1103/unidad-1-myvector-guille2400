//
// Created by sanch on 8/27/2019.
//

#ifndef EXCEPSIONES_MYVECTOR_H
#define EXCEPSIONES_MYVECTOR_H
#include <iostream>

class myVector {
private:
    int *data;
    int nelem;
public:
    myVector(int);
    int size();
    void push_back(int);
    void insert(int, int);


};


#endif //EXCEPSIONES_MYVECTOR_H
