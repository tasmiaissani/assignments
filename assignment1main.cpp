main.cpp

#include <iostream>
#include "integer.h"
using namespace std;
int main()
{
char option;
int number1;
int number2;
cout<<"A is addition S is sbstraction M is multiplication D is division E for Exit.";
Integer re;
cin>>option;
do{
cout<<"Enter the number 1: ";
cin>>number1;
Integer integer1(number1);
cout<<"Enter the number 2: ";
cin>>number2;
Integer integer2(number2);
if(option == 'A'){
Integer result = re.addition(integer1,integer2);
cout<<"Result is "<<result.getNumber()<<endl;
}else if(option == 'S'){
Integer result = re.substraction(integer1,integer2);
cout<<"Result is "<<result.getNumber()<<endl;
}else if(option == 'M'){
Integer result = re.multiplication(integer1,integer2);
cout<<"Result is "<<result.getNumber()<<endl;
}else if(option == 'D'){
Integer result = re.division(integer1,integer2);
cout<<"Result is "<<result.getNumber()<<endl;
}
cout<<"A for addition S for sbstraction M for multiplication D for division E for Exit.";
cin>>option;
}while(option != 'E');

return 0;
}

