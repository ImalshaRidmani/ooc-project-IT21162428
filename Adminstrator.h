class Administrator{
	private:
		char AdminId[10];
		char AdminName[50];
		registered_User *regUser[SIZE];
		
	public:
		Administrator();
		Administrator(char AId[],char AName[]);
		void SendUsernameAndPassword();
		void GivePermission(); 
		void RejectPermission();
		void setAdminId(char AId);
		char getAdminID();
		void setAdminName(char AName);
		char getAdminName();			
};
