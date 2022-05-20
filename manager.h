#include <iostream>
#include <string>

class manager{
      private:
        char manager_id[10];
        string username;
        string name;
        char address[100];
        string experience;
        char emailAddress[100];
        int contactNumber;
        
      public: 
        manager();
        void displayDetails();
        void login();
        void manage();
        ~manager()
        
        
}
