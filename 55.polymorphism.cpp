#include<iostream>
using namespace std;

//Function Overloading

class Apnacollege{
    public:
    void func(){
        cout<<"function with no arguments"<<endl;
    }
    void func(int x){
        cout<<"function with int argument"<<endl;
    }
    void func(double x){
        cout<<"function with double argument"<<endl;
    }
};

//Operator overloading

class complex{
    private:
        int real,img;
    public:
        complex(int r = 0,int i =0){
            real = r;
            img = i;
        }
    complex operator + (complex const &obj){
        complex res;
        res.img = img + obj.img;
        res.real = real + obj.real;
        return res;

    }
    void display(){
        cout<<real<<" + i"<<img<<endl;
    }

};

int main()
{
    Apnacollege a;
    a.func();
    a.func(4);
    a.func(4.5822);

    complex c1(12,7) , c2(6,7);
    complex c3 = c1 + c2;
    c3.display();

    return 0;
}