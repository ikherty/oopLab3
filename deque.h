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
    void Creation(Deque *D); //создание дека
    bool Full(Deque *D); //проверка дека на пустоту
    void AddL(Deque *D); //добавление элемента в начало
    void AddR(Deque *D); //добавление элемента в конец
    void DeleteL(Deque *D); //удаление первого элемента
    void DeleteR(Deque *D); //удаление последнего элемента
    int OutputL(Deque *D); //вывод первого элемента
    int OutputR(Deque *D); //вывод последнего элемента
    int Size(Deque *D); //размер дека
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
void Deque<Type>::Creation(Deque *Dec){
    Dec->last=0;
}
template <typename Type>
bool Deque<Type>::Full(Deque *Dec){
if (Dec->last==0) return true;
else return false;
}
template <typename Type>
void Deque<Type>::AddL(Deque *Dec)
{
if (Dec->last==sizeDeq){
    cout<<"\nДек заполнен\n\n";
    return;
}
int value;
cout<<"\nЗначение > ";
cin>>value;
for (int i=Dec->last; i>0; i--)
    Dec->data[i]=Dec->data[i-1];
Dec->data[0]=value;
Dec->last++;
cout<<endl<<"Элемент добавлен\n\n";
}

template <typename Type>
void Deque<Type>::AddR(Deque *Dec)
{
if (Dec->last==sizeDeq){
    cout<<"\nДек заполнен\n\n";
    return;
}
int value;
cout<<"\nЗначение > ";
cin>>value;
Dec->data[Dec->last++]=value;
cout<<endl<<"Элемент добавлен\n\n";
}

template <typename Type>
void Deque<Type>::DeleteL(Deque *Dec)
{
for (int i=0; i<Dec->last; i++)
    Dec->data[i]=Dec->data[i+1];
Dec->last--;
}

template <typename Type>
void Deque<Type>::DeleteR(Deque *Dec){
    Dec->last--;
}

template <typename Type>
int Deque<Type>::OutputL(Deque *Dec){
    return Dec->data[0];
}

template <typename Type>
int Deque<Type>::OutputR(Deque *Dec){
    return Dec->data[Dec->last-1];
}

template <typename Type>
int Deque<Type>::Size(Deque *Dec){
    return Dec->last;
}


#endif // DEQUE_H
