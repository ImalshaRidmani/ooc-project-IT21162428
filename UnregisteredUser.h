class Unregistered_User{
	private:
		Course *cours;
		
	protected:
		char FirstName[50];
		char LastName[50];
		char Address[100];
	    char DateOfBirth[10];
		char NIC[10];
		char Email[40];
		
	public:
		Unregistered_User();
		Unregistered_User(char f_name[],char l_name[],char address[],char DOB,char nic[],char email[]);	
		void Register();
		void receiveUsernamePassword();
		void AccessCourseDetails();
		void setFirstName(char f_name[]);
		char getFirstName();
		void setLastName(char l_name[]);
		char getLastName();
		void setAddress(char address[]);
		char getAdress();
		void setDateOfBirth(char DOB[]);
		char getDateOfBirth();
		void setNIC(char nic[]);
		char getNIC();
		void setEmail(char email[]);
		char geteEmail(); 	
};
