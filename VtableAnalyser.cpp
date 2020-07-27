using namespace std;

#include<iostream>

class Base
{
    public:
    int i,j;

    virtual void fun()
    {
        cout<<"Base Fun\n";
    }
    virtual void gun()
    {
        cout<<"Base Gun\n";
    }
    void sun()
    {
        cout<<"Base Sun\n";
    }
};

class Derived : public Base
{
    public:
    int x,y;
void fun()
{
    cout<<"Derived fun\n";
}
void mun()
    {
        cout<<"Base mun\n";
    }

virtual void tun()
{
    cout<<"Derived tun\n";
}

};
int main()
{
    Base bobj;
    Derived dobj;

    cout<<&bobj<<"\n";
    cout<<sizeof(bobj)<<"\n";
    cout<<sizeof(dobj)<<"\n";

    long int * op = (long int *) &bobj;
    cout<<"Base addres of bobj is :"<<op<<"\n";

    long int * vptr = (long int *) (*op);
    cout<<"addres of vtable is :"<<vptr<<"\n";

     void (*fp)();
    fp = (void(*)())(*vptr);
    fp();

    fp = (void(*)())(*(vptr+1));
    fp();


    return 0;
}
