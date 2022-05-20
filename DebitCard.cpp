#include "Payment.h"

Debit_Card::Debit_Card(){
		strcpy((CardName),"");
		CardNumber = 0;
		strcpy((CardType),"");
		strcpy((ExpiryDate),"");
		SecurityCode = 0;
	}
	
	Debit_Card::Debit_Card(char Cardname[],int CardNum,char Cardtype[],char ExpDate[],int cvv){
		CardName = Cardname;
		CardNumber = CardNum;
		CardType = Cardtype;
		ExpiryDate = ExpDate ;
		SecurityCode = cvv;
	}
	
	void Debit_Card::DisplayDebit_CardDetails(){
		
	}

	void Debit_Card::StoreDebit_CardDetails(){
	}
	
	
	void Debit_Card::setCardName(char CardName[]){
		
	}
	
	void Debit_Card::setCardNumber(int CardNum){
		
	}
	
	void Debit_Card::setCardType(char Cardtype[]){
		
	}
	
	void Debit_Card::setExpiyDate(char ExpDate[]){
		
	}
	
	void Debit_Card::setsecurityCode(int cvv){
		
	}
