#ifndef DEQUE_H
#define DEQUE_H
#include <deque>
#include <vector>
#include <iostream>
using namespace std;
//шаблонный класс на основе серверного
template <typename Type>
class Deque
{
private:
    int sizeDeq; //размер дека
    Type last; //указатель на конец
    vector <Type> data;//очередь-объект серверного класса
public:
    Deque(int sizeDeq);
    Deque();
    bool Full(); //проверка дека на пустоту
    void AddFirst(); //добавление элемента в начало
    void AddLast(); //добавление элемента в конец
    void DeleteFirst(); //удаление первого элемента
    void DeleteLast(); //удаление последнего элемента
    int OutputFirst(); //вывод первого элемента
    int OutputLast(); //вывод последнего элемента
    int Size(); //размер дека
};

template <typename Type>
Deque<Type>::Deque(int sizeDeq){
    this->sizeDeq=sizeDeq;
    Type value;
    int i=0;
    while(i<sizeDeq){
        cout<<"data["<<i<<"]=";
        cin>>value;
        this->data.push_back(value);
        cout<<endl;
        i++;
    }
}

template <typename Type>
Deque<Type>::Deque(){}

template <typename Type>
bool Deque<Type>::Full(){
if(last==0)
    return true;
else
    return false;
}
template <typename Type>
void Deque<Type>::AddFirst()
{
if (last==sizeDeq){
    cout<<"\nДек заполнен\n\n";
    return;
}
int value;
cout<<"\nЗначение > ";
cin>>value;
for (int i=last; i>0; i--)
    data[i]=data[i-1];
data[0]=value;
last++;
cout<<endl<<"Элемент добавлен\n\n";
}

template <typename Type>
void Deque<Type>::AddLast()
{
if (last==sizeDeq){
    cout<<"\nДек заполнен\n\n";
    return;
}
int value;
cout<<"\nЗначение > ";
cin>>value;
data[last++]=value;
cout<<endl<<"Элемент добавлен\n\n";
}

template <typename Type>
void Deque<Type>::DeleteFirst()
{
for (int i=0; i<last; i++)
    data[i]=data[i+1];
last--;
}

template <typename Type>
void Deque<Type>::DeleteLast(){
    last--;
}

template <typename Type>
int Deque<Type>::OutputFirst(){
    return data[0];
}

template <typename Type>
int Deque<Type>::OutputLast(){
    return data[last-1];
}

template <typename Type>
int Deque<Type>::Size(){
    if(data.empty())
         cout<<"Empty!/n";
    for (int ix=0; ix<data.size(); ++ix )
        cout<<data[ix]<<' ';
}

#endif // DEQUE_H
