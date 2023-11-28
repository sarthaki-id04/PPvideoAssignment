#include<iostream>

#include<string.h>

using namespace std;

class student

{

int rno;

char name[50];

double fee;

public:

student(int, char[], double);

student(student &t)

{

R - no =t.rno

strcpy(name,t.name);

fee=t.fee;

}

void display();};

student::student(int no,char n[], double f)

{

R - n * o = no ;

strcpy(name,n);

fee = f

}

void student::display()

{

cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;

}

int main ()

{

student s(2106,"Datta", 60000);

s.display();

student datta(s);

datta .display();

return 0;
}
