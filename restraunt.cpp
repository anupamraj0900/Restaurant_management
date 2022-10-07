#include<iostream>
using namespace std;
int main(){
	int prize_of_pizz=0,prize_of_bur=0,prize_sand=0,prize_ice=0,price_cake=0;
	int selling_p=0,selling_b=0,selling_sand=0,selling_ice=0,selling_cake=0;
	int p=0,b=0,s=0,i=0,c=0;
	int choice,q;
	cout<<"\n\t\t\t\t Item in inventory";
	cout<<"\n Number of Pizza : ";
	cin>>prize_of_pizz;
	cout<<"\n Number of Burger : ";
	cin>>prize_of_bur;
	cout<<"\n Number of Sandwich : ";
	cin>>prize_sand;
	cout<<"\n Number of Ice-Cream : ";
	cin>>prize_ice;
	cout<<"\n Number of Cake : ";
	cin>>price_cake;
	p:
	 system("cls");//clear screen
	cout<<"\n\t\t\tControl Panel";
	cout<<"\n\n 1. Pizza";
	cout<<"\n 2. Burger";
	cout<<"\n 3. Sandwich";
	cout<<"\n 4. Ice-Cream";
	cout<<"\n 5. Cake";
	cout<<"\n 6. Details";
	cout<<"\n 7. Exit";
	cout<<"\n\n Enter Your Choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\n\n Enter Pizza Quantity : ";
			cin>>q;
			if(prize_of_pizz-selling_p >= q)
			{
				selling_p =selling_p + q;
				 p += q*700;
				cout<<"\n\n\n\t\t\t"<<q<<" Pizza Sales Thank You!!!";	
			}
			else
			cout<<"\n\n\n\t\t\tSorry "<<prize_of_pizz-selling_p<<" Pizza Remaining only ";
			break;
		case 2:
			cout<<"\n\n Enter Burger Quantity : ";
			cin>>q;
			if(prize_of_bur-selling_b >= q)
			{
				selling_b += q;
				b += q*100;
				cout<<"\n\n\n\t\t\t"<<q<<" Burger Sales Thank You!!!";	
			}
			else
			cout<<"\n\n\n\t\t\tSorry "<<prize_of_bur-selling_b<<" Burger Remaining in stock...";
			break;
		case 3:
			cout<<"\n\n Enter Sandwich Quantity : ";
			cin>>q;
			if(prize_sand-selling_sand >= q)
			{
				selling_sand += q;
				s += q*150;
				cout<<"\n\n\n\t\t\t"<<q<<" Sandwich Sales Thank You!!!";	
			}
			else
			cout<<"\n\n\n\t\t\tSorry "<<prize_sand-selling_sand<<" Sandwich Remaining in stock...";
			break;
		case 4:
			cout<<"\n\n Enter Ice-Cream Quantity : ";
			cin>>q;
			if(prize_ice-selling_ice >= q)
			{
				selling_ice += q;
				i += q*200;
				cout<<"\n\n\n\t\t\t"<<q<<" Ice-Cream Sales Thank You!!!";	
			}
			else
			cout<<"\n\n\n\t\t\tSorry "<<prize_ice-selling_ice<<" Ice-Cream Remaining in stock...";
			break;
		case 5:
			cout<<"\n\n Enter Cake Quantity : ";
			cin>>q;
			if(price_cake-selling_cake >= q)
			{
				selling_cake += q;
				c += q*500;
				cout<<"\n\n\n\t\t\t"<<q<<" Cake Sales Thank You!!!";	
			}
			else
			cout<<"\n\n\n\t\t\tSorry "<<price_cake-selling_cake<<" Cake Remaining in stock...";
			break;
		case 6:
			system("cls");
			cout<<"\n\t\t\tDetails Panel";
			cout<<"\n\n Purchase Pizza Quantity : "<<prize_of_pizz;
			cout<<"\n Sales Pizza Quantity : "<<selling_p;
			cout<<"\n Remaining Pizza Quantity : "<<prize_of_pizz-selling_p;
			cout<<"\n Total Pizza Price in a Day : "<<p;
			cout<<"\n\n Purchase Burger Quantity : "<<prize_of_bur;
			cout<<"\n Sales Burger Quantity : "<<selling_b;
			cout<<"\n Remaining Burger Quantity : "<<prize_of_bur-selling_b;
			cout<<"\n Total Burger Price in a Day : "<<b;
			cout<<"\n\n Purchase Sandwich Quantity : "<<prize_sand;
			cout<<"\n Sales Sandwich Quantity : "<<selling_sand;
			cout<<"\n Remaining Sandwich Quantity : "<<prize_sand-selling_sand;
			cout<<"\n Total Sandwich Price in a Day : "<<s;
			cout<<"\n\n Purchase Ice-Cream Quantity : "<<prize_ice;
			cout<<"\n Sales Ice-Cream Quantity : "<<selling_ice;
			cout<<"\n Remaining Ice-Cream Quantity : "<<prize_ice-selling_ice;
			cout<<"\n Total Ice-Cream Price in a Day : "<<i;
			cout<<"\n\n Purchase Cake Quantity : "<<price_cake;
			cout<<"\n Sales Cake Quantity : "<<selling_cake;
			cout<<"\n Remaining Cake Quantity : "<<price_cake-selling_cake;
			cout<<"\n Total Cake Price in a Day : "<<c;
			cout<<"\n\n\n Total Day Price : "<<p+b+s+i+c;
			break;
		case 7:
			cout<<"\n\nbye!";
			exit(0);
		default:
			cout<<"\n\n Invalid Value...Please Try Again...";
	}
	
	goto p;
}
