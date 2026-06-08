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
    // * non paramterised / default  constructor
    FIFA()
    {
        tournamentName = "FIFA World Cup";
        year = 2025;
        totalTeams = 48;
        totalMatches = 104;
        venue = "Qatar";
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
    FIFA f1;
    f1.displayData();
    return 0;
}