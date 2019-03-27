#ifndef QUEUE_H
#define QUEUE_H
#include"stdlib.h"
#include<QDebug>
#include<QVector>
#include<QMessageBox>
template<typename data>
class Queue
{
public:
    struct List{
        data x;
        List *Next;
    };
    List *Head, *Tail;
    Queue():Head(nullptr),Tail(nullptr){};    //Инициализация указателей как пустых
    ~Queue();                           //Деструктор для освобождения памяти от всего что будет
    void Add(data);                   //Функция заполнения структуры Node и добавления её в список как элемента
    QString Show();                       //Функция отображения списка List
    void del();                        //Функция изъятия элемента
    void my_multiplication();
    void Search(data);

};
template<typename data>
Queue<data>::~Queue() //ДЕСТРУКТОР ДЛЯ ОЧИСТКИ ПАМЯТИ
{
 struct List *temp = Head;                     //Временный указатель на начало списка
 while (temp != NULL)                   //Пока в списке что-то есть

   {
     temp = Head->Next;                 //Резерв адреса на следующий элемент списка
     delete Head;                       //Освобождение памяти от первой структуры как элемента списка
     Head = temp;                       //Сдвиг начала на следующий адрес, который берем из резерва
   }
}

template<typename data>

//ФУНКЦИЯ ЗАПОЛНЕНИЯ ИНФОРМАЦИОННЫХ ПОЛЕЙ СТРУКТУРЫ List И ДОБАВЛЕНИЯ ЭТОЙ СТРУКТУРЫ В СПИСОК

void Queue<data>::Add(data x1)
{
    struct List *temp = new List;              //Выделение памяти для нового звена списка
    temp->x = x1;                        //Временное запоминание принятого параметра x
    temp->Next = NULL;                  //Указание, что следующее звено новосозданной структуры пока пустое

    if (Head != NULL)                   //Если список не пуст
    {
        Tail->Next = temp;              //Указание, что следующее звено списка это новосозданная структура
        Tail = temp;
    }     else Head = Tail = temp;      //Если список  пуст, добавление первого элемента
}
template<typename data>

//ФУНКЦИЯ ЗАПОЛНЕНИЯ ИНФОРМАЦИОННЫХ ПОЛЕЙ СТРУКТУРЫ List И ДОБАВЛЕНИЯ ЭТОЙ СТРУКТУРЫ В СПИСОК

void Queue<data>::Search(data x1)
{
    QMessageBox msg, msg1;
    struct List *temp = Head;              //Выделение памяти для нового звена списка
    msg.setText("Элемент не найден");
    while(temp!=NULL){
        if(temp->x == x1){
            msg.setText("Элемент найден");
            break;
        }
        temp = temp->Next;
    }
    msg.exec();
}

//ФУНКЦИЯ ОТОБРАЖЕНИЯ СПИСКА НА ЭКРАНЕ
template<typename data>
QString Queue<data>::Show()
{
    QVector<data> my_vec;
    struct List *temp = Head;                  //Временный указатель на начало списка
     while (temp != NULL)               //Пока в списке что-то встречается
     {
         my_vec+=temp->x;
//         qDebug()<< temp->x << " ";        //Выводим значения из списка на экран
         temp = temp->Next;             //Сдвигаем указатель на начало на адрес следующего элемента
     }
     QString str;
     for (int i = 0; i < my_vec.size(); ++i)
     {
         if (i > 0)
             str += " ";
         str += QString::number(my_vec[i]);
     }
     return str;
//     qDebug()<<str;
}
//ФУНКЦИЯ ИЗЪЯТИЯ ЭЛЕМЕНТА ИЗ ОЧЕРЕДИ
template<typename data>
void Queue<data>::del()
{
    QMessageBox msg;
    if (Head!=NULL){
    struct List *temp = Head;              //Обращаемся к началу списка с помощью вспомогательного указателя
    msg.setText("Элемент "+ QString::number(Head->x)+"вышел");
    msg.exec();
    Head = Head->Next;              //Сдвиг начала списка
    delete temp;
    }
    else return;//Освобождение памяти от предыдущего звена списка
}
template<typename data>
void Queue<data>::my_multiplication(){
    QMessageBox msg;
    struct List*temp = Head;
    struct List *value_min=Head, *value_max=Head;
    bool lastMax = false;
    if (Head != NULL){
        while(temp!=NULL){
            if (temp->x > value_max->x){
                value_max = temp;
                lastMax = true;}
            if (temp->x < value_min->x) {
                value_min = temp;
                lastMax = false;
            }
            temp = temp->Next;
        }
    }
    else {
        msg.setText("Очередь пуста");
        msg.exec();
        return;}
    struct List *lastElement = value_max; // Предполагаем что максимум идет после минимума
        temp = value_min; // temp текущий элемент, соответственно прирвняем к минимуму

        if (!lastMax) { // Если последним был минимум то меняем местами temp и lastElement
            lastElement = value_min;
            temp = value_max;
        }
     data result= 1;
        while (temp != lastElement) { //шагаем и перемножаем от минимума к максимуму (или наоборот)
            result *= temp->x;
            temp = temp->Next;
        }
        result *= lastElement->x; // Цикл не учтет последний элемент, поэтому надо домножить вручную
        msg.setText("Максимальный элемент: "+ QString::number(value_max->x)+" Минимальный элемент "+QString::number(value_min->x)+ "Произведение="+QString::number(result));
        msg.exec();
}


#endif // QUEUE_H
