#include <iostream>
using namespace std;

class collegeCoures{
public :
    string courseID;
    char grade;
    int credit;
    int gradePoint;
    float honorPoint;

    //sets course ID
    void set_CourseID(string courseID){
        this->courseID=courseID;
    }
    
    //sets grade
    void set_Grade(char grade){
        this->grade=grade;
    } 
    //sets credit
    void set_Credit(int credit){
        this->credit=credit;
    }
    //calculate grade points
    int calculateGradePoints(){
        if(grade=='a'||grade=='A'){
            gradePoint=10;
            return gradePoint;
        } else if (grade=='b'||grade=='B'){
            gradePoint=9;
            return gradePoint;
        } else if (grade=='c'||grade=='C'){
            gradePoint=8;
            return gradePoint;
        } else if (grade=='d'||grade=='d'){
            gradePoint=7;
            return gradePoint;
        } else if (grade=='e'||grade=='E'){
            gradePoint=6;
            return gradePoint;
        } else if (grade=='f'||grade=='F'){
            gradePoint=5;
            return gradePoint;
        } 
        return 0;
    }
    //calculate honor point
    float calculateHonorPoint(){
        honorPoint=gradePoint*credit;
        return honorPoint;
    }

    //display
    void display(){
        cout<<"coures ID : "<<courseID<<endl;
        cout<<"Grade : "<<grade<<endl;
        cout<<"credit : "<<credit<<endl;
        cout<<"Grade Point : "<<gradePoint<<endl;
        cout<<"Honor Point : "<<honorPoint<<endl;
        return;
    }
};

int main(){
    collegeCoures c1;
    c1.set_CourseID("CSE-402");
    c1.set_Credit(4);
    c1.set_Grade('A');
    c1.calculateGradePoints();
    c1.calculateHonorPoint();
    c1.display();

    collegeCoures c2;
    c2.set_CourseID("BCS-402");
    c2.set_Credit(3);
    c2.set_Grade('B');
    c2.calculateGradePoints();
    c2.calculateHonorPoint();
    c2.display();
}