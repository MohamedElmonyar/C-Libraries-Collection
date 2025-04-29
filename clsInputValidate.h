#pragma once
#include "clsDate.h";

class clsInputValidate
{
public:

	static bool IsNumberBetween(short NumBet, short NumFrom, short NumTo)
	{
		return (NumBet >= NumFrom && NumBet <= NumTo);
	};

	static bool IsNumberBetween(int NumBet,int NumFrom,int NumTo)
	{	
		return (NumBet >= NumFrom && NumBet <= NumTo);
	};

	static bool IsNumberBetween(float NumBet, float NumFrom, float NumTo)
	{
		return (NumBet >= NumFrom && NumBet <= NumTo);
	};

	static bool IsNumberBetween(double NumBet, double NumFrom, double NumTo)
	{
		return (NumBet >= NumFrom && NumBet <= NumTo);
	};

	static bool IsDateBetween(clsDate Date1, clsDate DateFrom, clsDate DateTo)
	{
		if (clsDate::IsDate1BeforeDate2(DateFrom, DateTo))
			return (clsDate::IsDate1AfterDate2(Date1, DateFrom) || (clsDate::IsDate1EqualDate2(Date1, DateFrom)) &&
				(clsDate::IsDate1BeforeDate2(Date1, DateTo) || (clsDate::IsDate1EqualDate2(Date1, DateTo))));
		else 
		return ((clsDate::IsDate1AfterDate2(Date1, DateTo) || (clsDate::IsDate1EqualDate2(Date1, DateTo))) && 
			clsDate::IsDate1BeforeDate2(Date1, DateFrom) || (clsDate::IsDate1EqualDate2(Date1, DateFrom)));	
	};

	static int ReadIntNumber(string Warning)
	{
		int Number;
		cin >> Number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << Warning << endl;
			cin >> Number;
		}
		return Number;
	};

	static double ReadDblNumber(string Warning)
	{
		double Number;
		cin >> Number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << Warning << endl;
			cin >> Number;
		}
		return Number;
	};

	static int ReadIntNumberBetween(int Num1,int Num2,string Warning)
	{
		int Number;
		cin >> Number;
		while (cin.fail() || (Number < Num1 || Number > Num2))
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << Warning << endl;
			cin >> Number;
		}
		return Number;
	};

	static short ReadShortNumberBetween(short Num1, short Num2, string Warning)
	{
		short Number;
		cin >> Number;
		while (cin.fail() || (Number < Num1 || Number > Num2))
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << Warning << endl;
			cin >> Number;
		}
		return Number;
	};

	static string ReadString(string Statment)
	{
		string S="";
		cout << Statment;
		getline(cin >> ws, S);
		return S;	
	};

	static bool YesOrNot(string Word) 
	{
		char YesOrNot='n';
		cout << Word << endl;
		cin >> YesOrNot;
		if (tolower(YesOrNot) == 'y')
			return true;
		else
			return false;
	};

	static bool IsNumberGreaterThan(int Number1 ,int Number2) 
	{
		return (Number1 >= Number2);
	};

	static bool IsValidDate(clsDate())
	{
		return clsDate::IsValidDate(clsDate());
	};

};

