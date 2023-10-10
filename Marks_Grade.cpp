#include<iostream>
using namespace std;

int main(){

    int marks;  // Varaiable Declaration

    cout<<"Please Enter Your Marks: "<< endl;  
    cin >> marks;  // Taking Input From The User.

    //Using If-Else :

    if(marks<35 && marks>0){
        cout << "D Grade - You are Failed" <<endl;
        }
        
        else if(marks>=35 && marks<60){
        cout << "C Grade -  Passed" << endl;
        }

         else if(marks>=60 && marks<80){
        cout << "B Grade -  Passed" << endl;
        }

         else if(marks>=80 && marks<100){
        cout << "A Grade -  Passed" << endl;
        }

         else if(marks>100 && marks<0){
        cout << "Please Enter Correct Marks" << endl; // Optional Statement.
        }

        else{
            cout<<" Enter the correct marks "<<endl;
        }

        cout << " Thank You..."<<endl;  // End Output

    return 0;
}