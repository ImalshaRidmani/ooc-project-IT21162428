#include"Payment.h"

Credit_Card::Credit_Card(){
		strcpy((CardName),"");
		CardNumber = 0;
		strcpy((CardType),"");
		strcpy((ExpiryDate),"");
		SecurityCode = 0;
					
	}

	Credit_Card::Credit_Card(char Cardname[],int CardNum,char Cardtype[],char ExpDate[],int cvv){
		CardName = Cardname;
		CardNumber = CardNum;
		CardType = Cardtype;
		ExpiryDate = ExpDate ;
		SecurityCode = cvv;
	}
	
void Credit_Card::DisplayCredit_CardDetails(){
		
	}
	
	void Credit_Card::StoreCredit_CardDetails(){
	 	
	}
	
	void Credit_Card::setCardName(char CardName[]){
		
	}
	
	void Credit_Card::setCardNumber(int CardNum){
		
	}
	
	void Credit_Card::setCardType(char Cardtype[]){
		
	}
	
	void Credit_Card::setExpiyDate(char ExpDate[]){
		
	}
	
	void Credit_Card::setsecurityCode(int cvv){
		
	}
