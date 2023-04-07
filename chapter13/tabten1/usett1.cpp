#include <iostream>
#include "tabtenn1.h"

using namespace std;

int main()
{
    RatedPlayer rplayer1(1140, "Mallory", "Duck", false);
    rplayer1.Name();
    if (rplayer1.HasTable())
        cout << ": has a table\n";
    else
        cout << ": hasn't a table\n";
    rplayer1.Name();
    cout << ", Rating: " << rplayer1.Rating() << endl;

    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer2(1212, player1);
    cout << "Name: ";
    rplayer2.Name();
    cout << "Rating: ";
    cout << rplayer2.Rating() << endl;

    return 0;
}