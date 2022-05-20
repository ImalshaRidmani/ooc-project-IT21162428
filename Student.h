//Student class
class Student : public  Registered_user{
	private:
		Subject *sub[SIZE];
		Payment *pay[SIZE];
		
	protected:	
		char StId[10];
	
	public:
		Student();
		Student(char stid[]);
		void DisplayStudentDetails(char stid[]);
		void AddStudentDetails();
		void RemoveStudentDetails();
		void DownloadLecturematerials();
		void UploadExercises();
		void SubmitFeedback();
		void SubmitQuestionnaires();
		void setStId(char stid[]);
		char getStId();	
};
