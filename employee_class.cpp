//Tugas 1 Pemrograman Berorientasi Objek (Employee Salary)
//MAULIDYA RISTA YUNIAR 057

#include<iostream>
#include<string>

using namespace std;

class Employee{
    public:
        Employee(string, string, int);
	void setNamaDepan(string);
		string getNamaDepan();
	void setNamaBelakang(string);
		string getNamaBelakang();

	void setMonthlySalary(int);
	int getMonthlySalary();

	private:
		string NamaDepan;
		string NamaBelakang;
	int monthlySalary;
};

Employee::Employee( string Depan, string Belakang, int salary)
{
	NamaDepan=Depan;
	NamaBelakang=Belakang;
	if(salary>0)
		monthlySalary=salary;
	else
	{
		monthlySalary=0;
		cout<<"Initial salary was invalid."<<endl;
	}
}

void Employee::setNamaDepan( string Depan)
{
	if ( Depan.length() <= 25 )
		NamaDepan = Depan;
	if ( Depan.length() > 25 )
	{
		NamaDepan = Depan.substr( 0, 25 );
		cout << "NAMA \"" << Depan << endl;
	}
}

void Employee::setNamaBelakang(string Belakang)
{
	if ( Belakang.length() <= 25 )
		NamaBelakang = Belakang;
	if ( Belakang.length() > 25 )
	{
		NamaBelakang = Belakang.substr( 0, 25 );
		cout << "NAMA \"" << Belakang << endl;
	}
}

void Employee::setMonthlySalary(int salary )
{
	if(salary>0)
		monthlySalary=salary;
	else
	{
		monthlySalary=0;
		cout<<"Initial salary was invalid."<<endl;
	}
}

string Employee::getNamaDepan() {
	return NamaDepan;
}
string Employee::getNamaBelakang() {
	return NamaBelakang;
}
int Employee::getMonthlySalary() {
	return monthlySalary;
}

int main()
{
	cout << "--------------------EMPLOYEE SALARY--------------------" <<endl<<endl;

	Employee Employee1("MAULIDYA","RISTA",6500000);
	Employee Employee2("NANA","JAEMIN",10000000);
	cout << " EMPLOYEE 1    : "<< Employee1.getNamaDepan()<<" "<< Employee1.getNamaBelakang()<<endl;
	cout << " Monthly Salary: "<< "Rp." << Employee1.getMonthlySalary()<<endl;
	cout << " Annual Salary : "<< "Rp." << Employee1.getMonthlySalary()*12<< endl;
	cout << "                ->>AFTER INCREASING 10%<<-"<<endl;
	int incrementedSalary1=Employee1.getMonthlySalary();
	incrementedSalary1=incrementedSalary1+(incrementedSalary1*0.1);
	Employee1.setMonthlySalary(incrementedSalary1);

	cout<< " Monthly Salary Employee 1  : "<< "Rp." << Employee1.getMonthlySalary()<<endl;
	cout<< " Annual Salary Employee 1   : "<< "Rp." << Employee1.getMonthlySalary()*12 <<endl<<endl;

    cout << "-------------------------------------------------------"<<endl<<endl;
	cout << " EMPLOYEE 2    : "<< Employee2.getNamaDepan()<<" "<< Employee2.getNamaBelakang()<<endl;
	cout << " Monthly Salary: "<< "Rp." << Employee2.getMonthlySalary() <<endl;
	cout << " Annual Salary : "<< "Rp." << Employee2.getMonthlySalary()*12 <<endl;
	cout << "                ->>AFTER INCREASING 10%<<-"<<endl;

	int incrementedSalary2=Employee2.getMonthlySalary();
	incrementedSalary2=incrementedSalary2+(incrementedSalary2*0.1);
	Employee2.setMonthlySalary(incrementedSalary2);

	cout<< " Monthly Salary Employee 2  : "<< "Rp." << Employee2.getMonthlySalary() << endl;
	cout<< " Annual Salary Employee 2   : "<< "Rp." << Employee2.getMonthlySalary()*12<< endl;
}
