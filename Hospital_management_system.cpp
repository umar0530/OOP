#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstring>


using namespace std;

void menu();
class hospital

{
public:
	virtual void get() = 0;
	virtual void show() = 0;
};


class info :public hospital
{
public:
	char name[50], time[50];
	int num, age;
	void get()
	{
        cin.sync();
		cout << "\nEnter The Patient Name =";
		cin.getline(name, 50);

		cout << "\nEnter The Appoinment Time =";
		cin.getline(time, 50);
		cout << "\nEnter Age =";
		cin >> age;
		cout << "\nEnter Appoinment No =";
		cin >> num;
	}
	void show()
	{
		cout << "\nName = " << name;
		cout << "\nAge =" << age;
		cout << "\nNo =" << num;
		cout << "\nTime =" << time;
	}

};

class Umar :public info
{
public:
	info a1;
	void get()
	{
	
		ofstream out("Umar.txt");
		a1.get();
		out.write((char*)&a1, sizeof(info));
		out.close();
		cout << "Your Entry Has been saved ";
		getch();
		menu();
	}
	void show()
	{
		ifstream in("Umar.txt");
		if (in == NULL)
		{
			cout << "\n\nNo Data In the File ";
			cout << "\n\n\t\tPress Any key To Continue : ";
			getch();
			menu();

		}
		else {

			while (!in.eof())
			{
				in.read((char*)&a1, sizeof(a1));
				a1.show();
			}
			in.close();
			getch();
			menu();
		}
	}
};
class Ahmad :public info
{
public:
	info a1;
	void get()
	{
	
		ofstream out("Ahmad.txt");
		a1.get();
		out.write((char*)&a1, sizeof(info));
		out.close();
		cout << "Your Entry Has been saved ";
		getch();
		menu();
	}
	void show()
	{
		ifstream in("Ahmad.txt");
		if (in == NULL)
		{
			cout << "No Data In the File ";
			cout << "\nPress Any key To Continue : ";
			getch();
			menu();

		}
		else
		{

			while (!in.eof())
			{
				in.read((char*)&a1, sizeof(a1));
				a1.show();
			}
			in.close();
			cout << "Press Enter To Continue =";
			getch();
			menu();
		}
	}

};
class Abdullah :public info
{
public:
	info a1;
	void get()
	{
		
		ofstream out("Abdullah.txt");
		a1.get();
		out.write((char*)&a1, sizeof(info));
		out.close();
		cout << "Your Entry Has been saved ";
		getch();
		menu();
	}
	void show()
	{
		ifstream in("Abdullah.txt");
		if (in == NULL)
		{
			cout << "No Data In the File ";
			cout << "\nPress Any key To Continue : ";
			getch();
			menu();

		}
		else
		{

			while (!in.eof())
			{
				in.read((char*)&a1, sizeof(info));


				a1.show();
			}
			in.close();
		}
	}

};
class staff :public hospital
{
public:

	char all[999];
	char name[50], age[20], sal[30], pos[20];;

	void get()
	{
		ofstream out("staff.txt");
		{  
			cin.sync();
			cout << "\nEnter Name = ";
			cin.getline(name, 50);
			cout << "\nEnter Age  = ";
			cin.getline(age, 20);
			cout << "\nEnter Sallary = ";
			cin.getline(sal, 30);
			cout << "\nEnter Working Position =";
			cin.getline(pos, 20);

		}
		out << "\nName = " << name << "\nAge " << age << "\nSallary" << sal << "\nWorking Position\n" << pos;
		out.close();
		cout << "\n\nYour Information has been saved :\n\t\t\tPress any key to continue  ";
		getch();
		menu();
	}
	void show()
	{

		ifstream in("staff.txt");
		if (!in)
		{
			cout << "File open error";
		}
		while (!(in.eof()))
		{
			in.getline(all, 999);
			cout << all << endl;


		}
		in.close();
		cout << "\n\n\t\t\tPress Any Key To Continue : ";
		getch();
		menu();
	}

};

class information
{
public:
	void drinfo()
	{
		
			system("color F3");
		cout << "\n==============================================================================\n";
		cout << "\n\n\t\t(Three Doctor Available) \n\n \t\t[Infotmation And Timing Are Given Below]\n";
		cout << "-----------------------------------------------------------------------------\n";
		cout << "\t\tDr Available:\n";
		cout << "\t\tDr. Umar (skin specialist)\n\n";
		cout << "\t\t\t [[Timing]]:\n\n";
		cout << "\tMonday To Friday\t\t9AM TO 5PM\n";
		cout << "\tSatuday         \t\t9AM TO 1PM\n";
		cout << "\tSunday          \t\t Off\n";
		cout << "\n------------------------------------------------------------------------------\n";
		cout << "\t\tDr. Abdullah (child specialist)\n\n";
		cout << "\t\t\t [[Timing]]:\n\n";
		cout << "\tMonday To Friday\t\t2PM TO 10PM\n";
		cout << "\tSatuday         \t\t8AM TO 1PM\n";
		cout << "\tSunday          \t\t12PM TO 9PM\n";
		cout << "\n------------------------------------------------------------------------------\n";
		cout << "\t\tDr. Ahmad (Eye specialist)\n\n";
		cout << "\t\t\t [[Timing]]:\n\n";
		cout << "\tMonday To Friday\t\t8AM TO 5PM\n";
		cout << "\tSatuday         \t\t10AM TO 1PM\n";
		cout << "\tSunday          \t\t Off\n";
		cout << "\n------------------------------------------------------------------------------\n";
		cout << "\nPrees Any Key For Continue: ";
		getch();
		menu();

	}
};
void call_dr()
{
	
	int choice;
	cout << "\n\n\n\t\tPress 1 for Dr Umar \n\n\t\t Press 2 for Dr Ahmad \n\n\t\t Press 3 for Dr Abdullah ";
	cin >> choice;

	hospital* ptr;
	Umar s3;
	Ahmad s4;
	Abdullah s5;
	if (choice == 1)
	{
		ptr = &s3;
		ptr->get();

	}
	if (choice == 2)
	{
		ptr = &s4;
		ptr->get();


	}
	if (choice == 3)
	{
		ptr = &s5;
		ptr->get();

	}

	else {

		cout << "Sorry invalid choice :";
	}
}

void printofshow()
{
	
	int choice;
	cout << "\n\n\t 1 -Press 1 for Dr Umar \n\n\t 2-  Press 2 for Dr Ahmad \n\n\t 3-  Press 3 for Dr Abdullah ";
	cout << "Please Enter Your Choice :";
	cin >> choice;
	hospital* ptr;
	Umar s3;
	Ahmad s4;
	Abdullah s5;
	if (choice == 1)
	{
		ptr = &s3;
		ptr->show();
	}
	else if (choice == 2)
	{
		ptr = &s4;
		ptr->show();
	}
	else if (choice == 3)
	{
		ptr = &s5;
		ptr->show();
	}
	else
	{
		cout << "Sorry Invalid choice : ";
		getch();
		menu();

	}

}

void menu()
{
	
	cout << "\n Hospital Management system";
	cout << "\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	cout << "\n\n\n\n\n\n\n";


	cout << "\t\t    |   ++++++++++  MAIN MENU   +++++++++  |  \n";
	cout << "\t\t    |         Hospital Management system   |\n";
	cout << "\t\t    |======================================|   \n";

	cout << "\n--------------------------------------------------------------------------------\n";

	cout << "\n\n\t1-\t\tPrees 1 For Availabe Doctor Information\n\n";
	cout << "\t2-\t\tPress 2 for Doctor Appointment\n\n";
	cout << "\t3-\t\tPress 3 for Saving Staff information\n\n";
	cout << "\t4-\t\tPress 4 for Checking Patient Appointment Menu:\n\n ";
	cout << "\t5-\t\tPress 5 for Checking Staff Information Menu:\n\n";



	cout << "\n================================================================================\n";
	cout << "\n\n\t\tPlese Enter Your Choice : ";
	information a1;
	hospital* ptr;
	staff a2;
	int a;
	cin >> a;
	if (a == 1)
	{
		a1.drinfo();
	}
	else if (a == 2)
	{
		call_dr();
	}
	else if (a == 3)
	{
		ptr = &a2;
		ptr->get();

	}
	else if (a == 4)
	{
		printofshow();
	}
	else if (a == 5)
	{
		ptr = &a2;
		ptr->show();
	}

	else
	{
		cout << "Sorry invalid choice : ";
	}

}


int main()
{
	menu();

}
