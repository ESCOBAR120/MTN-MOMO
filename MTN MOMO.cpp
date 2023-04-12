#include <iostream>
using namespace std;


int main(){
        string option, old_pin,new_pin,receiver_new,amount;
        bool pin_out;
int pin_count,  
pin_limit;
pin_limit=2;
pin_count=0;
pin_out=false;

while(true)	{
	cout<<"welcome to MTN mobile service \n" ;
	cout<<"\n";
	cout<<"1, Authenticaton \n";
	cout<<"2, reset pin \n";
	cout<<"3, check balance \n";
	cout<<"4, send money \n";
	cout<<"5, exit \n";
	cout<<"\n";
	cout<<"select option by enter 1 - 5: \n";
	cin>>option;
	if (option=="1"){
		while(old_pin != "0000" and not(pin_out)){
			if (pin_count<=pin_limit){
				cout<<"enter your pin to accept withdrawal of 500 cedis: ";
				cin>>old_pin;
				pin_count+=1;}
				
				else{pin_out=true;}
				}
				if (pin_out==true){
					cout<<"your acccount is blocked for too may attempts \n";
					break;}
				else{
					cout<<"you have successfully withdrawn GHS 500 from yout account and your balanceis 495";
					cout<<"with a reducted fee of GHS 5 \n";
					cout<<"\n";
				}
				
				
				
	   	   }
	   	   else if (option=="2"){
	   	   	while(old_pin != "0000" and not(pin_out)){
	   	   		if (pin_count<=pin_limit){
	   	   			cout<<"enter old pin: ";
	   	   			cin>>old_pin;
	   	   			pin_count+=1;}
	   	   			
	   	   			else{pin_out=true;}
						  }
						  
						  
			if (pin_out==true){
				cout<<"your account is blocked for too many incorrect attempts";
				break;}
			else{
			//new pin can be any value except the old pin !!
			cout<<"enter new pin: ";
			cin>>new_pin;
			if (new_pin==old_pin){
				cout<<"pin already exist \n";
				cout<<"\n";
			}
			else{
			cout<<"your pin has been reset successfuly \n"
			cout<<"\n";
		}}}
	else if (option=="3"){
		while(old_pin ! "0000" and not(pin_out)){
			
			if (pin_count<=pin_limit){
				cout<<"enter pin: ";
				cin>>old_pin;
				pin_count+=1;}
				
				else{pin_out=true;}
				}
			if (pin_out==true){
				cout<<"your account is blocked too many attempts \n";
				break;
				
				
			}
			else{
				cout<<"your balance is GHS"<<total_amount<<endl;
				cout<<"\n";
				
				
		}
		
		
	}
	else if (option=="4"){
		cout<<"enter receiver number: ";
		cin>>receiver_num;
	//consider fee to be charged before entering amount to be sent !!
	cout<<"enter amount to be sent: ";
	cin>>amount;
	fee=amount*1/100;
	if (amount+fee>total_amount){
		cout<<"you do not have sufficient funds to perform this transaction /n";
		cout<<"\n";
		
	}
	else{
		
		while(old_pin !="0000"and not(pin_out)){
			if (pin_cout<=pin_limit){
				cout<<"enter pin: ";
				cin>>old_pin;
				pin_count+=1;}
				
				else{pin_out=true;}
				}
		if (pin_out==true){
			cout<<"your account is blocked for too many attempts";
			break;
		}
		else{
			   fee=amount*1/100;
			   cout<<"you have successfuly sent an amount of GHS "<<amount<<" to "<<receiver_num;
			   cout<<", your balance is GHS "<<total_amount-amount-fee<<"with fee of GHS "<<fee<<endl;
			   cout<<"\n";
			   
		}}
	}
	else if(option=="5"){
		   cout<<"Thank you for your service with us \n ";
		   break;
	}
	else{
		cout<<"invalid option try again";
		cout<<"\n";
		
		
	}
    }
    


	return 0;
}
