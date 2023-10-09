#include<iostream>
using namespace std;

int main(){
int n,i;

cout<<"Enter the n number to get the maths table :"<<endl;
cin>>n;

for(i=1;i<=10;i++){
    cout<< n << " * " << i<< " = " << n * i <<endl;
}

cout<< " Thank You... Use Again"<<endl;

return 0;
}