#include<iostream>
#include<string>
#include<Payment.h>

class cashPayment:public Payment{
    Private:
      int amount;
      char details[100];

    public:
      void valid();
};
#endif