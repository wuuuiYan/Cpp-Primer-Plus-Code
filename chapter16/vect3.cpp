#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

struct Review
{
    string title;
    int rating;
};

bool FillReview(Review &r);
void showReview(const Review &r);
bool operator<(const Review &r1, const Review &r2);
bool worseThan(Review &r1, Review &r2);

int main()
{
    vector<Review> books; //严格来说是通过模板类创建了一个对象，但可以理解为结构体数组
    Review temp;
    while(FillReview(temp))
        books.push_back(temp);

    int nums = books.size();
    if(nums > 0)
    {
        cout << "You entered the following: " << endl;
        //for(int i = 0; i < nums; i ++)
        //    showReview(books[i]);
        for_each(books.begin(), books.end(), showReview);

        cout << "Reprising: " << endl;
        vector<Review> :: iterator pr;
        //for(pr = books.begin(); pr != books.end(); pr ++)
        //    showReview(*pr);
        for_each(books.begin(), books.end(), showReview);
        
        vector<Review> oldlist(books);
        if(nums > 3)
        {
            books.erase(books.begin() + 1, books.begin() + 3);
            cout << "After erasing: " << endl;
            //for(auto pr = books.begin(); pr != books.end(); pr ++)
            //    showReview(*pr);
            for_each(books.begin(), books.end(), showReview);
            
            books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
            cout << "After inserting: " << endl;
            //for(auto pr = books.begin(); pr != books.end(); pr ++)
            //    showReview(*pr);
            for_each(books.begin(), books.end(), showReview);
        }

        books.swap(oldlist);
        cout << "After swapping: " << endl;
        //for(auto pr = books.begin(); pr != books.end(); pr ++)
        //    showReview(*pr);
        for_each(books.begin(), books.end(), showReview);

        cout << "After random shuffle: ";
        random_shuffle(books.begin(), books.end());
        for_each(books.begin(), books.end(), showReview);

        cout << "After sorting: " << endl;
        sort(books.begin(), books.end());
        for_each(books.begin(), books.end(), showReview);

        cout << "After sorting2: " << endl;
        sort(books.begin(), books.end(), worseThan);

        // 
    }
    else
        cout << "Done!" << endl;

    return 0;
}

bool FillReview(Review &r)
{
    cout << "Enter book title, (enter q to quit): ";
    getline(cin, r.title);
    if(r.title == "quit")
        return false;
    cout << "Enter book rating: ";
    cin >> r.rating;
    if(!cin)
        return false;
    while(cin.get() != '\n');
    return true;
}

void showReview(const Review &r)
{
    cout << "r.rating" << "\t" << r.title << endl;
}

bool operator<(const Review &r1, const Review &r2)
{
    if(r1.title < r2.title)
        return true;
    else if(r1.title == r2.title && r1.rating < r2.rating)
        return true;
    else
        return false;
}

bool worseThan(Review &r1, Review &r2)
{
    if(r1.rating < r2.rating)
        return true;
    else
        return false;
}