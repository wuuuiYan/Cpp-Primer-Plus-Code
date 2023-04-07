#include <iostream>
#include "stack.h"
#include <cctype>

using namespace std;

int main()
{
    char ch;
    customer cust;
    Stack st;
    double sum = 0.0;

    cout << "Please enter A to push to stack,\n";
    cout << "P to pop from stack, Q to quit.\n" << endl;

    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n') //消耗输入缓冲区中的回车
            continue;

        switch (ch)
        {
            case 'A':
            case 'a':
                cout << "Enter a customer's fullname you want to push to stack: " << endl;
                cin.getline(cust.fullname, 35);
                cout << "Enter a customer's payment you want to push to stack: " << endl;
                cin >> cust.payment;

                if (st.isfull())
                    cout << "Stack already full." << endl;
                else
                    st.push(cust);
                break;
            
            case 'P':
            case 'p':
                if (st.isempty())
                    cout << "Stack is empty." << endl;
                else
                {
                    st.pop(cust);
                    sum += cust.payment;
                    cout << cust.fullname << " is poped." << endl;
                    cout << cust.payment<< " is poped." << endl;
                    cout << "Sum payment = " << sum << endl;
                }
                break;
        }
        
        cout << "Please enter A to push to stack,\n";
        cout << "P to pop from stack, Q to quit.\n" << endl;
    }

    return 0;
}