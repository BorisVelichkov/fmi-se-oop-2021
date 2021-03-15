#include <iostream>
#include "Login.cpp"

int main()
{  
    // Default Constructor
    Login defaultLogin;
    defaultLogin.print();

    // Default Constructor
    Login defaultLogin2 = Login();
    defaultLogin2.print();
    
    // Constructor with parameters
    Login loginWithParams = Login("Bobi");
    loginWithParams.print();

    // Constructor with parameters
    Login loginWithParams2 = Login("Bobi", "bobipass");
    loginWithParams2.print();

    // Copy Constructor
    Login copyLogin = Login(loginWithParams);
    copyLogin.print();
    
    return 0;
}