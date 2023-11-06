#include <iostream>
#include <string>
using namespace std;

class clsPerson{
    private:
        int _id, _phone;
        string _FirstName, _LastName, _Email, _Depertement;
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
        
        // print all information
        void print(){
            cout<<"FistName => "<<_FirstName<<endl;
            cout<<"FistName => "<<_LastName<<endl;
            cout<<"FistName => "<<_Email<<endl;
            cout<<"FistName => "<<_phone<<endl;
            cout<<"FistName => "<<_Depertement<<endl;
        }
};

class clsDeveloper : public clsPerson{
    private:  
        int _salary;
        string _Programming_langage;
    public:
        void setsalary(){
            int salary;
            cout<<"enter your salary : ";
            cin>>salary;
            _salary = salary;
        }
        double getSalary(){
            return _salary;
        }
        void setLangage(){
            string Programming_langage;
            cout<<"enter programming langage : ";
            cin>>Programming_langage;
            _Programming_langage = Programming_langage;
        }
        string getLangage(){
            
            return _Programming_langage;
        }
        void print(){
            clsPerson::print();
            cout<<"You earning is  "<<_salary<<endl;
            cout<<"You use "<<_Programming_langage<<" to programm"<<endl;
        }
};

int main()
{
    clsDeveloper AhmedDev;
    AhmedDev.setFirst();
    AhmedDev.setLast();
    AhmedDev.setEmail();
    AhmedDev.setPhone();
    AhmedDev.setDepertement();
    AhmedDev.setsalary();
    AhmedDev.setLangage();
    AhmedDev.print();
    cout<<"______________________________"<<endl;
    clsDeveloper kader;
    kader.setFirst();
    kader.setLast();
    kader.setEmail();
    kader.setPhone();
    kader.setDepertement();
    kader.setsalary();
    kader.setLangage();
    kader.print();
    
    return 0;
}
