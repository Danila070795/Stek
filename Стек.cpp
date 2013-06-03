#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class node ///Создаем класс элемент
{
public:
int x; 
node* previous; 
};

class stack /// Создаем Стэк
{
private:
node* top; /// Верхни элемент
public:
stack()
{
top = NULL;
}
void add(int n);///Добавить элемент
void remove();///Удалить элемент
};

void stack::add(int n) /// Функция добовляющая элемент
{
node* temp = new node;
temp -> x = n;
temp -> previous = top;
top = temp;
}

void stack::remove() /// Функция удаляющая элемент
{
node* temp = new node;
cout << top->x << endl;
temp = top-> previous;
delete top;
top = temp;
}

void main()
{
char end = 'n';   
char ch;
int a;
stack st;
while (end != 'd')/// пока end не раен d программа работает
{
cout << "Put a:" << endl;
cin >> a;
st.add(a);
cout << "Remove the last element? (D),(N)";
cin >> ch;
if (ch=='d' || ch=='D') st.remove(); /// Если нажимаем клавишу d то он выводит элемент. Если что то другое ни чего не происходит
cout << "End? (D),(N)";
cin >> end;

}
}


