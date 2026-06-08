#include <iostream>
using namespace std;

class PrintingPress
{
    // * private
    int paperSet = 20;
    string address;
    int numberOfEmployees;
    string examName;

    void displayData()
    {
        cout << "PaperSet : " << paperSet << endl;
        cout << "Address : " << address << endl;
        cout << "PaperSet : " << paperSet << endl;
        cout << "Exam Name : " << examName << endl;
    }

public:
    void inputData()
    {
        address = "Ram Chowk";
        numberOfEmployees = 20;
        examName = "Neet";
    }
    friend void getInfoAfterGivingMoney(PrintingPress p1);
};

void getInfoAfterGivingMoney(PrintingPress p)
{
    // cout << "PaperSet Inside friend Function : "<<p.paperSet<<endl; // *  this is also directly accessible
    p.displayData();
}

int main()
{
    PrintingPress p;
    p.inputData();

    // cout << p.paperSet; // * this is not allowed as it is private
    getInfoAfterGivingMoney(p);
    return 0;
}