class Lecturer : public Registered_user{
	private:
		Subject *sub;
		
	protected: 
		char LecId[10];
			
	public:
		Lecturer();
		Lecturer(char lecid[]); 
		void DispalyLecturerDetails(char lecid[]);
		void UploadLecturematerials();
		void DownloadStudentExercises();
		void AddLecturerDetails();
		void RemoveLecturerDetails();
		void setLecId(char lecid[]);
		char getLecId();		
};
