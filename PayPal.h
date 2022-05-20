class Paypal{
	private:
		char PaypalId[50];
		char Password[25];
		Payment *paymt[SIZE];
		
	public:
		Paypal();
		Paypal(char paypalId[]);
		void StorePaypalDetails();
		void setPaypalID(char paypalid[]);
		void setPassword(char pwd[]);	
};
