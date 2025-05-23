#include<iostream>
using namespace std;
int main()
{
    cout<<"Student CGPA Calculator"<<endl;
    
    cout<<"Total Courses: 5";
    cout<<endl;

    int maths_credit = 5;

    int physics_credit = 3;

    int electrical_credit = 4;

    int chemistry_credit = 3;

    int java_credit = 3;

    double tc = maths_credit+physics_credit+electrical_credit+chemistry_credit+java_credit;
    cout<<"Total Credits: "<<tc;

    int mgp = 9;
    int pgp = 7;
    int egp = 9;
    int cgp = 8;
    int jgp = 7;
    
    int mtgp = maths_credit*mgp;
    int ptgp = physics_credit*pgp;
    int etgp = electrical_credit*egp;
    int ctgp = chemistry_credit*cgp;
    int jtgp = java_credit*jgp;

    double tgp = mtgp+ptgp+etgp+ctgp+jtgp;
    cout<<endl;
    cout<<"Total Grade Points: "<<tgp;

    double cgpa = (tgp/tc);
    cout<<endl;

    cout<<"Semester GPA: "<<cgpa;
    cout<<endl;

    cout<<"Cumulative Grade Points Average(CGPA): "<<cgpa;
}