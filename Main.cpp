#include<iostream>
#include "UnregisteredUser.h"
#include "PayPal.h"

using namespace std;

int main(){
  Unregistered_User *UnUser1;	
  UnUser1 = new Unregistered_User();
  UnUser1->setFirstName("Ann");
  UnUser1->setLastName("Fernando");
  UnUser1->setAddress("20C, Temple Rd, Malabe.");
  Unuser1->setDateOfBirth("1996/01/12");
  	
  	
  Paypal *paypal1;
  paypal1 = new Paypal();
  paypal1->setPaypalID("UserABC@gmail.com");
  	
  	
  delete UnUser1;
  delete Paypal1;
  
  
  
  return 0;
}
