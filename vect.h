#ifndef VECT_H
#define VECT_H
//#include <vector>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

template <class T>
class Vector
{
protected:
    int size;
    int cap;
    T* data;
public:
    Vector(int=1);
    const int Size();
    const int capacity();
    T& operator [](int);
    void push_back(T);
    ~Vector(void);
};
template <class  T>
const int Vector<T>::Size()
{
    return size;
}
template <class  T>
const int Vector<T>::capacity()
{
   return cap;
}
template <class  T>
Vector<T>::Vector(int l)
{   int c;
    if(l<=0)l=1;
    size=l;
    cap=1;
    while(cap<size)cap=cap*2;
    data = new T[cap];
}
template <class  T>
void Vector<T>::push_back(T elem)
{
    T* newdata;
    if(size>cap) {
        cap=cap*2;
        newdata=new T[cap];
        for (int i=0; i<size; i++)
            newdata[i]=data[i];
        delete[] data;
        data=newdata;
    }
    data[size]=elem;
    size++;
}


template <class  T>
Vector<T>::~Vector(void)
{
    delete [] data;
}

template <class  T>
T& Vector<T>::operator[](int i)
{
    return data[i];
}


#endif // VECT_H
