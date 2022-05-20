//Enrolment class
class Enrolment{
	private:
		Student *std;
		Course *cours;
		char EnrolmentDate[10];
	
	public:
		Enrolment();
		Enrolment(student *estd, course *ecourse, char edate);
		void DisplayEnrolmentDate(){
				std->DisplayStudentDetails(char stid[]);
				cours->DisplayCourseDetails(char cid[], char caname[]);
		}
		void setEnrolmentDate(char enroldate[]);
		char getEnrolmentDate();
};
	
