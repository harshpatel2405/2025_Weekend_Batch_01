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
    // * paramterised constructor
    FIFA(string tn, int ye, int tt, int tm, string ve)
    {
        tournamentName = tn;
        year = ye;
        totalTeams = tt;
        totalMatches = tm;
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
    FIFA f1("FIFA World Cup",2025, 48, 104,"Qatar");
    f1.displayData();
    return 0;
}