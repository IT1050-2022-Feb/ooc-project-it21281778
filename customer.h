#nclude<iostream>
#include<string>

class Customer
 {
  private:
    char CUserId[10];
    char CName[100];
    char CEmail[100];100
    int CCNumber; 
    char CGender[10];
    char CAdress[200];
    
   public:
    Customer();
    void customer(const char PCUserName[],const char PCPassWord[],const char PCAdress[],const char PCEmail[],int PCNo[]);
    void displayDetails();
    void Login();
    void Logout();
    char search();
    void Select vehicle();
    void Picklocation();
    void MakePayment();
    ~Customer();
  };
