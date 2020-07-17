#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
	int dollars;
	int cents;

public:
	Money()
	{
		setDollars(0);
		setCents(0);
	}
	Money(int dollars)
	{
		setDollars(dollars);
	}
	Money(int dollars, int cents)
	{
		setDollars(dollars);
		setCents(cents);
	}
	int getDollars() const
	{
		return dollars;
	}
	int getCents() const
	{
		return cents;
	}
	void setDollars(int dollars)
	{
		if (dollars < 0)
			dollars *= -1;
		this->dollars = dollars;
	}
	void setCents(int cents)
	{
		if (cents < 0)
			cents *= -1;
		this->cents = cents;
	}
	void prompt();
	void display() const;
};

#endif
