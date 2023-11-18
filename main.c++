#include <iostream>
#include <string>
using namespace std;
#include "./clsQA.c++"
class clsPerson{
    protected:
        int _id, _phone;
        string _FirstName, _LastName, _Email, _Depertement, _subject, _body, _message;
    public:
        // create object wihtout constructor parameter
        clsPerson(){

        }
        clsPerson(int salary, int phone, string firstname, string lastname, string email, string depertement){
             _phone = phone;
             _FirstName = firstname;
             _LastName = lastname; 
             _Email = email;
             _Depertement = depertement;
        } 
        // set all information user
        void setFirst(){
            string FirstName;
            cout<<"Enter Your FirstName : "<<endl;
            cin>>FirstName;
            _FirstName = FirstName;
        }
        void setLast(){
            string lastname;
            cout<<"Enter Your LastName : "<<endl;
            cin>>lastname;
            _LastName = lastname;
        }
        void setEmail(){
            string email;

            cout<<"Enter Your Email : "<<endl;
            cin>>email;
            _Email = email;
        }
         void setDepertement(){
            string depertamnt;
            cout<<"Enter Your Depertement : "<<endl;
            cin>>depertamnt;
            _Depertement = depertamnt;
        }
        void setPhone(){
            int phone  = phone;
            cout<<"Enter Your Phone : "<<endl;
            cin>>phone;
            _phone = phone;
        }
        void setSendEmail(){
            string subject = subject;
            cout<<"Enter Your Subject Title : "<<endl;
            cin>>subject;
            _subject = subject;
           
        }
        void setBodyEmail(){
             string body = body;
            cout<<"Enter Your Body : "<<endl;
            cin>>body;
            _body = body;
        }
        void sendMessage(){
            int message;
            cout<<"type your message "<<endl;
            cin>>message;
            _message = message;
        }
        // get all information user

        string getFirst(){
            return _FirstName;
        }
        string getLast(){
            return  _LastName; 
        }
        string getEmail(){
           return _Email;
        }
         string geDepertement(){
            return _Depertement;
        }
        int getPhone(){
            return _phone;
        }
        string getsendEmail(){
            return _body;
        }
        string getMessagge(){
            return _message;
        }
        
        // print all information
        void print(){
            cout<<"FistName => "<<_FirstName<<endl;
            cout<<"LastName => "<<_LastName<<endl;
            cout<<"Email => "<<_Email<<endl;
            cout<<"Phone    => "<<_phone<<endl;
            cout<<"FistName => "<<_Depertement<<endl;
            cout<<"the email was succesful sent to : "<<_Email<<endl;
            cout<<"the message was succesful sent to :"<<_phone<<endl;

        }
};

class clsDeveloper : public clsPerson{
    private:  
        int _salary;
        string _Programming_langage;
        string _question;
    public:
        void setsalary(){
            int salary;
            cout<<"enter your salary : ";
            cin>>salary;
            _salary = salary;
        }
        void setQuestion(){
            string question, anwser;
            cout<<"Question for you : cpp is procudural programming  ";
            if (anwser == "yes")
            {
               cout<<"you are hired "<<endl;
            }else{
               cout<<"sorry you are not hired "<<endl;
                
            }
            
            // cin>>question;
            // _salary = question;
        }
        double getSalary(){
            return _salary;
        }
        void setLangage(){
            string Programming_langage;
            cout<<"enter programming langage : "<<endl;
            cin>>Programming_langage;
            _Programming_langage = Programming_langage;
        }
        string getLangage(){
            
            return _Programming_langage;
        }
        void print(){
            clsPerson::print();
            cout<<"You earning is  "<<_salary<<endl;
            cout<<"You use <<"<<_Programming_langage<<" >> to programm"<<endl;
        }
};


class clsRecrurter : public clsPerson{
    private:
        int _years;
        string _employer;
    public:
        clsRecrurter(){

        }
        clsRecrurter(int years, string employer){
            _employer = employer;
            _years = years;

        }
        void setYrears(){
            int years = years;
            cout<<"how many years do you recrutre emoloyer ? ";
            cin>>years;
            _years = years;
        }
        void setEmoployerType(){
            int employer = employer;
            cout<<"What type of employer do you recrute ? ";
            cin>>employer;
            _employer = employer;
        }
        string  getEmployerType(){
            return _employer;
        }
        int getYears(){
            return _years;
        }
        void print(){
            cout<<_FirstName<<" "<<_LastName<<" has "<<_years<<" and he/she hire "<<_employer<<endl;
        }
};
int main()
{
    
    cout<<"________________________________________________"<<endl;    
    cout<<"________________________________________________"<<endl;    
    cout<<"___________ Hire Employer System _______________"<<endl;    
    cout<<"______________ Choose Number __________________"<<endl; 
    cout<<"_______________ 1. employer ___________________"<<endl;
    cout<<"_______________ 2. recrteur _______________ "<<endl;   
    cout<<"_______________ 3. Q/A _______________ "<<endl;   
    cout<<"________________________________________________"<<endl;  
    cout<<"you number is => ";  
    int choise;
    cin>>choise;
    if (choise == 1)
    {
        clsDeveloper AhmedDev;
            AhmedDev.setFirst();
            AhmedDev.setLast();
            AhmedDev.setEmail();
            AhmedDev.setPhone();
            AhmedDev.setDepertement();
            AhmedDev.setsalary();
            AhmedDev.setLangage();
            AhmedDev.setSendEmail();
            AhmedDev.setBodyEmail();
            AhmedDev.sendMessage();
            cout<<"________________________________________________"<<endl;    

            AhmedDev.print();
            cout<<"________________________________________________"<<endl;    

    }
    else if (choise == 2)
    {
        clsRecrurter AmelRec;
        AmelRec.setFirst();
        AmelRec.setLast();
        AmelRec.setYrears();
        AmelRec.setEmoployerType();
        cout<<"________________________________________________"<<endl;    

        AmelRec.print();
        cout<<"________________________________________________"<<endl;    

    }
    else if (choise == 3)
    {
        clsQADeveloper D;
        D.setQstDevlpr();
        cout<<"________________________________________________"<<endl;    
        D.show();
        cout<<"________________________________________________"<<endl;    

    }
    else
    {
        cout<<"sorry pleas enter number from 1 to 2";
    }
 
    return 0;
}
