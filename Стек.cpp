#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class node ///������� ����� �������
{
public:
int x; 
node* previous; 
};

class stack /// ������� ����
{
private:
node* top; /// ������ �������
public:
stack()
{
top = NULL;
}
void add(int n);///�������� �������
void remove();///������� �������
};

void stack::add(int n) /// ������� ����������� �������
{
node* temp = new node;
temp -> x = n;
temp -> previous = top;
top = temp;
}

void stack::remove() /// ������� ��������� �������
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
while (end != 'd')/// ���� end �� ���� d ��������� ��������
{
cout << "Put a:" << endl;
cin >> a;
st.add(a);
cout << "Remove the last element? (D),(N)";
cin >> ch;
if (ch=='d' || ch=='D') st.remove(); /// ���� �������� ������� d �� �� ������� �������. ���� ��� �� ������ �� ���� �� ����������
cout << "End? (D),(N)";
cin >> end;

}
}


