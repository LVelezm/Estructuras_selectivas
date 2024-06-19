#include<iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
    int year;
    cout<<"Ingrese un año:";
    cin>>year;
    if(year%4==0){
    	if(year%100==0){
    		if(year%400==0){
    			cout<<year<<" es un año bisiesto."<<endl;
    		}else{
    			cout<<year<<" no es un año bisiesto."<<endl;
             }
    	}else{
    		cout<<year<<" es un año bisiesto."<<endl;
		}
	}else{
    	cout<<year<<" no es un año bisiesto."<<endl;
    }
    return 0;
}

