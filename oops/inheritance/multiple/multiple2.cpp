/*
 * Library Management (Medium)
 *
 * Class : Book
 *     Book Name
 *     Author
 * Class : Member
 *     Member Name
 *     Membership ID
 * Class Library
 *     Inherit both
 *     Display book issued to member.
 */
#include <iostream>
using namespace std;

class Book
{
    string bookName;
    string author;

public:
    Book(string bn, string au)
    {
        bookName = bn;
        author = au;
    }

    void displayBook()
    {
        cout << "Book Name : " << bookName << endl;
        cout << "Author : " << author << endl;
    }
};

class Member
{
    string memberName;
    int membershipId;

public:
    Member() {}
    Member(string mn, int mid)
    {
        memberName = mn;
        membershipId = mid;
    }

    void displayMember()
    {
        cout << "Member Name : " << memberName << endl;
        cout << "MemberShip ID : " << membershipId << endl;
    }
};

class Library : public Book, public Member
{
    int libraryID;

public:
    Library(string bn, string au, string mn, int mid, int li) : Book(bn, au), Member(mn, mid)
    {
        libraryID = li;
    }

    void displayLibrary()
    {
        displayBook();
        displayMember();
        cout << "Library ID : " << libraryID << endl;
    }
};

int main()
{
    Library l1("Harry Putter", "Ketan Bhagat", "Vasu Shrivastav", 101, 1234);
    l1.displayLibrary();
    return 0;
}