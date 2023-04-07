#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

const int NUM = 26;
const string wordlist[NUM] = {"apiary", "beetle", "cereal",
    "danger", "ensign", "florid", "garage", "health", "insult",
    "jackal", "keeper", "loaner", "manage", "nonce", "onset", 
    "plaid", "quilt", "remote", "stolid", "train", "useful", 
    "valid", "whence", "xenon", "yearn", "zippy"};

int main()
{
    char play;

    srand(time(0));
    cout << "Will you play a word game? <y/n>";
    cin >> play;
    play = tolower(play);

    while(play == 'y')
    {
        string target = wordlist[rand() % NUM];
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Guess my secret word, it has " << length << " length letters, and you guess one letter at one time. You get " << guesses << " wrong guesses." << endl;

        cout << attempt << endl;
        while(guesses > 0 && attempt != target)
        {
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            if(badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
            {//既没有在曾经猜错的记录中出现，也没有在正确的记录中出现，说明这个字母没有询问过
                cout << "You have already guessed that, try again." << endl;
            }
            int loc = target.find(letter);
            if(loc == string::npos)
            {
                cout << "Oh, bad guess!" << endl;
                guesses--;
                badchars += letter;
            }
            else
            {
                cout << "Good guess!" << endl;
                attempt[loc] = letter;
                loc = target.find(letter, loc + 1);
                while(loc != string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }   
            }
            cout << "Your word:" << attempt << endl;
            if(attempt != target)
            {
                if (badchars.length())
                    cout << "Bad choices: " << badchars << endl;
                cout << guesses << " bad guesses left!" << endl;
            }
        }
        if(guesses > 0 || attempt == target)
            cout << "That's right!" << endl;
        else
        {
            cout << "Sorry, the correct word is " << target << ", will you play another time?<y/n>";
            cin >> play;
            play = tolower(play);
        }
            
    }

    return 0;
}