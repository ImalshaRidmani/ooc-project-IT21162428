#include "Payment.h"

Paypal::Paypal(){
	strcpy((PaypalId),"");		
	strcpy((Password),"");
	}
	
	Paypal::Paypal(char paypalid,char pswd){
		PaypalId= paypalid;
		Password= pswd;
	}
	void Paypal::StorePaypalDetails(){
		
	}
	void Paypal::setPaypalID(char paypalid[]){
	 	
	 }
	 
	void Paypal::setPassword(char pwd[]){
		
	} 
