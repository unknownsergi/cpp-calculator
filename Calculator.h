class Calculator
{
	double n1, n2;

public:
	Calculator(double n1, double n2)
	{
		this->n1 = n1;
		this->n2 = n2;
	}

	double add()
	{
		return n1 + n2;
	}

	double substract()
	{
		return n1 - n2;
	}

	double multiply()
	{
		return n1 * n2;
	}

	double divide()
	{
		if (n2 == 0)
		{
			return 0;
		}
		else
		{
			return n1 / n2;
		}
	}

};
