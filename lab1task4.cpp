#include<iostream>
#include<string>
using namespace std;
class bingo{
	string type;
	float distance;
	int person;
public:
	//default constructo
	bingo(){
		type="standar";
		distance=150;
		person=3;
		
	}
	//parametrized constructor
	bingo(string vec , float dis , int per){
		type = vec;
		distance=dis;
		person=per;
		
	}
	//all setters
	void settype(string t){
		if(t=="standard" || t=="premium" ||t=="suv")
		type=t;
		else
		type="notype";
		
	}
 	void setdistance(float d){
 		if(d>0)
 		distance=d;
 		else
 		distance=0;
 		
	 }
	void setperson(int p){
		if(p>0)
		person=p;
		else
		person=0;
		
	}
	//all getters 
	string gettype(){
		return type;
		
	}
	float getdistance(){
		return distance;
	}
	int getperson(){
		return person;
	}
	//final summary
	void display(){
		cout<<"You book "<<type<<" vechicle with distance "<<distance<<"km and total passenger(s) "<<person<<endl;
	}
	//fare calculation
	int fare(){
	int kmc,passc,total,additionalperson;
	if (type=="standard"){
		kmc=1.5*distance;
		if(person>1){//if person beyound first
			additionalperson=person-1;
			passc=additionalperson*1; // this will calculate additional person fare
			
		}
		total=5+kmc+passc;
	
	}
	else if( type=="premium"){
		kmc=2.5*distance;
		if(person>1){//if person beyound first
			additionalperson=person-1;
			passc=additionalperson*2;
		}
		total=10+kmc+passc;
	}
	else if(type=="suv"){
		kmc=3*distance;
		if(person>1){//if person beyound first
			additionalperson=person-1;
			passc=additionalperson*3;
		}
		total=15+kmc+passc;
	}
	else {
	
	cout<<"Undefined";
	return 0;
}
return total;
	}
	
}; 
int main(){
	string vehicle;
	float km;
	int passenger;
	//first getting all inputs
	cout<<"Select type of vehicle \n1.Standard \n2.Premium \n3.SUV  : ";
    cin>>vehicle;
    cout<<"Add distance in kilometers : ";
    cin>>km;
    cout<<"Add total persons : ";
    cin>>passenger;
    //creater object;
    bingo r(vehicle,km,passenger);
    //calling all setter
    r.settype(vehicle);
    r.setdistance(km);
    r.setperson(passenger);
    //calling all getter
    r.gettype();
    r.getperson();
    r.getdistance();
    
    //to display summary
    r.display();
    //to calculate final fare
    cout<<"You total fare : "<<r.fare()<<endl;
}