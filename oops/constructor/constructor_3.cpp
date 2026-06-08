#include <iostream>
using namespace std;

class FIFA
{
    // * private
    string tournamentName;
    int year;
    int totalTeams;
    int totalMatches;
    string venue;

public:
    // * default / non - paramterised constructor
    FIFA()
    {
        tournamentName = "FIFA 1999 World Cup";
        year = 1999;
        totalTeams = 8;
        totalMatches = 24;
        venue = "Dellas";
    }

    // * paramterised constructor  -- all 5 parameters are there
    FIFA(string tn, int ye, int tt, int tm, string ve)
    {
        tournamentName = tn;
        year = ye;
        totalTeams = tt;
        totalMatches = tm;
        venue = ve;
    }

    // * paramterised constructor  -- 3 parameters are there
    FIFA(string tn, int ye, string ve)
    {
        tournamentName = tn;
        year = ye;
        totalTeams = 12;
        totalMatches = 64;
        venue = ve;
    }

    void displayData()
    {
        cout << "Tournament Name : " << tournamentName << endl;
        cout << "Year : " << year << endl;
        cout << "Total Teams : " << totalTeams << endl;
        cout << "Total Matches : " << totalMatches << endl;
        cout << "Venue : " << venue << endl;
    }
};

int main()
{
    FIFA f1;                                                //* default
    FIFA f2("FIFA 2021 World Cup", 2021, "Dubai");          //* 3 parameters constructor
    FIFA f3("FIFA 2025 World Cup", 2025, 48, 104, "Qatar"); // * 5 parameters constructor

    f1.displayData();
    f2.displayData();
    f3.displayData();
    return 0;
}