#include<iostream>
#include<string>
#include<Payment.h>

class location{
  private:
    char LocationID[10];
    string LocationName;
    string area;  
    int postCode;


  Public:
    location();
    void setLocation();
    void showLocation();
    ~location();
};
#endif