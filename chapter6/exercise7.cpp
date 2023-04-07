#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int vowels = 0, consonants = 0, others = 0;
    string words;

    cout << "Enter words (q to quit): " << endl;
    while (cin >> words && words != "q")
    {
        cout << words <<  words.size() << endl;

        if (isalpha(words[0])) //ֻ���ж�һ���ַ��ǲ�����ĸ
        {
            switch(words[0]) //�����ǩ��Ӧһ�����
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    vowels++;
                    break;
                default:
                    consonants++;
            }
        }
        else
        {
            others++;
        }
    }

    cout << vowels << " words beginning with vowels" << endl;
    cout << consonants << " words beginning with consonants" << endl;
    cout << others << " others" << endl;

    return 0;
}