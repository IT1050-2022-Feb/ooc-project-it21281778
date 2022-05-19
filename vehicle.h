#include <iostream>
#include <string>

class vehicle{
 private:
    string vehicleRegistaionNumber;
    string Color;
    string Model;
    string Brand;
    int Year;
    bool status;
    char type;
    
    
    
 public:
     vehicle();
     void showdetails();
     void setdetails(string regNum,string clr,string mdl,string brnd,int yr,bool stts,char typ);
     bool getstatus();
     ~vehicle();
};
#endif