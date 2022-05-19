class VehicleRentalSystem{
  private:
    char userType;
    char userID[20];
    char password[40];

  public:
    VehicleRentalSystem();
    void login(char usrtyp[],char usrId[],char pswrd[]);
    void register();
    void logout();
    ~VehicleRentalSystem();
};
#endif