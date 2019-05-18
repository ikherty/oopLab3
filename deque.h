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
    const int sizeDeq; //размер дека
    Type last; //указатель на конец
    vector <Type> v1;//очередь-объект серверного класса
public:
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
#endif // DEQUE_H
