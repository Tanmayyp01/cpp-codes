#include<iostream>
using namespace std;

int main(){

    int year;  // Varaiable Declared

    cout << "Enter a year : " << endl;   // Taking Input from the user
    cin >> year ;

    // Checking leap year by IF-Else :

    if(year % 4 == 0){
        
        if( year % 100 !=0 ){
            
            if(year % 400 ==0){

            }
    }  
       cout << " It's a Leap Year..." << endl;
    } 
    else{
        cout << "It's Not a Leap Year..." << endl;
    }
      
    cout<< " Thank U...." << endl;

    return 0;
}