#include<iostream>

using namespace std;

#include<Windows.h>
int main()
{
	int quant;
	int choice;

	/*intialize the quantity present*/
	int qrooms = 0, qpasta = 0, qburger = 0, qnoodles = 0, qshake = 0, qchicken = 0;

	/* initialize the quantity sold out*/
	int srooms = 0, spasta = 0, sburger = 0, snoodles = 0, sshake = 0, schicken = 0;

	/* Variables which hold the total  price of the items present*/
	int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;


	cout << "\n\t Quantity of items we have"<<endl;
	cout << "\n Rooms avaliable :";
	cin >> qrooms;
	cout << "\n Quantity of Pasta :";
	cin >> qpasta;
	cout << "\n Quantity of Burger :";
	cin >> qburger;
	cout << "\n Quantity of Noodles :";
	cin >> qnoodles;
	cout << "\n Quantity of Shake :";
	cin >> qshake;
	cout << "\n Quantity of Chicken-roll :";
	cin >> qchicken;

	m:
	cout << "\n\n\t\t Please select from the menu ";
	cout << "\n\n1) Rooms";
	cout << "\n\n2) Pasta";
	cout << "\n\n3) Burger";
	cout << "\n\n4) Noodles";
	cout << "\n\n5) Shake";
	cout << "\n\n6) Chicken Roll";
	cout << "\n\n7) Information Regarding Sales and Collection";
	cout << "\n\n8) Exit";
	cout << "\n \n Please Enter Your Choice! :";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "\n\n Enter the number of rooms you want :";

		cin >> quant;
		if (qrooms - srooms >= quant)
		{
			srooms = srooms + quant;
			Total_rooms = Total_rooms + quant * 1200;
			
			cout << "\n\t" << quant << "\troom/rooms have been alloted to you !";

		}
		else
		{
			
			cout << "\n\t Only\t" << qrooms - srooms << "Rooms are remanining in out Hotel ";
			break;
		}
		break;
	case 2:
		cout << "\n\n Enter the number of Pastas you want :";

		cin >> quant;
		if (qpasta - spasta >= quant)
		{
			spasta = spasta + quant;
			Total_pasta = Total_pasta + quant * 250;
			cout << "\n\t" << quant << "\tPasta is the order !";

		}
		else
		{
			cout << "\n\t Only\t" << qpasta - spasta << "pasta remanining in out Hotel ";
			break;
		}
		break;
	case 3:
		cout << "\n\n Enter the number of Burgers you want :";

		cin >> quant;
		if (qburger - sburger >= quant)
		{
			sburger = sburger + quant;
			Total_burger = Total_burger + quant * 120;
			cout << "\n\t" << quant << " Burger is the order !";

		}
		else
		{
			cout << "\n\t Only\t" << qburger - sburger << "Burger remanining in out Hotel ";
			break;
		}
		break;

	case 4:
		cout << "\n\n Enter the number of Noodles Quantity :";

		cin >> quant;
		if (qnoodles - snoodles >= quant)
		{
			snoodles = snoodles + quant;
			Total_noodles = Total_noodles + quant * 1200;
			cout << "\n\t" << quant << " noodles is the order !";

		}
		else
		{
			cout << "\n\t Only\t" << qnoodles - snoodles << "Noodles remanining in out Hotel ";
			break;
		}
		break;

	case 5:
		cout << "\n\n Enter the number of Shakes you want :";

		cin >> quant;
		if (qshake - sshake >= quant)
		{
			sshake = sshake + quant;
			Total_shake = Total_shake + quant * 250;
			cout << "\n\t" << quant << " Shakes is the order !";

		}
		else
		{
			cout << "\n\t Only\t" << qshake - sshake << "Shakes  remanining in out Hotel ";
			break;
		}
		break;

	case 6:
		cout << "\n\n Enter the number of Chicken Rolls  you want :";

		cin >> quant;
		if (qchicken - schicken >= quant)
		{
			schicken = schicken + quant;
			Total_chicken = Total_chicken + quant * 1200;
			cout << "\n\t" << quant << " Chicken Rolls is the order !";

		}
		else
		{
			cout << "\n\t Only\t" << qchicken - schicken << "Chicken Rolls remanining in out Hotel ";
			break;
		}
		break;

	case 7:
		cout << "\n\n\tDetails of Sales and Collection :";
		cout << "\n\nNumber of rooms we had : " << qrooms;
		cout << "\n\nNumber of rooms we gave for rent" << srooms;
		cout << "\n\nRemaining Rooms :" << qrooms - srooms;
		cout << "\n\n Total rooms Collection of the Day :" << Total_rooms << "Rs";

		
		cout << "\n\nNumber of Pastas we had : " << qpasta;
		cout << "\n\nNumber of Pasta we sold" << spasta;
		cout << "\n\nRemaining Pastas :" << qpasta - spasta;
		cout << "\n\n Total Pasta Collection of the Day :" << Total_pasta << "Rs";

		cout << "\n\nNumber of Burgers we had : " << qburger;
		cout << "\n\nNumber of Burgers we sold" << sburger;
		cout << "\n\nRemaining Burgers :" << qburger - sburger;
		cout << "\n\n Total Burger Collection of the Day :" << Total_burger << "Rs";


		cout << "\n\nTotal Quantity of Noodles  we had : " << qnoodles;
		cout << "\n\nQuantity of Noodles we sold" << snoodles;
		cout << "\n\nRemaining Quantity of Noodles:" << qnoodles-snoodles;
		cout << "\n\nTotal Pasta Collection of the Day :" << Total_noodles << "Rs";


		cout << "\n\nNumber of Shakes we had : " << qshake;
		cout << "\n\nNumber of Shakes we sold" << sshake;
		cout << "\n\nRemaining Shakes :" << qshake - sshake;
		cout << "\n\nTotal Shakes Collection of the Day :" << Total_shake << "Rs";

		cout << "\n\nNumber of Chicken Rolls we had : " << qchicken;
		cout << "\n\nNumber of Chicken Rolls  we sold" << schicken;
		cout << "\n\nRemaining Chicken Rolls :" << qchicken - schicken;
		cout << "\n\nTotal Chicken Rolls Collection of the Day :" << Total_chicken << "Rs";

		cout << "\n\n\nTotal Collection for the day :" << Total_shake + Total_noodles + Total_burger + Total_chicken + Total_rooms + Total_pasta<<"Rs";
		break;


	case 8:
		exit(0);

	default:
		cout << "\n Please Select the Numbers mentioned Above !";
	}

	goto m; //used to choose multiple choice

}
/*Additional Adding that can be done*/
/*1.Adding the profit or loss*/
