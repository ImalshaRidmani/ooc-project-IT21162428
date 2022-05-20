class Credit_Card{
	private:
		char CardName[50];
		int CardNumber;
		char CardType[30];
		char ExpiryDate[5];
		int SecurityCode;
		Payment *paymt[SIZE];

	public:
		Credit_Card();
		Credit_Card(char Cardname[],int CardNum,char Cardtype[],char ExpDate[],int cvv);
		void DisplayCredit_CardDetails();
		void StoreCredit_CardDetails();		
		void setCardName(char Cardname[]);
		void setCardNumber(int CardNum);
		void setCardType(char Cardtype[]);
		void setExpiyDate(char ExpDate[]);
		void setsecurityCode(int cvv);	
};
