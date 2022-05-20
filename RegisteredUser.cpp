#include"Administrator.h"

Registered_user::Registered_user(){
		strcpy((Username),"");
		strcpy((password),"");
	}
	
	Registered_user::Registered_user(char username[],char pwd[]){
		Username = username;
		password = pwd;
	}
	
	void Registered_user::login(){
		
	}
	
	void Registered_user::setUsername(char username[]){
		
	}
	
	char Registered_user::getUsername(){
		return *Username;
	}
	
	void Registered_user::setPassword(char pwd[]){
		
	}
		
	char Registered_user::getPassword(){
		return *password;
	}
