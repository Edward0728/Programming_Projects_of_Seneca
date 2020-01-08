/*requirements:
1.inheritance
2.Operator Functions(>=2)
3.Static member functions(>=1)
4.Constructor functions*/


#include<iostream>
#include<conio.h>
#include<iomanip>
#include<ctime>
#include<string>
#include<stdlib.h>


using namespace std;
class Service{

public:
	char description[100];
	int month,last,next;
	Service()
	{
		//next=last+month*100;
	}
	int compute (int last)
	{
		return last+month*100;
	}
	friend istream& operator<<(istream&cin, Service&s)
		//Service()
	{   
		cout<<"enter service description=>"<<endl;
		fflush(stdin);
		cin.getline(s.description, 100);//replace cin >> input with getline(cin, input)
		fflush(stdin);
		cout<<endl;
		cout<<"enter number of months between two services=>"<<endl;
		cin>>s.month;
		cout<<endl;
		cout<<"enter date of last service(eg.20171201)=>"<<endl;
		cin>>s.last;
		s.next=s.compute(s.last);
		cout<<"Next service date=>"<<s.next;
		cout<<endl;
		return cin;
	}
	~Service()
	{delete []description;}
};

class Car{
public:
	char model[100], plate[100];
	int year;
	Car(){}
	friend istream& operator<<(istream&cin, Car&c)
	{   
		cout<<"enter model=>"<<endl;
		fflush(stdin);
		cin.getline(c.model,100);//cin>>c.model;cin.getline(stringname,stringsize);
		fflush(stdin);
		cout<<endl;
		cout<<"enter license plate number=>"<<endl;
		fflush(stdin);
		cin.getline(c.plate,100);
		fflush(stdin);
		cout<<endl;
		cout<<"enter made year=>"<<endl;
		cin>>c.year;
		cout<<endl;
		return cin;	}
	~Car()
	{delete []model;
	delete []plate;
	}
};

class AutoBody: public Service, public Car
{
public:
	AutoBody(){}
	static void systemtime (){
		time_t now = time(0);
		char str[26];

		// convert now to string form
		char* dt = ctime(&now);
		cout << "The current system date and time is: " << dt << endl;

		// convert now to tm struct for UTC
		// tm *gmtm = gmtime(&now);
		//dt = asctime(gmtm);
		//cout << "The UTC date and time is:"<< dt << endl;
	}

	//void display()
	//{cout<<"service description"<<description;
	//}
};

int main (){
	Car arrayC[100];
	Service arrayS[100];
	AutoBody arrayA[100];
	int i=0,choice,specific;
	do{
        fflush(stdin);
		cout<<endl;
		cout<<endl;
		cout<<"***Welcome to AutoBody***"<<endl;
		cout<<"1.Get and process data of a car"<<endl;
		//cout<<"2.Process data of a car"<<endl;
		//cout<<"3.Display data of a car"<<endl;
		cout<<"2.Display current system date and time"<<endl;
		cout<<"3.Search and display car data on a specific date(eg.20171201)"<<endl;
		cout<<"4.Goodbye."<<endl;
		cout<<endl;
		cout<<"Please enter your choice=>";
		cin>>choice;
		cout<<endl;

		switch(choice){
		case 1:
			cin<<arrayC[i];
			//cout<<"Process data of a car"<<endl;
			cin<<arrayS[i];
			i++;
			break;
			//case 2:cin<<arrayS[i];
			//break;
			//case 3:
			//break;
		case 2: 
			AutoBody::systemtime ();
			break;
		case 3: 
			cout<<"please enter the specific date(eg.20171201)=>";
			cin>>specific;
			for(int j=0;j<i+1; j++)
			{
				if (arrayS[j].next==specific)
				{cout<<"car model:"<<arrayC[j].model<<endl;
				cout<<"car plate:"<<arrayC[j].plate<<endl;
				cout<<"made year:"<<arrayC[j].year<<endl;
				cout<<"service description:"<<arrayS[j].description<<endl;
				cout<<"last service date:"<<arrayS[j].last<<endl;
				arrayS[j].compute(arrayS[j].last);
				cout<<"next service date:"<<arrayS[j].next<<endl;
				}
				cout<<endl;
			}
			system("pause");
			break;

		case 4:exit(0);//	EXIT_SUCCESS;
			//delete[]arrayA;
			//delete[]arrayS;
			//delete[]arrayC;
			
		}
	}while (choice!=4);
      
	

}