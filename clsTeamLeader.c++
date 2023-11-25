#include <iostream>
#include <string>
#include "./clsQA.c++"
using namespace std;

class clsTeamLeader : public clsQA
{
private:
    string _rangSalary;
public:
    clsTeamLeader(){
        _rangSalary = "";
    };
    void setrangSalary(){
        cout<< "What's the salary range for this role ? "<<endl;
        cout<< "1 - If a recruiter doesn’t bring up compensation in the interview, ask about it.  "<<endl;
        cout<< "2 - Don't do research ahead of time to see the typical salary range for a person in this role "<<endl;
        cout<< "choose 1 or 2  of this question "<<endl;
        string rSlary;
        cin>>rSlary;
        _rangSalary = rSlary;

        
    }

    string getrangSalary(){

        return _rangSalary;
        

    
        
    }
    
};




