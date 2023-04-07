#include <iostream>
#include <set>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

const int N = 6;

int main()
{
    string s1[N] = {"buffoon", "thinkers", "for", "heavy", "can", "for"};
    string s2[N] = {"metal", "any", "food", "elegant", "deliver", "for"};

    set<string> A(s1, s1 + N); //set不允许有重复的key出现，且对其中的元素进行了排序
    set<string> B(s2, s2 + N);

    ostream_iterator<string, char> out(cout, " "); //输出流迭代器对象
    cout << "Set A: ";
    copy(A.begin(), A.end(), out);
    cout << endl;
    cout << "Set B: ";
    copy(B.begin(), B.end(), out);
    cout << endl;

    cout << "Union of A and B: ";
    set_union(A.begin(), A.end(), B.begin(), B.end(), out);
    cout << endl;

    cout << "Intersection of A and B: ";
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), out); //A和B中均有
    cout << endl;

    cout << "Difference of A and B: ";
    set_difference(A.begin(), A.end(), B.begin(), B.end(), out); //A中有，但B中没有
    cout << endl;

    set<string> C;
    cout << "Set C: ";
    set_union(A.begin(), A.end(), B.begin(), B.end(), insert_iterator<set<string>>(C, C.begin()));
    copy(C.begin(), C.end(), out);
    cout << endl;

    string s3("grungy");
    C.insert(s3);
    cout << "Set C after insert: ";
    copy(C.begin(), C.end(), out);
    cout << endl;   

    cout << "Showing a ranger: ";
    copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
    cout << endl;

    return 0;
}