#include<iostream>
using namespace std;
void PrintPattern(int, int ,int);
void print_spaces(int n,char c);
void print_single(char c,int p);
void print_mid(char , int , int);
int main ()
{
	int a,b,c;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"Enter second number"<<endl;
	cin>>b;
	cout<<"Enter third number"<<endl;
	cin>>c;
	PrintPattern (a,b,c);
}

void PrintPattern(int sp, int pt,int spa)
{
	if(sp==0 && spa==0)
	return;
	
	
		print_spaces(sp-1,' ');
		print_single('|',1);
		print_spaces(sp-1,' ');
		print_mid('*',pt*2,sp);
		print_single('|',1);
		print_mid('*',pt*2,sp);
		print_spaces(sp-1,' ');
		print_single('|',1);
		cout<<endl;
	
	PrintPattern(sp-1,pt+1,spa-1);
			print_spaces(spa-1,' ');
		print_single('|',1);
		print_spaces(spa-1,' ');
		print_mid('*',pt*2,spa);
		print_single('|',1);
		print_mid('*',pt*2,spa);
		print_spaces(spa-1,' ');
		print_single('|',1);
			cout<<endl;
}


void print_spaces(int n,char c)
{
	if(n==0)
	return;
	else
	{
		cout<<c;
		print_spaces(n-1,c);
		
	}
}

void print_single(char c,int p)
{
	if(p==0)
	return;
	else
	{
		cout<<c;
		
		print_single(c,p-1);
	}
}

void print_mid(char ch, int c, int p)
{

    if (c == 0)
     return;
    cout << ch;
    print_mid(ch,c-1,p);
	
	}
