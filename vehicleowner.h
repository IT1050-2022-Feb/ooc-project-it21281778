include<iostream>
#include<string>

class vehicleowner;
{
  private:
     int owner_id[10];
     char password[50];
     int contactNumber;
     char vehicleType[10];
     float payment;
  public: 
     vehicleowner();
     void setvehicleowner();
     ~vehicleowner();
 };
