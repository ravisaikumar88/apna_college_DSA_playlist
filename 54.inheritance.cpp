#include<iostream>
using namespace std;

class A{
    public:
        void func(){
            cout<<"Inherited";
        }
};

class B : public A{

};  //SINGLE INHERITANCE

//MULTIPLE INHERITANCE
class C {
    public:
    void Cfunc(){
        cout<<"Func C\n";
    }

};

class D{
    public:
    void DFunc(){
        cout<<"Func D\n";
    }
};

class E : public C,public D {
    public:
};

//MULTI LEVEL INHERITANCE

class F{
    public:
    void Ffunc(){
        cout<<"Func F\n";
    }


};
class G: public F{
    public:
    void Gfunc()
    {
        cout<<"Func G\n";
    }
};

class H : public G{
   public:

};


int main()
{
    B b;
    b.func();
    cout<<endl;

    E e;
    e.Cfunc();
    e.DFunc();

    H h;
    h.Ffunc();
    h.Gfunc();
    return 0;
}