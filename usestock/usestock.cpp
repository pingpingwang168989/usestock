//stock¿‡

#include<iostream>
#include<string>
using namespace std;
class stock
{
	string name;
	double sh_val;
	long sh_num;
	double tot_val;
	void total();

public:
	stock();

	~stock();
	stock(string s, double shval = 0.0, long shnum = 0);

	stock operator+(const stock& s)const;
	friend stock operator*(const stock& s, long l);
	const stock& topval(const stock& s)const;
	void buy(const long& l, const double& d);
	void show()const;
};


stock::stock()
{
	cout << "default constructor invoked." << endl;
	name = "none";
	sh_val = 0.0;
	sh_num = 0;
	total();
}
stock::stock(string s, double shval, long shnum)
{
	name = s;
	sh_num = shnum;
	sh_val = shval;
	total();
}


stock::~stock()
{
	cout << "destructor invoked." << endl;

}


void stock::total()
{
	tot_val = sh_val * sh_num;
}

void stock::show()const
{
	cout << "show stock:" << endl;
	cout << "stock name:" << this->name << " share price:" << sh_val
		<< " share number:" << sh_num <<
		" total value:" << tot_val << endl;
}

int main()
{


	stock st1;
	st1.show();

}
