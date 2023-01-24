//**********C++ Program For Library Management System***********//
#include<iostream>
#include<fstream>
#include<string>


using namespace std;

struct Book {
	string title;
	string ISSN;
	string publisher;
	float cost;
	bool hasIssued;
	string StudentName;
};
void addingbook(Book books[],int & n)
{	
	string title,ISSN,publisher;
	float cost;
	cout<<"                  "<<endl;
	cout<<"Enter title of book:"<<endl;
	getline(cin,title);
	cout<<"Enter name of publisher:"<<endl;
	getline(cin,publisher);
	cout<<"Enter ISSN Number:"<<endl;
	getline(cin,ISSN);
	cout<<"Enter cost of book:"<<endl;
	cin>>cost;
	cin.ignore();
	Book newbook = {title,ISSN,publisher,cost,false,""};
	books[n]=newbook;
	n++;
}
void viewHistory(Book books[],int n)
{
	for(int i=0;i<n;i++){
		cout<<"                      "<<endl;
		cout<<"Title Name :"<<books[i].title<<endl;
		cout<<"ISSN Number:"<<books[i].ISSN<<endl;
		cout<<"Name of publisher:"<<books[i].publisher<<endl;
		cout<<"Cost of book:"<<books[i].cost<<endl;
	}
}
void issuingBook(Book books[],int n){
	string name;
	string title;
	cout<<"Enter name of student:"<<endl;
	getline(cin,name);
	cout<<"Enter title of book to be issued:"<<endl;
	getline(cin,title);
	for(int i=0;i<n;i++)
	{ if
	(books[i].title == title && !books[i] . hasIssued)
	{ 
	books[i].hasIssued = true;
	books[i].StudentName = name;
	cout<<"The book is issued successfully!"<<endl;
	 }else{
	 	cout<<"The book is not available or already issued"<<endl;
	 } 
	 
	}
	
}
int main(){
	Book books[55];
	int n=0,c;
	int choice;
	
	cout<<"- - - - LIBRARY MANAGEMENT SYSTEM - - - -"<<endl;
	while(true){
		cout<<"                             "<<endl;
		cout<<"> > > > > Front End > > > > >"<<endl;
		cout<<"============================="<<endl;
		cout<<"                             "<<endl;
		cout<<"For Adding book, press 1"<<endl;
		cout<<"For view record, press 2"<<endl;
		cout<<"For issuing book, press 3"<<endl;
		do{
		cout<<"For Exit, press 4"<<endl;
		cin>>choice;
		cin.ignore();
		switch(choice){
			case 1:
				addingbook(books,n);
				break;
			case 2:
				viewHistory(books,n);
				break;
			case 3:
				issuingBook(books,n);
				break;
			case 4:
				cout<<"Exited...";
				break;
			default:
			cout<<"Entered wrong value.try again\n";
			break;
		}
		cout<<"                 "<<endl;
		cout<<"Press 1 if want to continue or 2 to terminate"<<endl;
           cin>>c;
}while(c!=1);
		          
       }
          
	return 0;
}
