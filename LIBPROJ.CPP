#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<fstream.h>

class book
{
char item_no[5],item_title[10],author_name[10];
char publisher_name[10],cd_inc;
float price;
int published_year,version,ay,am,ad;
public:
void in()
	{
	cout<<"\nEnter item no.                                  : ";
	gets(item_no);
	cout<<"\nEnter title (less than 10 charcters)            : ";
	gets(item_title);
	cout<<"\nEnter author's name (less than 10 characters)   : ";
	gets(author_name);
	cout<<"\nEnter publisher's name (less than 10 characters): ";
	gets(publisher_name);
	cout<<"\nEnter the day of add of book(1-30/31)		 : ";
	cin>>ad;
	cout<<"\nEnter the month of add of book(1-12) 		 : ";
	cin>>am;
	cout<<"\nEnter the year of add of book(yyyy)  		 : ";
	cin>>ay;
	cout<<"\nCD included? (y/n)                              : ";
	cin>>cd_inc;
	cout<<"\nEnter price                                     : ";
	cin>>price;
	cout<<"\nEnter version                                   : ";
	cin>>version;
	cout<<"\nEnter published year                            : ";
	cin>>published_year;
	}
void out()
	{
	cout<<"\n* Item no.       : "<<item_no;
	cout<<"\n\n* Item title     : "<<item_title;
	cout<<"\n\n* Author name    : "<<author_name;
	cout<<"\n\n* Price          : "<<price;
	cout<<"\n\n* Version        : "<<version;
	cout<<"\n\n* Added date     : "<<item_title;
	cout<<"\n\n* Publisher name : "<<publisher_name;
	cout<<"\n\n* Published year : "<<published_year;
	cout<<"\n\n* CD             : "<<cd_inc;
	}
void out1()
	{
	cout<<"\n* Item no.       : "<<item_no;
	cout<<"\n\n* Item title     : "<<item_title;
	}
char* retauth()
	{
	return author_name;
	}
char* retitem_no()
	{
	return item_no;
	}
char* rettitle()
	{
	return item_title;
	}
int retd()
	{
	return ad;
	}
int retm()
	{
	return am;
	}
int rety()
	{
	return ay;
	}
}b,c,d;

class user
{
int d,m,y,y1,d2,m2,y2,bc;//x,k;
char user_no[5],user_type[6],name[10],contact_no[11];
char dob[11],address_proof[10];
public:
char ibook[4][20],ino[4][5];
int bid[4],bim[4],biy[4];
void init()
{
bc=0;
}
void in()
	{
	int ch;
	cout<<"\nEnter user no.: ";
	gets(user_no);
	cout<<"\nEnter type of user \n\n\tPremium(prem)\n\n\tTerm(term)\n\n\tNormal(norm): ";
	gets(user_type);
	cout<<"\nEnter name (less than 10 characters)         : ";
	gets(name);
	cout<<"\nEnter contact number                         : ";
	gets(contact_no);
	cout<<"\nEnter date of birth (dd/mm/yyyy)             : ";
	gets(dob);
	cout<<"\nAddress_proof: \n\nEnter choice\n\n1.Voter ID \n\n2.Passport number: ";
	cin>>ch;
	if(ch==1)
		{
		cout<<"\nEnter Voter ID: ";
		gets(address_proof);
		}
	else
		{
		char pp[20];
		strcpy(pp,"PP-");
		cout<<"\nEnter passport number: ";
		gets(address_proof);
		strcat(pp,address_proof);
		strcpy(address_proof,pp);
		}
	cout<<"\nEnter membership start day(1-30/31): ";
	cin>>d;
	cout<<"\nEnter membership start month(1-12) : ";
	cin>>m;
	cout<<"\nEnter membership start year(yyyy)  : ";
	cin>>y;
	if(strcmpi("term",user_type)==0)
	y1=y+1;
	}
void out()
	{
	cout<<"\n* User no.                         : ";
	puts(user_no);
	cout<<"\n* Type of user                     : ";
	puts(user_type);
	cout<<"\n* Name                             : ";
	puts(name);
	cout<<"\n* Book count                       : ";
	cout<<bc<<endl;
	cout<<"\n* Contact number                   : ";
	puts(contact_no);
	cout<<"\n* Date of birth (dd/mm/yyyy)       : ";
	puts(dob);
	cout<<"\n* Address_proof                    : ";
	puts(address_proof);
	cout<<"\n* Membership start date(dd/mm/yyyy): ";
	cout<<d<<"/"<<m<<"/"<<y<<endl;
	if(strcmpi("term",user_type)==0)
		{
		cout<<"\n* Membership end date(dd/mm/yyyy)  : ";
		cout<<d<<"/"<<m<<"/"<<y1<<endl;
		}
	else cout<<" ";
	}
void out1()
	{
	cout<<"\n----------------------------\n";
	cout<<"\n* User no.       : ";
	puts(user_no);
	cout<<"\n* Type of user   : ";
	puts(user_type);
	cout<<"\n* Name           : ";
	puts(name);
	cout<<"\n* Books borrowed : ";
	cout<<bc<<"\n";
	}
int msy()
{
return y;
}
int med()
{
return d;
}
int mem()
{
return m;
}
int mey()
{
return y1;
}
char* retu_no()
{
return user_no;
}
char* retut()
{
return user_type;
}
char* retuname()
{
return name;
}
int retbc()
{
return bc;
}
void id(int x)
{
d2=x;
}
void im(int y)
{
m2=y;
}
void iy(int z)
{
y2=z;
}
int retd()
{
return d2;
}
int retm()
{
return m2;
}
int rety()
{
return y2;
}
void bcp()
{
bc++;
}
void bcm()
{
bc--;
}
}u,v,w,uu;

void issue()
{
char id[10],id1[10],p[20],h,ut[10];
int f,day,mont,year,o,r,v,j,t;
ifstream a("books.dat",ios::binary);
fstream a1("users.dat",ios::binary|ios::in|ios::out);
ofstream ii("temp.dat",ios::app|ios::binary);
if((!a)||(!a1))
	{
	cout<<"error!";
	exit(0);
	}
else
	{
		r=0;
		f=-1;
		cout<<"\nEnter User ID for Issuing: ";
		gets(ut);
		a1.seekg(ios::beg);
		do
			{

			a1.read((char*)&u,sizeof(u));
			if(a1.eof()) break;
			else if(strcmpi(ut,u.retu_no())==0)
				{
				f=1;
				cout<<"\n\n";
				u.out1();
				if(strcmpi("term",u.retut())==0)
					{
					cout<<"\nEnter Date of issuing: \n\nDay: ";
					cin>>day; u.id(day);
					cout<<"\nMonth: ";
					cin>>mont; u.im(mont);
					cout<<"\nYear: ";
					cin>>year; u.iy(year);
					if((year==u.mey())||(year==u.msy()))
						{
						if(!((year==u.msy())&&(mont>=u.mem()))||((year==u.mey())&&(mont<=u.mem())))
							{
							cout<<"\nNot eligible for choosing books. cuz o' ur mont";
							f=0;
							break;
							}
						else
							{
							if(((year==u.msy())&&(mont==u.mem())&&(day<u.med()))||((year==u.mey())&&(mont==u.mem())&&(day>u.med())))
								{
								cout<<"\nNot eligible for choosing books.cuz o d date";
								f=0;
								break;
								}
							else if((((mont==1)||(mont==3)||(mont==5)||(mont==7)||(mont==8)||(mont==10)||(mont==12))&&(day>31))||((mont==2)&&(day>28))||(((mont==4)||(mont==6)||(mont==9)||(mont==11))&&(day>30)))
								{
								cout<<"\nPlease enter appropriate date. Thank You.";
								f=0;
								break;
								}
							else if(u.retbc()>=2)
								{
								cout<<"\nNot eligible for choosing more books.";
								f=0;
								break;
								}
							else
								r++;
							}
						}
					else if(year>u.mey())
						{
						cout<<"\nNot eligible for choosing more books.Membership exspired.";
						f=0;
						break;
						}
					else if(year<u.msy())
						{
						cout<<"\nPlease enter an appropriate year. Thank You.";
						f=0;
						break;
						}
					}
				else if(strcmpi("prem",u.retut())==0)
					{
					if(u.retbc()>=4)
						{
						cout<<"\nNot eligible for choosing more books.";
						f=0;
						break;
						}
					else
					r++;
					}
				else if(strcmpi("norm",u.retut())==0)
					{
					if(u.retbc()>=2)
						{
						cout<<"\nNot eligible for choosing more books.";
						f=0;
						break;
						}
					else
					r++;
					}
				break;
				}

			}while(!a1.eof());
			if((f>0)&&(r!=0))
			{
			{
			ifstream q("books.dat",ios::binary);
			if(!q)
				{
				cout<<"error!";
				exit(0);
				}
			else
				{
				cout<<"\nEnter the date of issuing : ";
				cin>>u.bid[u.retbc()];
				cout<<"\nEnter the month of issuing: ";
				cin>>u.bim[u.retbc()];
				cout<<"\nEnter the year of issuing : ";
				cin>>u.biy[u.retbc()];
				cout<<"\n----------------------------\n";
				char w[25],s[10],k[20];
				q.seekg(0);
				do
					{
					q.read((char*)&b,sizeof(b));
					if(q.eof())
						{
						break;
						}
					else
						{
						strcpy(w,b.rettitle());
						strcpy(s,b.retitem_no());
						cout<<"\n"<<s<<") "<<w<<"\n";//<<": "<<b.retstat()<<"\n";
						}
					}while(!q.eof());
				q.close();
				}
			}
			cout<<"\nSelect Book and Enter ID for issuing: ";
			gets(id);
			a.seekg(ios::beg);
			book e;
			do
				{
				t=0;
				a.read((char*)&e,sizeof(e));
				if(a.eof()) break;
				else
				{
				if(strcmpi(id,e.retitem_no())==0)
				{
				t=1;
				v=u.retbc();
				strcpy(u.ibook[v],e.rettitle());
				strcpy(u.ino[v],e.retitem_no());
				u.bcp();
				cout<<u.retbc();
				cout<<"\nBook Issued.";
				a1.seekp(a1.tellp()-1*sizeof(u),ios::beg);
				a1.write((char*)&u,sizeof(u));
				break;
				}
				}
				}while(!a.eof());
			if(t==0) cout<<"\nBook not found.";
			}
			if(f==-1) cout<<"\nUser ID not found";
		a.close();
		a1.close();
	}
}

void breturn()
{
char x[10],y[10];
int f=0,g=0;
fstream a("users.dat",ios::in|ios::out|ios::binary);
if(!a)
	{
	cout<<"\nError!";
	exit(0);
	}
else
	{
	cout<<"\n\nEnter user ID: ";
	cin>>x;
	do
		{
		a.read((char*)&u,sizeof(u));
		if(a.eof()) break;
		else if(strcmpi(u.retu_no(),x)==0)
			{
			f=1;
			if(u.retbc()==0)
			cout<<"\n\nNo books borrowed.";
			else
				{
				cout<<"\n\n------------------------------";
				for(int i=0;i<u.retbc();i++)
				cout<<"\n\n"<<u.ino[i]<<") "<<u.ibook[i];
				cout<<"\n\nEnter the book ID to be returned: ";
				gets(y);
				for(i=0;i<u.retbc();i++)
				{
				if(strcmpi(y,u.ino[i])==0)
					{
					g=1;
					break;
					}
				}
				for(int s=i+1;s<u.retbc();s++)
					{
					strcpy(u.ino[s-1],u.ino[s]);
					strcpy(u.ibook[s-1],u.ibook[s]);
					u.bid[s-1]=u.bid[s];
					u.bim[s-1]=u.bim[s];
					u.biy[s-1]=u.biy[s];
					}
				u.bcm();
				cout<<"\n\nBook Returned.";
				}
			if(g==0)
			cout<<"\n\nBook not found.";
			break;
			}
		}while(!a.eof());
	a.seekp(a.tellp()-1*sizeof(u),ios::beg);
	a.write((char*)&u,sizeof(u));
	if(f==0)
	cout<<"\n\nUser ID not found.";
	a.close();
	}
}
void ireport()
{
int y,q;
cout<<"\nEnter the year to search for             : ";
cin>>y;
cout<<"\nEnter the quarter to search for (1,2,3,4): ";
cin>>q;
int p=0,h;//, t=0, n=0;
ifstream c("users.dat", ios::binary);
if(!c)
{
	cout<<"file does not exist";
	exit(0);
}
else
{
	//cout<<"User no\tType\tName\tAddress\tContact\tFather\tDate of birth\tproof\tstart date\tend date\n";
	do
	{
		c.read((char*)&u, sizeof(user));
		if(c.eof())
		break;
		else
		{
		h=u.retbc();
		if(h!=0)
		{
			for(int i=0;i<h;i++)
			{
				if(u.biy[i]==y)
				{
					int r;
					r=u.bim[i];
					if(r>=(3*q-2)&&r<=(3*q))
					{
					{
					p++;
					cout<<"\n\n--------------------\n";
					cout<<"\nUser "<<u.retu_no();
					cout<<"\n\nBook :"<<u.ino[i]<<") "<<u.ibook[i]<<"\n";
					}
					}
				}
			}
		}
		}
	}
	while(!c.eof());
	cout<<"\n----------------------------------------------";
	cout<<"\n\nNumber Of Books Issued In Quarter '"<<q<<"' : "<<p;

}
c.close();
}


void ureport()
{
int y,q;
cout<<"\nEnter the year to search for             : ";
cin>>y;
cout<<"\nEnter the quarter to search for (1,2,3,4): ";
cin>>q;
int p=0, t=0, n=0;
ifstream c("users.dat", ios::binary);
if(!c)
{
	cout<<"file does not exist";
	exit(0);
}
else
{
	//cout<<"User no\tType\tName\tAddress\tContact\tFather\tDate of birth\tproof\tstart date\tend date\n";
	do
	{
		c.read((char*)&u, sizeof(user));
		if(c.eof())
		break;
		else if(u.msy()==y)
		{
			int r;
			r=u.mem();
			if(r>=(3*q-2)&&r<=(3*q))
			{
				if(strcmpi("prem",u.retut())==0)
				p++;
				else if(strcmpi("term",u.retut())==0)
				t++;
				else if(strcmpi("norm",u.retut())==0)
				n++;
				u.out1();
			}
		}
	}
	while(!c.eof());
	cout<<"\n---------------------------------------------------------";
	cout<<"\n\nNumber Of 'Premium' Users Added In Quarter '"<<q<<"' : "<<p;
	cout<<"\n\nNumber Of 'Term' Users Added In Quarter '"<<q<<"'    : "<<t;
	cout<<"\n\nNumber Of 'Normal' Users Added In Quarter '"<<q<<"'  : "<<n;
}
c.close();
}

void breport()
{
int y, q;
cout<<"\nEnter the year to search for             : ";
cin>>y;
cout<<"\nEnter the quarter to search for (1,2,3,4): ";
cin>>q;
int p=0;
ifstream g("books.dat", ios::binary);
if(!g)
{
	cout<<"file does not exist";
	exit(0);
}
else
{
	//cout<<"User no\tType\tName\tAddress\tContact\tFather\tDate of birth\tproof\tstart date\tend date\n";
	do
	{
		g.read((char*)&b, sizeof(b));
		if(g.eof())
		break;
		else if(b.rety()==y)
		{
			int r;
			r=b.retm();
			if(r>=(3*q-2)&&r<=(3*q))
			{
				p++;
				cout<<"\n\n--------------------------------------\n";
				b.out1();
			}
		}
	}
	while(!g.eof());
	cout<<"\n\n---------------------------------------------------------";
	cout<<"\n\nNumber Of Books Added In Quarter '"<<q<<"' : "<<p;

}
g.close();
}


void addb()
{
//int uniq;
char n;
ofstream add("books.dat",ios::binary|ios::app);
if(!add)
	{
	cout<<"error!";
	exit(0);
	}
else
	{
	do
		{
		cout<<"\n\nEnter the book details :\n";
		b.in();
		int flag=0;
		ifstream pf("books.dat",ios::in|ios::binary);
		if(!pf)
		{ cout<<"error";}
		else
		{ do
		{
		pf.read((char*)&c,sizeof(c));
		if(pf.eof())
		break;
			if((strcmpi(c.retitem_no(),b.retitem_no())==0))
			{
			cout<<"\n\nSorry the Book ID already exists\n";
			flag=1;
			n='n';
			break;
			}
		}while(!(pf.eof()));
		}
		pf.close();
		if(flag==0)
		add.write((char*)&b,sizeof(b));
		if(n!='n')
		{
		cout<<"\nWant to continue adding?(y/n): ";
		cin>>n;
		}
		}while(n=='y');
	add.close();
	}
}

void addu()
{
char n;
ofstream add("users.dat",ios::binary|ios::app);
if(!add)
	{
	cout<<"error!";
	exit(0);
	}
	else
	{
	do
		{
		cout<<"\n\nEnter the user details :\n";
		u.in();
		u.init();
		int flag=0;
		ifstream pf("users.dat",ios::in|ios::binary);
		if(!pf)
			{
			cout<<"error";
			exit(0);
			}
		else
		{
		do
		{
		pf.read((char*)&v,sizeof(v));
		if(pf.eof())
		break;
			if((strcmpi(v.retu_no(),u.retu_no())==0))
			{
			cout<<"\n\nSorry the User ID already exists\n";
			flag=1;
			n='n';
			break;
			}
		}while(!(pf.eof()));
		}
		pf.close();
		if(flag==0)
		add.write((char*)&u,sizeof(u));
		if(n!='n')
		{
		cout<<"\nWant to continue adding?(y/n): ";
		cin>>n;
		}
		}while(n=='y');
	add.close();
	}
}

void viewb()
{
char y;
ifstream w("books.dat",ios::binary);
if(!w)
	{
	cout<<"error!";
	exit(0);
	}
else
	{
	do
		{
		w.read((char*)&b,sizeof(b));
		if(w.eof()) break;
		else
			{
			b.out();
			cout<<"\n\nWant to continue viewing?(y/n): ";
			cin>>y;
			if(y=='y') continue;
			else break;
			}
		}while(!w.eof());
	if(w.eof()) cout<<"\nEnd of records";
	w.close();
	}
}

void viewu()
{
char y;
ifstream w("users.dat",ios::binary);
if(!w)
	{
	cout<<"error!";
	exit(0);
	}
else
	{
	do
		{
		w.read((char*)&u,sizeof(u));
		if(w.eof()) break;
		else
			{
			u.out();
			cout<<"\n\nWant to continue viewing?(y/n): ";
			cin>>y;
			if(y=='y') continue;
			else break;
			}
		}while(!w.eof());
	if(w.eof()) cout<<"\nEnd of records";
	w.close();
	}
}
void delb()
{
char id[50],rep,m,name[75];
int ch,f;//=0;
//do
//{
ifstream a("books.dat",ios::binary);
ofstream b("temp.dat",ios::binary|ios::app);
if((!a)||(!b))
	{
	cout<<"\t\tFile not found";
	exit(0);
	}
else
	{
	cout<<"\n\nEnter choice for deletion: using \n\n1.Book ID\n\n2.Book Name:\t";
	cin>>ch;
	if(ch==1)
		{
		cout<<"\nEnter Book ID: ";
		cin>>id;
		//cout<<"\n\nDeleting from books\n";
		do
		{
		a.read((char*)&c,sizeof(c));
		if(a.eof())
		break;
		else if(strcmpi(c.retitem_no(),id)==0)
			{
			//f++;
			c.out();
			cout<<"\n\nAre you sure you want to delete?(y/n): ";
			cin>>rep;
			if(rep=='y')
				{
				a.seekg(0);
				do
				{
				a.read((char*)&d,sizeof(d));
				if(a.eof()) break;
				else if(strcmpi(d.retitem_no(),id)!=0)
				b.write((char*)&d,sizeof(d));
				}while(!a.eof());

				}
			else break;
			}
		}while(!a.eof());
	}

	else if(ch==2)
		{
		cout<<"\nEnter book name: ";
		gets(name);
		cout<<"\n\nDeleting from books\n";
		do
			{
			a.read((char*)&c,sizeof(c));
			if(a.eof())
			break;
			else if(strcmpi(c.rettitle(),name)==0)
			{
			//f++;
			c.out();
			cout<<"\n\nAre you sure you want to delete?(y/n): ";
			cin>>rep;
			if(rep=='y')
				{
				a.seekg(0);
				do
				{
				a.read((char*)&d,sizeof(d));
				if(strcmpi(d.rettitle(),name)!=0)
				b.write((char*)&d,sizeof(d));
				}while(!a.eof());
				}
			else break;
			}
		}while(!a.eof());

		}
	else  cout<<"\nEnter valid choice\n";
	}
b.close();
a.close();
if(rep=='y')
{
remove("books.dat");
rename("temp.dat","books.dat");
}
else cout<<"\nFile not found";
}

void delu()
{
char id[50],rep,m,uname[75];
int ch;
//do
//{
ifstream a("users.dat",ios::binary);
//ifstream c("issues.dat",ios::binary);
ofstream b("temp1.dat",ios::binary|ios::app);
//ofstream d("temp2.dat",ios::binary|ios::app);
if((!a)||(!b))
	{
	cout<<"\t\tfile not found";
	exit(0);
	}
else
	{
	cout<<"\nEnter choice for deletion: using \n\n1.User ID\n\n2.User Name:\t";
	cin>>ch;
	if(ch==1)
		{
		cout<<"\nEnter User ID: ";
		cin>>id;
		//cout<<"\n\nDeleting from users\n";
		do
		{
		a.read((char*)&u,sizeof(u));
		if(a.eof())
		break;
		else if(strcmpi(u.retu_no(),id)==0)
			{
			u.out();
			cout<<"\n\nAre you sure you want to delete?(y/n): ";
			cin>>rep;
			if(rep=='y')
				{
				a.seekg(0);
				do
				{
				a.read((char*)&v,sizeof(v));
				if(a.eof()) break;
				else if(strcmpi(v.retu_no(),id)!=0)
				b.write((char*)&v,sizeof(v));
				}while(!a.eof());

				}
			else break;
			}
		}while(!a.eof());

		}

	else if(ch==2)
		{
		cout<<"\nEnter User name: ";
		gets(uname);
		//cout<<"\n\nDeleting from users\n";
		do
			{
			a.read((char*)&u,sizeof(u));
			if(a.eof())
			break;
			else if(strcmpi(u.retuname(),uname)==0)
			{
			u.out();
			cout<<"\n\nAre you sure you want to delete?(y/n): ";
			cin>>rep;
			if(rep=='y')
				{
				a.seekg(0);
				do
				{
				a.read((char*)&v,sizeof(v));
				if(a.eof()) break;
				else if(strcmpi(v.retuname(),uname)!=0)
				b.write((char*)&v,sizeof(v));
				}while(!a.eof());
				}
			else break;
			}

		}while(!a.eof());

		}

	else  cout<<"\nEnter valid choice\n";
	}
b.close();
a.close();
//c.close();
//d.close();
if(rep=='y')
{
remove("users.dat");
rename("temp1.dat","users.dat");
//remove("issues.dat");
//rename("temp2.dat","issues.dat");
}
//cout<<"\nWant to continue deleting?(y/n): ";
//cin>>m;
//}while(m=='y');
}

void searchb()
{
int ch,f=0;
char m,a[50];
do
{
cout<<"\nEnter choice: \n\n1.Author's name \n\n2.Book title\n\n3.Book ID\n\n";
cin>>ch;
if(ch==1)
	{
	cout<<"\nEnter the Author's name to be searched: ";
	gets(a);
	ifstream s("books.dat",ios::binary);
	if(!s)
		{
		cout<<"Error!";
		exit(0);
		}
	else do
		{
		s.read((char*)&c,sizeof(c));
		if(s.eof()) break;
		else if(strcmpi(a,c.retauth())==0)
		{
		f++;
		c.out();
		}
		}while(!s.eof());
	s.close();
	}
else if(ch==3)
	{
	cout<<"\nEnter the book ID to be searched: ";
	gets(a);
	ifstream s("books.dat",ios::binary);
	if(!s)
		{
		cout<<"Error!";
		exit(0);
		}
	else do
		{
		s.read((char*)&c,sizeof(c));
		if(s.eof()) break;
		else if(strcmpi(a,c.retitem_no())==0)
		{
		f++;
		c.out();
		}
		}while(!s.eof());
	s.close();
	}
else if(ch==2)
	{
	cout<<"\nEnter the Title to be searched: ";
	gets(a);
	ifstream s("books.dat",ios::binary);
	if(!s)
		{
		cout<<"Error!";
		exit(0);
		}
	else do
		{
		s.read((char*)&c,sizeof(c));
		if(s.eof()) break;
		else if(strcmpi(a,c.rettitle())==0)
		{
		f++;
		c.out();
		}
		}while(!s.eof());
	s.close();
	}
else cout<<"Invalid option ";
cout<<"\n\nWant to continue searching?(y/n): ";
cin>>m;
}while(m=='y');
}

void searchu()
{
int ch,f=0;
char a[50],m;
do
{
cout<<"\nEnter choice: \n\n1.User's ID \n\n2.\User's name\n";
cin>>ch;
if(ch==1)
	{
	cout<<"\nEnter the User's ID to be searched: ";
	gets(a);
	ifstream s("users.dat",ios::binary);
	if(!s)
		{
		cout<<"Error!";
		exit(0);
		}
	else do
		{
		s.read((char*)&u,sizeof(u));
		if(s.eof()) break;
		else if(strcmpi(a,u.retu_no())==0)
		{
		f++;
		u.out();
		}
		}while(!s.eof());
	s.close();
	}
else if(ch==2)
	{
	cout<<"\nEnter the User name to be searched: ";
	gets(a);
	ifstream s("users.dat",ios::binary);
	if(!s)
		{
		cout<<"Error!";
		exit(0);
		}
	else do
		{
		s.read((char*)&u,sizeof(u));
		if(s.eof()) break;
		else if(strcmpi(a,u.retuname())==0)
		{
		f++;
		u.out();
		}
		}while(!s.eof());
	s.close();
	}
else cout<<"Invalid option ";
if(f==0) cout<<"\nFile not found";
cout<<"\n\nWant to continue searching?(y/n): ";
cin>>m;
}while(m=='y');
}

void uname()
{
ifstream q("users.dat",ios::binary);
if(!q)
	{
	cout<<"error!";
	exit(0);
	}
else
	{
	char w[50],s[10],p[30];
	while(!q.eof())
		{
		q.read((char*)&u,sizeof(u));
		if(q.eof())
		break;
		else
		{

		u.out1();
		}
		}
	q.close();
	}
}

void bname()
{
ifstream q("books.dat",ios::binary);
if(!q)
	{
	cout<<"error!";
	exit(0);
	}
else
	{
	char w[50],s[10],p[30];
	while(!q.eof())
		{
		q.read((char*)&b,sizeof(b));
		if(q.eof())
		break;
		else
		{
			strcpy(w,b.rettitle());
			strcpy(s,b.retitem_no());
			cout<<"\n"<<s<<") "<<w<<"\n";//<<": "<<b.retstat()<<"\n";
			//}
		}
		}
	q.close();
	}
}

void issuedate()
{
char y,a[5];
int f=0;
ifstream q("users.dat",ios::binary);
if(!q)
	{
	cout<<"error!";
	exit(0);
	}
else
	{
	cout<<"\n\nEnter user no. to be viewed: ";
	gets(a);
	do
		{
		q.read((char*)&u,sizeof(u));
		if(q.eof())
		break;
		else if(strcmpi(a,u.retu_no())==0)
		{
		f++;
		int x=u.retbc();
		cout<<"\n"<<u.retu_no()<<") "<<u.retuname()<<": ";
		if(x==0) cout<<"No books borrowed";
		else
			{
			for(int i=0;i<x;i++)
			{
			cout<<"\n\n\t"<<u.ino[i]<<") "<<u.ibook[i]<<": ";
			cout<<u.bid[i]<<"/"<<u.bim[i]<<"/"<<u.biy[i];
			}
			}
		break;
		}
		}while(!q.eof());
	if(f==0) cout<<"\n\nUser not found";
	}
q.close();
}

void bookissued()
{
char y,a[5];
int f=0;
ifstream q("users.dat",ios::binary);
if(!q)
	{
	cout<<"error!";
	exit(0);
	}
else
	{
	cout<<"\n\nEnter user no. to be viewed: ";
	gets(a);
	do
		{
		q.read((char*)&u,sizeof(u));
		if(q.eof())
		break;
		else if(strcmpi(a,u.retu_no())==0)
		{
		f++;
		u.out1();
		cout<<"\nList of issued books:\n\n";
		int i=1;
		while(i<=u.retbc())
			{
			cout<<u.ino[i-1]<<") "<<u.ibook[i-1]<<"\n\n";
			i++;
			}
		}
		}while(!q.eof());
	if(f==0) cout<<"\n\nUser id not found";
	}
q.close();
}


void main()
{
int n,m;
char a,b,x;
//char pw[10],un[10];
clrscr();
do
	{
	clrscr();
	cout<<" \n                              ABC CITY LIBRARY\n";
	cout<<"\nEnter choice :\n\n1.Administration:\n\n\tAdding.\n\n\t";
	cout<<"Deleting.\n\n\tReports.";
	cout<<"\n\n2.Users:\n\n\tViewing.\n\n\tSearching.\n\n\tBorrowing.\n\n\t";
	cout<<"Returning.\n\n3.Exit\n\n";
	cin>>m;
	if(m==1)
	{
	char pw[10],un[10];
	cout<<"\nEnter username: ";
	gets(un);
	cout<<"\nEnter password: ";
	char c=' ';
	int i=0;
	while(c!='\r')
		{
		c=getch();
		if(c<='9'&&c>='0'||c>='a'&&c<='z'||c>='A'&&c<='Z')
			{
			pw[i]=c;
			i++;
			cout<<"*";
			}
		}
	pw[i]='\0';
	if((strcmp(un,"mvm")==0)&&(strcmp(pw,"mvm")==0))
		{
		do
		{
		clrscr();
		cout<<" \n                                Administration\n";
		cout<<"\nEnter choice :\n\n1.Add books.\n\n2.Delete Books.";
		cout<<"\n\n3.Add users.\n\n4.Delete Users.\n\n";
		cout<<"5.Report: Number Of Users Added In A Quarter.\n\n";
		cout<<"6.Report: Number Of Books Added In A Quarter.\n\n";
		cout<<"7.Report: Number Of Books Issued In A Quarter.\n\n";
		cout<<"8.View Issued Books.\n\n9.View Issued Dates.";
		cout<<"\n\n10.Main Menu.\n\n11.Exit.\n\nChoice: ";
		cin>>n;
		if(n==1) addb();
		else if(n==2) delb();
		else if(n==3) addu();
		else if(n==4) delu();
		else if(n==5) ureport();
		else if(n==6) breport();
		else if(n==7) ireport();
		else if(n==8) bookissued();
		else if(n==9) issuedate();
		else if(n==10)
			{
			a='n';
			break;
			}
		else if(n==11) exit(0);
		else cout<<"\nInvalid choice";
		cout<<"\n\nWant to continue to the admin menu?(y/n): ";
		cin>>a;
		}while(a=='y');
		}
	else
	cout<<"\n\nWrong username or password";
	}
	else if(m==2)
	{
	do
	{
	clrscr();
	cout<<" \n                                	Users\n";
	cout<<"\nEnter choice :";
	cout<<"\n\n1.Search Books.\n\n2.View Books.\n\n3.Search users.";
	cout<<"\n\n4.View Users.\n\n5.View Booknames.\n\n";
	cout<<"6.View Usernames.\n\n7.Borrow Books.";
	cout<<"\n\n8.Return Book.\n\n9.Main Menu.\n\n10.Exit\n\nChoice :";
	cin>>n;
	if(n==1) searchb();
	else if(n==2) viewb();
	else if(n==3) searchu();
	else if(n==4) viewu();
	else if(n==5) bname();
	else if(n==6) uname();
	else if(n==7) issue();
	else if(n==8) breturn();
	else if(n==9)
		{
		a='n';
		break;
		}
	else if(n==10) exit(0);
	else cout<<"\nInvalid choice";
	cout<<"\n\nWant to continue to the users menu?(y/n): ";
	cin>>a;
	}while(a=='y');
	}
	else if(m==3) exit(0);
	else cout<<"\nInvalid choice";
	cout<<"\n\nWant to continue to the main menu?(y/n): ";
	cin>>x;
	}while((x=='y')&&(a!='y'));
getch();
}

