#include<iostream>
#include<fstream>
#include<cstring>
#include<bits/stdc++.h> 
#include<conio.h>
#include<stdlib.h>

using namespace std;
char fname[20]="file2.txt";
char file_name[20]="buydetail.txt";
char bd[20]="blooddetail.txt";
struct record
{
 	char Name[15],Roll_id[15],Phone_no[15],Email[25],Blood_group[10];
 };

class admin
{
             public: void pack(record r);
	            record unpack(char a[]);
	            void writedata();
	            void display();
	            void search();
	            void modify();
	            void addblooddetail();
	            void viewblooddetail(); 
	            void modifyblooddetail();
	            void buyblood();
	            void viewbilldetail();
};

void admin::buyblood()
{
	ifstream ifile;
	char s[100],fn[20];
	cout<<"Enter the file name to see the available blood quantity/bottle(blooddetail.txt): ";
	cin>>fn;
	ifile.open(fn);
	if(!ifile)
	{
		cout<<"Error in opening file....!!";
		getch();
		exit(0);
 	} 
	 while(ifile.eof()==0)
 	{
 		ifile>>s;
 		cout<<s<<"\t\t";
 	}
 	cout<<"\n";
 	ifile.close();
 	getch();  
string  scode,cname,cp,type,td;
char t,z;
int ta,tp,num,u;

ofstream myfile;
myfile.open("file_name.txt",ios::out|ios::app);    
    cout<<"\n PRICE OF BLOOD/BOTTLE IS: ";
    cout<<"\n[(A+,A-,B+,B-,AB+,AB-)=2*(current government price)*number of bottle]";
    cout<<"\n[(O+,O-)=3*(current government price)*number of bottle]";
    cout<<"\n current government price of blood/bottle is: 200\n\n";
    cout<<"\n..................Billing process(NO RETURN/NO EXCHANGE)....................";
	cout<<"\nENTER PURCHASE DATE: \t";
		 cin>>td;
		 myfile<<td<<" |";
	 cout<<"\nENTER THE BLOOD GROUP :\t";
		 cin>>scode;
		 myfile<<scode<<"| ";
		 cout<<"\nENTER CUSTOMER NAME: \t";
		 cin>>cname;
		 myfile<<cname<<" |";
		 cout<<"\nENTER PHONE: \t";
		 cin>>cp;
		 myfile<<cp<<" |";
		 cout<<"\nENTER EACH BLOOD/BOLLTE AMOUNT: \t";
		 cin>>tp;
		 myfile<<tp<<" |";
		 
			 cout<<"\nENTER BLOOD GROUP CODE(A=A+/a=A-/B=B+/b=B-/O=O+/o=O-/p=AB+/n=AB-): \t";
		 cin>>t;
		 switch(t)
		 {
		 	case 'A':cout<<"\n....YOU HAVE SELECTED THE A+ BLOOD GROUP....\n";
		 			type="A+";
		 			 myfile<<type<<"| ";
		 			cout<<"\nENTER NUMBER OF BOTTLE:\t";
		 			cin>>num;
		 			myfile<<num<<"  |";
		 			ta=num*2*tp;
		 			myfile<<ta<<"\n";
		 			break;
		 			
		 	case 'a':cout<<"\n....YOU HAVE SELECTED THE A- BLOOD GROUP....\n";
		 			type="A-";
		 			 myfile<<type<<"| ";
		 			cout<<"\nENTER NUMBER OF BOTTLE:\t";
		 			cin>>num;
		 			myfile<<num<<" |";
		 			ta=num*2*tp;
		 			 myfile<<ta<<"\n";
		 			break;
		 	case 'B':cout<<"\n....YOU HAVE SELECTED THE B+ BLOOD GROUP....\n";
		 			type="B+";
		 			 myfile<<type<<"| ";
		 			cout<<"\nENTER NUMBER OF BOTTLE:\t";
		 			cin>>num;
		 			myfile<<num<<" |";
		 			ta=num*2*tp;
		 			 myfile<<ta<<"\n";
		 			break;
		 	case 'b':cout<<"\n....YOU HAVE SELECTED THE B- BLOOD GROUP....\n";
		 			type="B-";
		 			 myfile<<type<<"| ";
		 			cout<<"\nENTER NUMBER OF BOTTLE:\t";
		 			cin>>num;
		 			myfile<<num<<" |";
		 			ta=num*2*tp;
		 			myfile<<ta<<"\n";
		 			break;
		 			
		 	case 'O':cout<<"\n....YOU HAVE SELECTED THE O+ BLOOD GROUP....\n";
		 			type="O+";
		 			 myfile<<type<<"| ";
		 			cout<<"\nENTER NUMBER OF BOTTLE:\t";
		 			cin>>num;
		 			myfile<<num<<" |";
		 			ta=num*3*tp;
		 			 myfile<<ta<<"\n";
		 			break;
		 	case 'o':cout<<"\n....YOU HAVE SELECTED THE O- BLOOD GROUP....\n";
		 			type="O-";
		 			 myfile<<type<<"| ";
		 			cout<<"\nENTER NUMBER OF BOTTLE:\t";
		 			cin>>num;
		 			myfile<<num<<" |";
		 			ta=num*3*tp;
		 			 myfile<<ta<<"\n";
		 			break;
		 	case 'p':cout<<"\n....YOU HAVE SELECTED THE AB+ BLOOD GROUP....\n";
		 			type="AB+";
		 			 myfile<<type<<"| ";
		 			cout<<"\nENTER NUMBER OF BOTTLE:\t";
		 			cin>>num;
		 			myfile<<num<<" |";
		 			ta=num*2*tp;
		 			myfile<<ta<<"\n";
		 			break;
		 			
		 	case 'n':cout<<"\n....YOU HAVE SELECTED THE AB- BLOOD GROUP....\n";
		 			type="AB-";
		 			 myfile<<type<<"| ";
		 			cout<<"\nENTER NUMBER OF BOTTLE:\t";
		 			cin>>num;
		 			myfile<<num<<" |";
		 			ta=num*2*tp;
		 			 myfile<<ta<<"\n";
		 			break;
		 
		 	default: cout<<"\nSORRY WRONG OPTION\n";
		 }
		 
		  
         cout<<"PRINT THE BILL? (Y/N) \n";
					cin>>z;   
      if(z=='y'){
    cout<<"\n\t\t\t ____________________________________________________________";
	cout<<"\n\t\t\t||                     BILLING DETAILS ARE                    |";
	cout<<"\n\t\t\t------------------------------------------------------------\t";
	cout<<"\n\t\t\t||BILL DATE:\t"<<td;
	cout<<"\n\t\t\t||BLOOD GROUP NAME:\t"<<scode;
	cout<<"\n\t\t\t||CUSTOMER NAME:\t"<<cname;
	cout<<"\n\t\t\t||CUSTOMER PHONE NUMBER:\t"<<cp;
	cout<<"\n\t\t\t||EACH BOTTTLE PRICE:\t"<<tp;
	cout<<"\n\t\t\t||BLOOD GROUP CODE:\t"<<type;
	cout<<"\n\t\t\t||NUMBER OF BOTTLE BOUGHT:\t"<<num;
	cout<<"\n\t\t\t||TOTAL AMOUNT TO BE PAYED:\t"<<ta;
	cout<<"\n\t\t\t _______________________________________________________________\n\n";	
}
	myfile.close();     	
}

void admin::viewbilldetail()
{

ifstream ifile;
char s[100],fn[20];
cout<<"Enter the file name to see the bill detail:(file_name.txt): ";
cin>>fn;
ifile.open(fn);
if(!ifile)
{
	cout<<"Error in opening file....!!";
	getch();
	exit(0);
 } 

 
 while(ifile.eof()==0)
 {
 	ifile>>s;
 	cout<<s<<"\t";
 }
 cout<<"\n";
 ifile.close();
 getch();
	
} 

	
	

void admin::addblooddetail() 
{   
   ofstream myfile;
   myfile.open("blooddetail.txt");
  
    int A,AA,B,BB,O,OO,AB,AAb,c;
    char z,u;
	cout<<"\nENTER No. of A+ blood per bottal: ";
    cin>>A;
    cout<<"\nENTER No. of A- blood per bottal: ";
    cin>>AA;
    cout<<"\nENTER No. of B+ blood per bottal: ";
    cin>>B;
    cout<<"\nENTER No. of B- blood per bottal: ";
    cin>>BB;
    cout<<"\nENTER No. of O+ blood per bottal: ";
    cin>>O;
    cout<<"\nENTER No. of O- blood per bottal: ";
    cin>>OO;
    cout<<"\nENTER No. of AB+ blood per bottal: ";
    cin>>AB;
    cout<<"\nENTER No. of AB- blood per bottal: ";
    cin>>AAb;
    cout<<"Again want to enter(y/n) ";
    cin>>z;
    if(z=='y')
    { 
	int a,aa,b,bb,o,oo,ab,aab;
    cout<<"\nENTER No. of A+ blood per bottal: ";
    cin>>a;
    a=a+A;
    myfile<<"A+=";
    myfile<<a<<endl;
    cout<<"\nENTER No. of A- blood per bottal: ";
    cin>>aa;
    aa=aa+AA;
     myfile<<"A-=";
    myfile<<aa<<endl;
    cout<<"\nENTER No. of B+ blood per bottal: ";
    cin>>b;
    b=b+B;
     myfile<<"B+=";
    myfile<<b<<endl;
    cout<<"\nENTER No. of B- blood per bottal: ";
    cin>>bb;
    bb=bb+BB;
     myfile<<"B-=";
    myfile<<bb<<endl;
    cout<<"\nENTER No. of O+ blood per bottal: ";
    cin>>o;
    o=o+O;
     myfile<<"O+=";
    myfile<<o<<endl;
    cout<<"\nENTER No. of O- blood per bottal: ";
    cin>>oo;
    oo=oo+OO;
     myfile<<"O-=";
    myfile<<oo<<endl;
    cout<<"\nENTER No. of AB+ blood per bottal: ";
    cin>>ab;
    ab=ab+AB;
     myfile<<"AB+=";
    myfile<<ab<<endl;
    cout<<"\nENTER No. of AB- blood per bottal: ";
    cin>>aab;
    aab=aab+AAb;
     myfile<<"AB-=";
    myfile<<aab<<endl;
	}
	else
	 {
	 
	  cout<<"Do you want to decrease the quantity(y/n)";
	  cin>>u;
      if(u=='y')
      {
    int a,aa,b,bb,o,oo,ab,aab;
    cout<<"\nA+ DECREMENT BY: ";
    cin>>a;
    for(int i=a;i>0;i--)
    {
    	A--;
	}
    myfile<<"A+=";
    myfile<<A<<endl;
    cout<<"\nA- DECREMENT BY: ";
    cin>>aa;
    for(int i=aa;i>0;i--)
    {
    	AA--;
    
	}
     myfile<<"A-=";
    myfile<<AA<<endl;
    cout<<"\nB+ DECREMENT BY: ";
    cin>>b;
    for(int i=b;i>0;i--)
    {
    	B--;
    	
	}
     myfile<<"B+=";
    myfile<<B<<endl;
    cout<<"\nB- DECREMENT BY: ";
    cin>>bb;
    for(int i=bb;i>0;i--)
    {
    	BB--;
	}
     myfile<<"B-=";
    myfile<<BB<<endl;
    cout<<"\nO+ DECREMENT BY: ";
    cin>>o;
    for(int i=o;i>0;i--)
    {
    	O--;
	}
     myfile<<"O+=";
    myfile<<O<<endl;
    cout<<"\nO- DECREMENT BY: ";
    cin>>oo;
    for(int i=oo;i>0;i--)
    {
    	OO--;
	}
     myfile<<"O-=";
    myfile<<OO<<endl;
    cout<<"\nAB+ DECREMENT BY: ";
    cin>>ab;
    for(int i=ab;i>0;i--)
    {
    	AB--;
	}
     myfile<<"AB+=";
    myfile<<AB<<endl;
    cout<<"\nAB- DECREMENT BY: ";
    cin>>aab;
    for(int i=aab;i>0;i--)
    {
    	AAb--;
	}
     myfile<<"AB-=";
    myfile<<AAb<<endl;
      	
	  }
	  else
	   {
		 exit(0);
     	}
					

    
}
}
void admin::viewblooddetail()
{

ifstream ifile;
char s[100],fn[20];
cout<<"Enter the file name to read and display its content(blooddetail.txt): ";
cin>>fn;
ifile.open(fn);
if(!ifile)
{
	cout<<"Error in opening file....!!";
	getch();
	exit(0);
 } 

 
 while(ifile.eof()==0)
 {
 	ifile>>s;
 	cout<<s<<"\t\t";
 }
 cout<<"\n";
 ifile.close();
 getch();
	
} 


void admin::pack(record r)
{
             fstream fp;
             fp.open(fname,ios::out|ios::app);
             if(fp==NULL)
            {
		cout<<"\nCannot open file";
		exit(0);
             }
             char buff[45];
             strcpy(buff,r.Name);
             strcat(buff,"|");
             strcat(buff,r.Roll_id);
             strcat(buff,"|");
             strcat(buff,r.Phone_no);
             strcat(buff,"|");
     	strcat(buff,r.Email);
     	strcat(buff,"|");
     	strcat(buff,r.Blood_group);
     	strcat(buff,"|");
     	for(int i=0;i<45-strlen(buff);i++)
     	strcat(buff,"|");
     	fp<<buff<<endl;
     	fp.close();
}
record admin::unpack(char buff[])
{
	record r;
	int i=0,j=0;
	while(buff[j]!='|')
	      r.Name[i++]=buff[j++];
	r.Name[i]='\0';
	i=0;
	j++;
	while(buff[j]!='|')
	      r.Roll_id[i++]=buff[j++];
	r.Roll_id[i]='\0';
	i=0;
	j++;
	while(buff[j]!='|')
	      r.Phone_no[i++]=buff[j++];
	r.Phone_no[i]='\0';
	i=0;
	j++;
	while(buff[j]!='|')
	      r.Email[i++]=buff[j++];
	r.Email[i]='\0';
	i=0;
	j++;
	while(buff[j]!='|')
	      r.Blood_group[i++]=buff[j++];
	r.Blood_group[i]='\0';
	return(r);
}
void admin::writedata()
{
record r;
     	cout<<"\nENTER Name: ";
     	cin>>r.Name;
     	cout<<"\nENTER Roll ID: ";
     	cin>>r.Roll_id;
     	cout<<"\nENTER Phone number: ";
     	cin>>r.Phone_no;
     	cout<<"\nENTER Email id: ";
     	cin>>r.Email;
     	cout<<"\nENTER Blood Group: ";
     	cin>>r.Blood_group;
     	pack(r);
}
void admin::display()
{
 	fstream fp;
   	char buff[45];
   	record r;
     	fp.open(fname,ios::in);
     	if(fp==NULL)
       	{
		cout<<"\nCannot open file";
		exit(0);
       	}	
     	
     	cout<<"\n#\tName\tRoll_id\tPhone_no\tEmail\tBlood_group\n";
     	int c=1;
     	while(1)
     	{
     	 	fp.getline(buff,45);
       		if(fp.eof())break;
       		r=unpack(buff);
cout<<c++<<"\t"<<r.Name<<"\t"<<r.Roll_id<<"\t"<<r.Phone_no<<"\t" <<r.Email<<"\t"<<r.Blood_group<<endl;
              }
     	fp.close();
     	return;
}
void admin::modify()
{
             fstream fp;
     	char Roll_id[15],buff[45];
     	int i,j;
     	record s[100];
     	fp.open(fname,ios::in);
     	if(fp==NULL)
             {
		cout<<"\nCannot open file";
		exit(0);
             }
             cout<<"\nENTER THE ROLL ID TO BE MODIFIED: ";
     	cin>>Roll_id;
 i=0;
   	while(1)
   	{
       		fp.getline(buff,45);
       		if(fp.eof())break;
       		s[i]=unpack(buff);
       		i++;
              }
   	for(j=0;j<i;j++)
             {
       		if(strcmp(s[j].Roll_id,Roll_id)==0)
		{
	  		cout<<"\nVALUES OF THE RECORD ARE:\n";
	  		cout<<"\nNAME: "<<s[j].Name;
	  		cout<<"\nROLL ID: "<<s[j].Roll_id;
	  		cout<<"\nPHONE NO.: "<<s[j].Phone_no;
	  		cout<<"\nEMAIL: "<<s[j].Email;
	  		cout<<"\nBLOOD GROUP: "<<s[j].Blood_group;
	  		cout<<"\nENTER THE NEW VALUES: \n";
	  		cout<<"\nNAME: ";
	  		cin>>s[j].Name;
	  		cout<<"\nROLL ID: ";
	  		cin>>s[j].Roll_id;
	  		cout<<"\nPHONE NO: ";
	  		cin>>s[j].Phone_no;
	  		cout<<"\nEMAIL: ";
	  		cin>>s[j].Email;
	  		cout<<"\nBLOOD GROUP: ";
	  		cin>>s[j].Blood_group;
	  		break;
	}
              }
   	if(j==i)
     	{
      		cout<<"\nRECORD NOT FOUND";
      		return;
     	}	
   	 fp.close();
  	 fstream fd;
 	 fd.open(fname,ios::out|ios::trunc);
 if(fd==NULL)
     	{
      	  	cout<<"\nCannot open file";
      		exit(0);
     	 }
   	for(j=0;j<i;j++)
      		pack(s[j]);
   	fd.close();
}
void admin::search()
{
 	fstream fp;
 	char Blood_group[15],buff[45];
 	int i,j;
 	record s;
      	fp.open(fname,ios::in);
     	if(fp==NULL)
     	{
	 	cout<<"\nCannot open file";
		exit(0);
              }
     	cout<<"\nENTER THE BLOOD GROUP TO BE SEARCHED: ";
     	cin>>Blood_group;
     	i=0;
     	
   	while(1)
   	{
   		 fp.getline(buff,45);
       		if(fp.eof())break;
       		s=unpack(buff);
       		if(strcmp(s.Blood_group,Blood_group)==0)
		{
	  	 	cout<<"\nRECORD FOUND\n";
	  		cout<<"\nNAME: "<<s.Name;
	  		cout<<"\nROLL ID: "<<s.Roll_id;
	  		cout<<"\nPHONE NUMBER: "<<s.Phone_no;
	  		cout<<"\nEMAIL ID: "<<s.Email;
	  		cout<<"\nBLOOD GROUP: "<<s.Blood_group;
	  		return;
	 	}
                }
       	   cout<<"\nRECORD NOT FOUND";
       	   return;
}


int main()
{
	
	if (cin.get() == '\n') {
        system("cls");
	
 	int ch,ch1,ch2;
  	 admin obj;
  	         char m;
  	         cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
  	         cout<<"\n                                    BLOOD BANK MANAGEMENT SYSTEM                            ";
  	         cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n\n\n\n";
  	         
  	         string username;
             string password;
             cout<<"\t\t\t\tEnter your username: ";
             cin>>username;
             cout<<"\t\t\t\tEnter your password: ";
             m=_getch();
             while(m!=13)
             {
             	password.push_back(m);
             	cout<<'*';
             	m=_getch();
			 }
             if(username=="admin")
			{
  	         if(password=="12345")
			   {	cout<<"\n\n\n";
  		     		cout<<"Congratulation login successful !"<<endl;
  		     		cout<<"\n\n\n\n";
  		     		cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
  	         		cout<<"\n                                    BLOOD BANK MANAGEMENT SYSTEM                            ";
  	         		cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n\n\n";
        		    cout << "\t\t\tMAIN MENU\n";
        		    cout << "\n\t\t\t1.DONAR\n";
       			    cout << "\t\t\t2.BLOOD DETAIL\n";
        		    cout << "Enter Your Option\n";
        		    cin >> ch;
        		    switch (ch) 
				    {
        		    case 1:
                	{    
                	    cout<<"\n\n\n\n\n\n\n\n\n\n";
                	    cout<<"\t\t\tBLOOD BANK MANAGEMENT SYSTEM\n";
                	    cout<<"--------------------------------------------------------------\n\n\n";
     	    			cout<<"\t\t1.ADD THE DATA\n\t\t2.VIEW THE DATA\n\t\t3.SEARCH THE DATA\n\t\t4.MODIFY THE DATA\n\t\t5.BACK TO MAIN PAGE\n\t\t6.EXIT";
    	    			while(1)
	       				{
	  	    				cout<<"\nENTER YOUR CHOICE: ";
	  	    				cin>>ch1;
	  	    				switch(ch1)
	  	    				{
			 					case 1:obj.writedata();
			    	    		break;
		 						case 2:obj.display();
			   		        	break;
		 						case 3:obj.search();
			    	        	break;
		 						case 4: obj.modify();
			        	        break;
			        	        case 5:
			        	        	 system("CLS");
			        	        	main();
			        	        	break;
			 					default:exit(0);
							}		
	   					}
	   				}
	   					
	   			case 2:
                {    cout<<"\n\n\n\n";
                cout<<"\t\t\tBLOOD BANK MANAGEMENT SYSTEM\n";
                 cout<<"-----------------------------------------------------------------\n\n\n";
                	cout<<"\t\t1.BLOOD DETAIL ADD\n\t\t2.VIEW DETAIL\n\t\t3.BUY BLOOD\n\t\t4.VIEW BILLS DETAIL\n\t\t5.BACK TO MAIN PAGE\n\t\t6.EXIT";
					while(1)
					{
						cout<<"\nENTER YOUR CHOICE: ";
						cin>>ch2;
						switch(ch2)
						{
							case 1:obj.addblooddetail();
							break;
							case 2:obj.viewblooddetail();
							break;
							case 3:
								obj.buyblood();
							
								break;
							case 4:obj.viewbilldetail();
							break;	
							case 5:	
							    system("CLS");
								main();
								break;
							default:exit(0);
						}
						
					}
				}
			}
				
		}
				else
		      	{
	  				cout<<"\n\nInvalid password !"<<endl;
	  				char p;
	  				cout<<"\nDo you want to try again(y/n)";
	  				cin>>p;
	  				if(p=='y')
	  				{
	  				main();
	  			    }
	  			    else
	  			    {
	  			    	exit(0);
					  }
	  		    }
		       }else
			    {
			 		cout<<"\n\nInvalid username !"<<endl;
			 		char p;
	  				cout<<"\nDo you want to try again(y/n)";
	  				cin>>p;
	  				if(p=='y')
	  				{
	  				main();
	  			    }
	  			    else
	  			    {
	  			    	exit(0);
					  }
			 		main();
				}
					
		 }
	}
	
	





