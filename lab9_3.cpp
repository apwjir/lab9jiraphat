#include<iostream>
#include<string>
using namespace std;

int main(){
int age ,height ,bounty;
string x;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;
    if(height < 100){
        x = "Chopper";
    }
    else 
    if(height < 180){
        x = "Usopp";
    }
    else{
    cout << "Enter your bounty: ";
    cin >> bounty;
    
    if(bounty > 1100000000){
        x = "Zoro";
    }
    else{
        x = "Sanji";
    }
    }
    }
    else if(age <= 60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty > 500000000){
            x = "Jinbe";
        }
        else
            x = "Franky";
    }
    else
        x = "Brook";
cout << "Your character = " << x;
return 0;
}