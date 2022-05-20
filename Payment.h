//Payment class
class Payment {
	private:
		Credit_Card *Cc_card[SIZE];
		Debit_Car *Dcard[SIZE];
		Paypal *paypal[SIZE];
		Student *std;
		
	protected:
		char paymentID[10];
		char PaymentMethod[20];
		int Amount;
		 
	public:
		Payment();
		Payment(char PayId[],char Paymethod[], int PAmount); 
		void DisplayPaymentDetails();
		void StorePaymentdetails();
		void ValidatePaymentDetails();
		void setPaymentId(char PayId[]);
		char getPaymentId();
		void setPaymentMethod(char Paymethod[]);
		char getPaymentMethod();
		void setAmount(int PAmount);
		int getAmount();	
};
