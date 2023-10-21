#include<iostream>
using namespace std;

class student{
    string name;
    public:
       
        int age;
        bool gender;

        void setName(string s){
            name = s;
        }
        void getName(){
            cout<<name<<endl;
        }

        student(){
            cout<<"Default Constructor"<<endl;
        } //Default COnstructor
        student (string s,int a,bool g){
            cout<<"Parameterised COnstructor"<<endl;
            name = s;
            age = a;
            gender = g;
        } // Parameterised Constructor

        student(student &a){
            cout<<"Copy Constructor"<<endl;
            name = a.name;
            age = a.age;
            gender = a.gender;
        }
        void printinfo(){
            cout<<"Name= ";
            cout<<name<<endl;
            cout<<"Age =";
            cout<<age<<endl;
            cout<<"Gender = ";
            cout<<gender<<endl;
        }
        bool operator == (student &a)
        {
            if(name == a.name && age == a.age && gender == a.gender)
            {
                return true;
            }
            return false;
        }

        ~student()
        {
            cout<<"Destructor Called"<<endl;
        }
};

int main()
{
   /*student arr[3];
   for(int i=0;i<3;i++){
        string s;

        cout<<"Name= ";
        cin>>s;
        arr[i].setName(s);
        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;
   }

   for(int i=0;i<3;i++){
    arr[i].printinfo();
   }*/

   /*student a;
        string s;
        cout<<"Name: ";
        cin>>s;
        a.setName(s);
        a.getName();*/

    student a("Urvi",9,0);
    //a.printinfo();

    student b("Rahul",21,1);

    student c = a;


    if(b==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }

        

    

    return 0;

}