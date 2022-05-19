#include<iostream>
#include<string>


class payment{
  protected:
    char payment_id[10];
    int payment_date;
    float payment_amount;
    char payment_details[100];
    char paymant_type;

  public:
    payment();
    void setdata(char pId[10],int pDate,float pAmount,char pDetails[100],char pType);
    ~payment();
};
#endif