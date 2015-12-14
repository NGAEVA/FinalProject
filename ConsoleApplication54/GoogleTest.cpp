#include "complexNumber.h"
#include "iomanip"
#include <gtest/gtest.h>
struct complexType
{
	complexNumber num1, num2;
	complexNumber sum, sub, mult, div;
};
int main(int arg, char *argv[])
{
	//cout << "Enter the first complex number in the form (a,b)" << endl;
	//cin >> num1;
	//cout << endl;
	//cout << "Enter the second complex number in the form (a,b)" << endl;
	//cin >> num2;
	//cout << endl;

	//sum = num1 +num2;
	//sub = num1 - num2;
	//mult = num1 * num2;
	//div = num1 / num2;

	//cout << "The sum of two complex numbers is " << sum << endl;
	//cout << "The sub of two complex numbers is " << sub << endl;
	//cout << "The mult of two complex numbers is " << mult << endl;
	//cout << "The div of two complex numbers is " << fixed << setprecision(2) << div << endl;


	testing::InitGoogleTest(&arg, argv);
	return RUN_ALL_TESTS();
	return 0;
}

TEST(NumberTest, realimgEQ)
{
	complexType c;
	ASSERT_EQ(c.num1, c.num2);
}

TEST(NumberTest, sumsubtest)
{
	complexType c;
	cin >> c.num1;
	cin >> c.num2;
	c.sum = c.num1 + c.num2;
	c.sub = c.num1 - c.num2;
	ASSERT_EQ(c.sum, c.sub);
}

TEST(NumberTest, multdivtest)
{
	complexType c;
	cin >> c.num1;
	cin >> c.num2;
	c.mult = c.num1 * c.num2;
	c.div = c.num1 / c.num2;
	ASSERT_EQ(c.num1, c.num2);
}


