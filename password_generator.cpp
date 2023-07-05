#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;



string getpassword(intlength){
	string password="";
	string 	charc="aquickbrownfoxjumpsoverthelazydogAQUICKBROWMFOXJUMPSOVERALAZYBROEN	DOG0123456789_-=+{}[]:"<>?;',./!@#$%^&*()";
	int charSize=charc.size();
	srand (time(0));
	for(i=0;i<length;i++){
		randomIndex= rand()%charsize;
		password=password+charc[randomindex];
		}
		return password;
	


int main(){
	int length;
	cout<<"enter the length of password"<<endl;
	cin>>length;
	string password= getpassword(length);
	cout<<"generated password:"<<password;

	return 0;
}