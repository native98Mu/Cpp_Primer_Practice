#include <iostream>
using namespace std;

void basic_io(){
    char name[20];
    int age;
    cout<<"Please enter your name:";
    cin>>name;
    cout<<"Please enter your age:";
    cin>>age;
    cout<<name<<" is "<<age<<" years old."<<endl;
}
void unsigned_intro(){
    unsigned u =10;
    int i =-42;
    //无符号数和int相加时，int会转为无符号数，即相当于把int直接赋给无符号变量
    cout<<u+i<<endl; //给一个无符号类型赋一个超出表示范围的值时，结果是初始值对无符号类型数值总数取模后的余数
    cout<<i+i<<endl;  
}
int main()
{
    unsigned_intro();
    //basic_io();
    return 0;
}