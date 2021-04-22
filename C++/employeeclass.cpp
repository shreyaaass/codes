#include <iostream>
#include <cstring>
using namespace std;
class Employee
{
    int eAge;
    int eId;
    char eName[20];
    int eSal;
    char eGen;
    char eDesig[20];
    int eYoJ;

public:
    void store()
    {
        cout << "Enter Age" << endl;
        cin >> eAge;
        cout << "Enter Id" << endl;
        cin >> eId;
        cout << "Enter Name" << endl;
        cin >> eName;
        //cout << "Enter salary" << endl;
        //cin >> eSal;
        cout << "Enter gender" << endl;
        cin >> eGen;
        cout << "Enter designation" << endl;
        cin >> eDesig;
        cout << "Enter year of joining" << endl;
        cin >> eYoJ;
    }
    void display()
    {
        cout << eAge << endl;
        cout << eId << endl;
        cout << eName << endl;
        //cout << eSal<<endl;
        cout << eGen << endl;
        cout << eDesig << endl;
        cout << eYoJ << endl;
    };
    void calSalary()
    {
        float x;
        cout << "Enter basic value" << endl;
        cin >> x;
        eSal = (x + .2 * x + .2 * x) - (.02 * x);
        //executable statement
        cout << eSal << endl;
    };
    void updateSal()
    {
        if (eGen == 'M' && eAge > 45 && eYoJ > 2004 && (strcmp(eDesig, "manager") == 0))
        {
            eSal = eSal * 1.05;
            cout << "Updated Sal " << eSal << endl;
        }
    };
};
int main()
{
    Employee e;
    e.store();
    e.display();
    e.calSalary();
    e.updateSal();
    return 0;
}