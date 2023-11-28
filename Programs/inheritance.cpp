#include<iostream>

using namespace std;

class employe

{ public:

int id;

int salary;

public:

employe(int i, int s)

{

id=i;

salary=s;

}

employe()

{}

};

class programmer: public employe {

public:

int roll_no;

public:

programmer(int r,int i,int s) {

roll_no=r; id=i;

salary=s;

} void display()

{ cout<<"the employe has "<<" "<<roll_no<<" "<<"and id is"<<" "<<id<<" "<<"and name is"<<" "<<" "<<salary<<endl;

} };

int main() {

int roll, id, salary, mon;

cout<<"enter the name of programmer\n"; cin>>name;

cout<<"enter the roll no of programmar\n"; cin>>roll;

cout<<"enter the id of programmer\n"; cin>>id;

cout<<"enter the salary of programmer\n"; cin>>salary; cout<<"enter the monthly salary";

cin>>mon;

programmer p1(roll,id,salary); p1.display();

}
