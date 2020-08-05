#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
#include<string.h>
#include<ctime>
char uname[30];
int etime;

using namespace std;

class database
{
	char dbname[30];
	int dbscoretime,counter,digiscan=0 ;
	time_t dbtime;                        
	
	public:
		void getdata()
		{
		    strcpy(dbname,uname);
			dbscoretime = etime;
			dbtime = time(0);
			
			counter=strlen(dbname);
			////for etime number length 
			while(dbscoretime>0)
			{
			   	dbscoretime = dbscoretime / 10;
			   	digiscan++;
			}////////
		   dbscoretime = etime;
		
		}
		
		void putdata()
		{
		  char *now = ctime(&dbtime);
			
			cout<<" "<<dbname;
			for(int i=0;i<(30-counter);i++)
			{
				cout<<" ";
			}
			
			cout<<"\t\t   "<<dbscoretime<<"SECS";
				for(int i=0;i<(30-digiscan);i++)
			{
				cout<<" ";
			}cout<<" "<<now<<"\n";
			
			
		}
}db;
struct checkstr
{  
char a[120],b[120],c[120],d[120],e[120],f[120],g[40];
int ta,tb,tc,td,te,tf,tg,tz;

   void reappear()//////////screen clone/////////
   {
   	  cout<<"\n\t\t\t               __T_O_P_I_C_:_C_R_Y_P_T_O_G_R_A_P_H_Y__\n";

cout<<"\n\n |Cryptography is a Method of Protecting information and Communications through the use of codes so that only those for";
cout<<"\n |whom the information is intended can read and process it.The pre-fix 'crypt' means 'hidden' or 'vault' and the suffix";
cout<<"\n |graphy stands for writing.In computer science,Cryptography refers to secure information and communication techniques";   
cout<<"\n |derived from mathematical concepts and a set of rule-based calculations called algorithms to transform messages in";
cout<<"\n |ways that are hard to decipher.These Deterministic algorithms are used for cryptographic key generation and digital";
cout<<"\n |signing and verification to protect data privacy,web browsing on the internet and Confidential Communications such as";
cout<<"\n |credit card transactions and email.\n\n";
cout<<" ";
for(int i=0;i<118;i++)
{
cout<<"-";
}cout<<"\n";

  
   }////////////// window for  below except a//////////////
    
    void astrtime()
    {
    	ta= time(0);
    	astr();
	}
	void astr()
	{
		cin.ignore(); 
		cout<<"\n #Enter::line:1\n\n";
		cout<<" |";_sleep(100);
		
		gets(a);
		if((strcmp(a,"c")==0)||strcmp(a,"Cryptography is a Method of Protecting information and Communications through the use of codes so that only those for")==0)
                     {
                     	cout<<"\t\t\t\t     < Matched >";
						  bstrtime();
                     }
              else
                     {  cout<<"\t\t\t\t\t\t  < Retry !!! >";
					  astr(); }
			
	}
	     void bstrtime()////
	     {
	     	tb=time(0);
		    etime=tb-ta;
		    cout<<"\t\t < Elapsed:"<<etime<<"secs >";
		    bstr();
		 }/////

		void bstr()
	{
	    getch();system("cls");reappear();
		cout<<" #Enter::line:2\n\n";
		cout<<" |"; gets(b);
		if((strcmp(b,"w")==0)||strcmp(b,"whom the information is intended can read and process it.The pre-fix 'crypt' means 'hidden' or 'vault' and the suffix")==0)
                     {
                     	cout<<"\t\t\t\t     < Matched >"; cstrtime();
                     }
              else
                     {  cout<<"\t\t\t\t\t\t  < Retry !!! >"; bstr(); }
	}
	
	void cstrtime()/////////
	{
		tc=time(0);
		etime=(tc-tb)+etime;
	    cout<<"\t\t < Elapsed:"<<etime<<"secs >";
	    cstr();
	}////////
	
		void cstr()
	{	
		getch();system("cls");reappear();
		cout<<" #Enter::line:3\n\n";
		cout<<" |"; gets(c);
		if((strcmp(c,"g")==0)||strcmp(c,"graphy stands for writing.In computer science,Cryptography refers to secure information and communication techniques")==0)
                     {
                     	cout<<"\t\t\t\t     < Matched >"; dstrtime();
                     }
              else
                     {  cout<<"\t\t\t\t\t\t  < Retry !!! >"; cstr(); }
	}
	
	void dstrtime()//////
	{
	    td=time(0);
		etime=(td-tc)+etime;
	    cout<<"\t\t < Elapsed:"<<etime<<"secs >";
		dstr();	
	}///////////
	
			void dstr()
	{
		getch();system("cls");reappear();
		cout<<" #Enter::line:4\n\n";
		cout<<" |"; gets(d);
		if((strcmp(d,"d")==0)||strcmp(d,"derived from mathematical concepts and a set of rule-based calculations called algorithms to transform messages in")==0)
                     {
                     	cout<<"\t\t\t\t     < Matched >"; estrtime();
                     }
              else
                     {  cout<<"\t\t\t\t\t\t  < Retry !!! >"; dstr(); }
	}
	
	void estrtime()////
	{
		  	te=time(0);
		etime=(te-td)+etime;
	    cout<<"\t\t < Elapsed:"<<etime<<"secs >";
	    estr();
	}//////
			void estr()
	{
		getch();system("cls");reappear();
		cout<<" #Enter::line:5\n\n";
		cout<<" |"; gets(e);
		if((strcmp(e,"w")==0)||strcmp(e,"ways that are hard to decipher.These Deterministic algorithms are used for cryptographic key generation and digital")==0)
                     {
                     	cout<<"\t\t\t\t     < Matched >"; fstrtime();
                     }
              else
                     {  cout<<"\t\t\t\t\t\t  < Retry !!! >"; estr(); }
	}
	
	void fstrtime()/////////
	{
			tf=time(0);
		etime=(tf-te)+etime;
	    cout<<"\t\t < Elapsed:"<<etime<<"secs >";
	    fstr();
	}//////////
	
			void fstr()
	{
		getch();system("cls");reappear();
		cout<<" #Enter::line:6\n\n";
		cout<<" |"; gets(f);
		if((strcmp(f,"s")==0)||strcmp(f,"signing and verification to protect data privacy,web browsing on the internet and Confidential Communications such as")==0)
                     {
                     	cout<<"\t\t\t\t< Matched >"; gstrtime();
                     }
              else
                     {  cout<<"\t\t\t\t< Retry !!! >"; fstr(); }
	}
	
	void gstrtime()
	{
			tg=time(0);
		etime=(tg-te)+etime;
	    cout<<"\t\t < Elapsed:"<<etime<<"secs >";
	    gstr();
	}
	
			void gstr()
	{
		getch();system("cls");reappear();
		cout<<" #Enter::line:7\n\n";
		cout<<" |"; gets(g);
		if((strcmp(g,"c")==0)||strcmp(g,"credit card transactions and email.")==0)
                     {
                     	cout<<"\t\t\t\t\t          < Matched >"; final();
                     }
              else
                     {  cout<<"\t\t\t\t\t          < Retry >"; gstr(); }
	}
	
	void final()
	{ 
       	tz=time(0);
		etime=(tz-tg)+etime;
	
	int s2m,rsec;
	s2m=etime/60;
	rsec=etime%60;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n ";
	   for(int i=0;i<118;i++)
	   {
		cout<<"-";
	   }
		cout<<"\n\t\t\t\t\t< Task Completion Time:"<<s2m<<"mins "<<rsec<<"secs >";getch();
		 system("cls");save();
    }
    
    void save()
    { char key;
    system("cls");
		 cout<<"\n\n\n\t\t\t+--------------------+\t\t\t\t+------------------------+\n";
		       cout<<"\t\t\t|  SAVE Progress[S]  |\t\t\t\t|  Exit Without SAVE[X]  |\n";
		       cout<<"\t\t\t+--------------------+\t\t\t\t+------------------------+\n";
		     cin>>key;
		     if(key=='s'||key=='S')
		     form();
		     else if(key=='x'||key=='X')
		     exitt();
		     else
		     save();
			 	
    }
    
    
	
	//Data file Handling
	void filesave()
	{system("cls");
		cout<<" Save O.K";
	}
	
	
	void exitt()
	{
		system("cls");
		cout<<"\n\n\n\n\t\t\t\t\t\t  +--------------+ \n";
		        cout<<"\t\t\t\t\t\t  |   Thank-You  |\n";
		        cout<<"\t\t\t\t\t\t  +--------------+\n";
		        
	}
	
	
	void form()
    {system("cls");
    
    char formkey;
        cout<<"\n\n Follow these Naming Instructions:\n  |Dont use [?] Characters\n  |Naming Limit [ 20-30WORDS ]\n ";
        for(int i=0;i<118;i++)
        {cout<<"-";}cout<<"\n";
    	cout<<"\n\n\n\t\tEnter Your Name:";
    	cin.ignore();gets(uname);
    	cout<<"\n\n\t\t Did You Want To Submit (Y/N):";
    	cin>>formkey;
    	if(formkey=='Y'||formkey=='y')
    	   {
    	   	    filedir();
		   }
		else if(formkey=='N'||formkey=='n')
		     {
		     	exitt();
			 }
	    else
	    form();
	}
    
	
    void  filedir()
    {  
    	ofstream nwrites("database.db",ios::app|ios::binary);
    	   db.getdata();
    	   nwrites.write((char*)&db,sizeof(db));
            
    	nwrites.close();
    	filesave();
	}
		
}chk;



struct crypttype//typing test action page
{
	void prewritten()
	{ 
			
				
	
cout<<"\n\t\t\t               __T_O_P_I_C_:_C_R_Y_P_T_O_G_R_A_P_H_Y__\n";

cout<<"\n\n |Cryptography is a Method of Protecting information and Communications through the use of codes so that only those for";
cout<<"\n |whom the information is intended can read and process it.The pre-fix 'crypt' means 'hidden' or 'vault' and the suffix";
cout<<"\n |graphy stands for writing.In computer science,Cryptography refers to secure information and communication techniques";   
cout<<"\n |derived from mathematical concepts and a set of rule-based calculations called algorithms to transform messages in";
cout<<"\n |ways that are hard to decipher.These Deterministic algorithms are used for cryptographic key generation and digital";
cout<<"\n |signing and verification to protect data privacy,web browsing on the internet and Confidential Communications such as";
cout<<"\n |credit card transactions and email.\n\n";
_sleep(120);cout<<" ";
for(int i=0;i<118;i++)
{
cout<<"-";
_sleep(18);
}
cout<<endl;
chk.astrtime();

	}

}typer;

struct homeops 
{
	
	void input()//homepage input
	{int no;
	    
		cin>>no;
		if(no==1)
		start();
		else if(no==2)
		score();
		else if(no==3)
		about();
		else
		faile();
		
		getch();
		
	}
	
	void display()//homepage
	{
		cout<<"\n\n\n\n\n\n\t\t\t      +--------------------+\t\t+----------------------+\n";
		            cout<<"\t\t\t      |    1.Start Test    |\t\t|     2.ScoreBoard     |\n";
		            cout<<"\t\t\t      +--------------------+\t\t+----------------------+\n";
	    cout<<"\n\t\t\t\t\t\t   +--------------+\n";
		  cout<<"\t\t\t\t\t\t   |    3.About   |\n";
		  cout<<"\t\t\t\t\t\t   +--------------+\n";
				
	}
	
	void start()//page1
	{
		system("cls");
		
		cout<<"\n\t\t\t\t\t\t   < TYPING TEST >";
		cout<<"\n\n\n\n\n\t\t\tNOTICE:";
		cout<<"\n\t\t\t+---------------------------------------------------------------------+";
		cout<<"\n\t\t\t|  In THis Typing Test You Will be Provided a Prewritten Topic And    |";
		cout<<"\n\t\t\t|  You Have To Rewrite IT.                                            |";
		cout<<"\n\t\t\t|  This Test Will Test Your Writing Time Period and Aligns You in our |";
		cout<<"\n\t\t\t|  ScoreBoard According to Your Performance.                          |";
		cout<<"\n\t\t\t+---------------------------------------------------------------------+";
		
		cout<<"\n\n\t\t\t\t\t      < Press a Key To Continue >";getch();system("cls");
		typer.prewritten();
		
    }
    
    void about()//page3
    {
    	system("cls");
    	cout<<"\n\t\t\t\t\t\t      < About >";
		cout<<"\n\n\n\n\n\t\t\t\tDETAILS:";
		cout<<"\n\t\t\t\t+----------------------------------------------------+";
		cout<<"\n\t\t\t\t|  MADE BY:MOHIT SINGH DHAMI                         |";
		cout<<"\n\t\t\t\t|  CLASS:12|BOARD:CBSE|SCHOOL:JBM MANAS ACADEMY,PTH  |";
	    cout<<"\n\t\t\t\t|  PROGRAM NAME:TYPING TEST    BUILD DATE:15:9:2019  |";
	    cout<<"\n\t\t\t\t|  PROGRAMMING :C++                                  |";
	    cout<<"\n\t\t\t\t|  COMPILER:TDM-GCC 4.9.2 (DEVC++ 5.11)              |";
		cout<<"\n\t\t\t\t+----------------------------------------------------+";
	}
	
	void homepage()//homepage
	{
	     display();
		 cout<<"\n\n\n\n\n\n\n";
		 cout<<"\t\t\t\t\t      ";
		 cout<<"< Enter a Suitable Option >";
		 input();
	}
	
	void bootloop()
	{
	 while(!kbhit())
	  {
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t      TYPING TEST \n";
		_sleep(150);system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    ( TYPING TEST )\n";
		_sleep(150);system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t   (( TYPING TEST ))\n";
		_sleep(150);system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  ((( TYPING TEST )))\n";
		_sleep(150);system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t (((( TYPING TEST ))))\n";
		_sleep(150);system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t((((( TYPING TEST )))))\n";
		_sleep(150);system("cls");
	  }
	  homepage();
	   
    }
	
	void score()//page2
	{
		system("cls");
		ifstream reads("database.db",ios::in|ios::binary);
		
	     if(!reads)
		cout<<"\n\n\n\t\t\t\t\t   Currently No Score are Available!!!";
	     else
	     {	     	

		cout<<"\n\n   NAME\t\t\t\t\t  TASK TIME \t\t\t\t TEST-DETAILS\n ";
		for(int i=0;i<118;i++)
		{   cout<<"_";    }
		cout<<"\n";
		
		     
		     	while(!reads.eof())
		     	    {
					 
	                 reads.read((char*)&db,sizeof(db));
	                 if(reads.eof())break;
					 db.putdata();
					 
				    }

	         reads.close();
	     }

	}
	
	void faile()  //home
	{
		system("cls");
		cout<<"\n\n\n\t\t\t\t\t*Wrong Option* TRY AGAIN !!!";getch();
		system("cls");
		homepage();
	}
	
}home;


int main()   
{ 	home.bootloop();

	system("cls");
	return 0;
}
