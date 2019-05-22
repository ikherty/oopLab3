#include "deque.h"
/*требуется создать целевой шаблонный класс А с помощью серверного класса В.
Это означает, что объект класса А содержит объект класса В.
Вызывающая программа должна продемонстрировать использование класса.
Показать инстанцирование шаблона для типов int, double и std::string.
Целевой шаблонный класс Реализация с применением
Deque  Vect */

int main(int argc, char *argv[]){
    cout<<"Сздание очередей типов int, double, string. Инициализация."<<endl;
    Deque <int> intDeq(3);
    Deque <double> doubleDeq;
    Deque <std::string> stringDeq(5);
    intDeq.AddFirst();
    cout<<"INT очередь:";
    intDeq.Size();
    doubleDeq.Full();
    doubleDeq.AddFirst();
    doubleDeq.AddLast();
    stringDeq.DeleteFirst();
    stringDeq.OutputLast();
    return 0;
}
