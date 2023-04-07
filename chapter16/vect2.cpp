#include <vector>
#include <string>
#include <iostream>

using namespace std;

struct Review
{
    string title;
    int rating;
};

bool FillReview(Review &r);
void showReview(const Review &r);

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
        for(int i = 0; i < nums; i ++)
            showReview(books[i]);

        cout << "Reprising: " << endl;
        vector<Review> :: iterator pr;
        for(pr = books.begin(); pr != books.end(); pr ++)
            showReview(*pr);
        
        vector<Review> oldlist(books);
        if(nums > 3)
        {
            books.erase(books.begin() + 1, books.begin() + 3);
            cout << "After erasing: " << endl;
            for(auto pr = books.begin(); pr != books.end(); pr ++)
                showReview(*pr);
            
            books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
            cout << "After inserting: " << endl;
            for(auto pr = books.begin(); pr != books.end(); pr ++)
                showReview(*pr);
        }

        books.swap(oldlist);
        cout << "After swapping: " << endl;
        for(auto pr = books.begin(); pr != books.end(); pr ++)
            showReview(*pr);
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