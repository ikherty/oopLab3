#include "deque.h"

template <typename Type>
void Deque<Type>::Creation(Deque *D){
    D->last=0;
}
template <typename Type>
bool Deque<Type>::Full(Deque *D){
if (D->last==0) return true;
else return false;
}
template <typename Type>
void Deque<Type>::AddL(Deque *D)
{
if (D->last==sizeDeq){
    cout<<"\nДек заполнен\n\n";
    return;
}
int value;
cout<<"\nЗначение > ";
cin>>value;
for (int i=D->last; i>0; i--)
    D->data[i]=D->data[i-1];
D->data[0]=value;
D->last++;
cout<<endl<<"Элемент добавлен\n\n";
}

template <typename Type>
void Deque<Type>::AddR(Deque *D)
{
if (D->last==sizeDeq){
    cout<<"\nДек заполнен\n\n";
    return;
}
int value;
cout<<"\nЗначение > ";
cin>>value;
D->data[D->last++]=value;
cout<<endl<<"Элемент добавлен\n\n";
}

template <typename Type>
void Deque<Type>::DeleteL(Deque *D)
{
for (int i=0; i<D->last; i++)
    D->data[i]=D->data[i+1];
D->last--;
}

template <typename Type>
void Deque<Type>::DeleteR(Deque *D){
    D->last--;
}

template <typename Type>
int Deque<Type>::OutputL(Deque *D){
    return D->data[0];
}

template <typename Type>
int Deque<Type>::OutputR(Deque *D){
    return D->data[D->last-1];
}

template <typename Type>
int Deque<Type>::Size(Deque *D){
    return D->last;
}
