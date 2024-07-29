#include<iostream>
using namespace std;
class User{
public:
    void call(){
    cout<<"This is User Class"<<endl;}
    virtual void message();
    //void message(); - invalid expression
};
class Karim : public User{
public:
    void message(){
    cout<<"This is Karim. \n";}
};
class Rahim : public User{
public:
    void message(){
    cout<<"This is  Rahim. \n";}
};

int main(){
 User *u;
 Karim k;
 Rahim r;

 u=&k;
 u->message();

 u=&r;
 u->message();

 return 0;
}
