#include <iostream>

using namespace std;

const int Min_per_hr = 60;

struct travel_time
{
    int hours;
    int mins;
};

travel_time sum_time(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main()
{
    travel_time day1 = {5, 45};
    travel_time day2 = {4, 55};

    travel_time trip = sum_time(day1, day2);
    cout << "Two days total: ";
    show_time(trip);

    travel_time day3 = {4, 32};
    cout << "Three days total: ";
    show_time(sum_time(trip, day3));

    return 0;
}

travel_time sum_time(travel_time t1, travel_time t2)
{
    travel_time total = {0, 0};

    total.mins = (t1.mins + t2.mins) % Min_per_hr;
    total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Min_per_hr;

    return total;
}

void show_time(travel_time t)
{
    cout << t.hours << " hours, " << t.mins << "minutes." << endl;
}