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
  
  
  Registered_user *RUser1;
	RUser1 = new Registered_User();
	RUser1->Unregistered_User("Evan","Rathnsingha","05/23, Nadun Uyana, Galle","1995/05/16","199568471258","Evanrath.95@gmail.com");
	RUser1->getFirstName();
	
	
	Payment *paymnt1;
	paymnt1 = new Payment("PAY4545454","Credit card",100000);
	paymnt1->getPaymentId();
	paymnt1->setAmount(100000);

	
	delete RUser1;
	delete paymnt1;
  
  
  return 0;
}
