#include <iostream>
using namespace std;
struct student {
    string name ;
    double gpa ;
    int id ;
};
int main(){
    student student1 , student2 ;
    student1.name = " Alshawadfi "  ;
    student1.gpa = 3.01 ;
    student1.id = 8251280 ;

    student2.name = "Ebriham  Ebriham" ;
    student2.gpa = 2.5 ;
    student2.id = 8251270;

int id ;
    cout<<"enter your id ="<<endl ;
    cin>> id;
    if(id==student1.id) {
        cout<<student1.name <<endl ;
        cout<<student1.gpa<<endl ;

    }
    else if(id==student2.id){
        cout<<student2.name <<endl ;
        cout<<student2.gpa<<endl ;

    }
    else{
        cout<<"your id is not valid";
    }

}


