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
        cout<<"great you passed and your answer is : "<<_respGeneral;
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

        cout<<"Can See Work with OOP ?  yes or not "<<endl;
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





