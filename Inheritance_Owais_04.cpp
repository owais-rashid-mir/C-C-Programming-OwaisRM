/*
Program : C++ program to show inheritance using different levels.
*/

#include <iostream>
using namespace std;

class examMarks
{
    protected:
        int sub1, sub2;

    public:
        void getEM(int x, int y)    // Get Exam Marks
        {
            sub1 = x;
            sub2 = y;
        }

        void displayEM()
        {
            cout << "Subject 1 = " << sub1 << endl;
            cout<<"Subject 2 = " << sub2 << endl;
        }
};

class sportsMarks : public examMarks
{
    protected:
        int sport1, sport2;

    public:
        void getSM(int p, int q)    // Get Sports Marks
        {
            sport1 = p;
            sport2 = q;
        }

        void displaySM()
        {
            cout << "Sport 1 marks = " << sport1 << endl;
            cout << "Sport 2 marks = " << sport2 << endl;
        }
};

class pracMarks
{
    protected:
        int prac1, prac2;

    public:
        void getPM(int r, int s)    // Get Practical Marks
        {
            prac1 = r;
            prac2 = s;
        }

        void displayPM()
        {
            cout << "Practical 1 marks = " << prac1 << endl;
            cout << "Practical 2 marks = " << prac2 << endl;
        }
};

class totMarks : public sportsMarks , public pracMarks
{
    int tot;
    public:
        void computeResult()
        {
            tot = sub1 + sub2 + sport1 + sport2 + prac1 + prac2;
            cout << "Total marks = " << tot << endl;
        }
};

int main()
{
    totMarks obj;

    obj.getEM(100, 99);
    obj.displayEM();

    obj.getSM(95, 97);
    obj.displaySM();

    obj.getPM(91,98);
    obj.displayPM();

    obj.computeResult();

    return 0;
}
