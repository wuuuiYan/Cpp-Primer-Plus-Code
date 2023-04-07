#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

class Grand
{
    private:
        int hold;
    public:
        Grand(int h = 0) : hold(h) {}
        virtual void Speak() const {cout << "I am a grand class.\n";}
        virtual int Value() const {return hold;}
};

class Superb : public Grand
{   
    public:
        Superb(int h = 0) : Grand(h) {}
        virtual void Speak() const {cout << "I am a superb class.\n";}
        virtual void Say() const {cout << "I hold the superb value of " << Value() << endl;}
};

class Magnificent : public Superb
{
    private:
        char ch;
    public:
        Magnificent(char c = 'A', int h = 0) : Superb(h), ch(c) {}
        virtual void Speak() const {cout << "I am a magnificent class.\n";}
        virtual void Say() const {cout << "I hold the character " << ch << " and the integer " << Value() << endl;}

};

Grand *GetOne();

int main()
{
    Grand *pg;
    Superb *ps;
    srand(time(0));
    for (int i =0 ; i < 5; i ++)
    {
        pg = GetOne();
        cout << "Now processing type " << typeid(*pg).name() << endl;
        pg->Speak();

        //ps = (Superb *)pg;
        //ps->Say();
        if(ps = dynamic_cast<Superb *>(pg))
            ps->Say();
        if(typeid(Magnificent) == typeid(*pg))
            cout << "Yes, you are really magnificent." << endl;
    }
    return 0;
}

Grand *GetOne()
{
    Grand *p;
    switch(rand() % 3)
    {
        case 0:
            p = new Grand(rand() % 100);
            break;
        case 1:
            p = new Superb(rand() % 1000);
            break;
        case 2:
            p = new Magnificent('A' + rand() % 26, rand()% 100);
            break;
    }
    return p;
}