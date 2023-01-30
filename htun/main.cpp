#include <iostream>
using namespace std;

class book {
public:
    string title;
    string author;
    int pages;
    book(string atitle,string aauthor,int apages){
    title=atitle;
    author=aauthor;
    pages=apages;
    }
    bool nPages(){
    if(pages>=50)
        return true;
    else
        return false;
    }

};
int main()
{
    book book1("harry poter","kilorsi",150);
    book book2("the lord of the ring","omar",20);
    cout << book1.nPages();
    return 0;
}
