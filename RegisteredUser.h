//Registered User class
class Registered_user : public Unregistered_User{
	private:
		Administrator *admin;
		
	protected:
		char Username[10];
		char password[20];
		
	public:
		Registered_user();
		Registered_user(char username[],char pwd[]); 
		void login();
		void setUsername(char username[]);
		char getUsername();
		void setPassword(char pwd[]);
		char getPassword();			
};
