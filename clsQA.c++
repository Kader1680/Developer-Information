#include <string>
using namespace std;
#include <iostream>
class clsQA
{
protected:
    string _respGeneral;
public:
    clsQA(){
        _respGeneral = "";
    };
    void setQst(){
        cout<<"Why you want to join us ? ";
        string resp;
        cin>>resp;
        _respGeneral = resp;
    }
    string getResp(){
        return _respGeneral;
    }
    
    void show(){
        cout<<"great you passed ! ";
    }
    
};

class clsQADeveloper : public clsQA {
    private:
        string _Html, _C, _python;
    public:
    
    
    void setQstDevlpr(){

        cout<<"is Html langage of programming ?  yes or not "<<endl;
        string html;
        cin>>html;
        _Html = html;

        cout<<"Vector is Data Structre Non Linaire ?  yes or not "<<endl;
        string c;
        cin>>c;
        _C = c;
    }
    string getRespDevlpr(){
        return _Html, _C;
    }
    
    void show(){
        if (_Html == "no")
        {
            cout<<"great you passed "<<endl;

        }
        else if(_Html == "yes"){
            cout<<"Fail Answer One of this qestion id not correct "<<endl;
        }
        else if(_C == "no"){
            cout<<"great you passed "<<endl;
        }
        else if(_C == "yes"){
            cout<<"Fail Answer One of this qestion id not correct  "<<endl;
        }
        else
        {
            cout<<"Please Anaswer with yes or no "<<endl;
        }
        
    }
};


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
        if (_rangSalary == "1")
        {
            cout<<"True it's correct answer !";
        }
        else
        {
            cout<<"False it's incorrect answer !";

        }

    
        
    }
    
};







