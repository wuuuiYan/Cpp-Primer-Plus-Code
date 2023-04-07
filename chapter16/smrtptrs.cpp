#include <memory>
#include <iostream>
#include <string>

using namespace std;

class Report
{
    private:
        string str;
    public:
        Report(string s) : str(s) {cout << "Object created\n" << endl;}
        ~Report() {cout << "Object deleted\n";}
        void comment() const {cout << str << endl;}
};

int main()
{
    //auto_ptr<Report> ps(new Report("using auto_ptr"));
    //ps->comment();

    shared_ptr<Report> ps1(new Report("using auto_ptr"));
    ps1->comment();

    unique_ptr<Report> ps2(new Report("using auto_ptr"));
    ps2->comment();

    return 0;
}

