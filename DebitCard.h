class Debit_Card{
	private:
		char CardName[50];
		int CardNumber;
		char CardType[30];
		char ExpiryDate[5];
		int SecurityCode;
		Payment *paymt[SIZE];
		
	public:
		Debit_Card();
		Debit_Card(char Cardname[],int CardNum,char Cardtype[],char ExpDate[],int cvv);
		void DisplayDebit_CardDetails();
		void StoreDebit_CardDetails();		
		void setCardName(char Cardname[]);
		void setCardNumber(int CardNum);
		void setCardType(char Cardtype[]);
		void setExpiyDate(char ExpDate[]);
		void setsecurityCode(int cvv);	
};
