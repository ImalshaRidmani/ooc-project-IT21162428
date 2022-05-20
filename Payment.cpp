#include"Student.h"
#include"CreditCard.h"
#include"DebitCard.h"

Payment::Payment(){
		strcpy((paymentID),"");
		strcpy((PaymentMethod),"");		
		Amount=0;
		
	}
	
	Payment::Payment(char payId[], char Paymethod[], int PAmount){
		paymentID = payId; 
		PaymentMethod = Paymethod; 
		Amount = PAmount;
	}
	
	void Payment::DisplayPaymentDetails(){
		
	}

	void Payment::StorePaymentdetails(){
		
	}
	
	void Payment::ValidatePaymentDetails(){
		
	}
	
	void Payment::setPaymentId(char PayId[]){
		
	}
	
	char Payment::getPaymentId(){
		return *paymentID; 
	}
	
	void Payment::setPaymentMethod(char Paymethod[]){
		
	}
	
	char Payment::getPaymentMethod(){
		return *PaymentMethod;
	}
	
	void Payment::setAmount(int PAmount){
		
	}
