#include<iostream>
#include<string>
#include<Payment.h>


class CardPayment:public Payment{
    Private:
      int cardNumber;
      int CVV;

    public:
      void valid();
};

#endif