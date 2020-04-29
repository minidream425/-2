#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int n[5] = { 3,9,5,2,5 };
			int fuh = 1;
			int rang = 100;
			int intiger = 0;
			int bracket = 0;
			int way = 0;
			char fuh[1] = { '+' };
			char output[14] = { 0 };
			int i = 0, j = 0;
			if (intiger == 0)
			{
				if (way == 0)
				{
					if (bracket == 0)
					{
						for (i = 0, j = 0; i < 14; i++, j++)
						{
							output[i] = n[j] + '0';
							if (i < 14)
							{
								output[i + 1] = fuh[j];
							}
							i++;
						}
					}
				}
			}
			char result[14] = { '3','+','9','+','5','+','2','+','5','=' };
			Assert::AreEqual(result, output);
		}
		TEST_METHOD(TestMethod2)
		{
			int n[7] = { 3,7,8,9,8,5,3 };
			int fuh = 1;
			int rang = 10;
			int intiger = 0;
			int bracket = 0;
			int printstyle = 0;
			char fuhao[1] = { '+' };
			char output[14] = { 0 };
			int i = 0, j = 0;
			if (intiger == 0)
			{
				if (printstyle == 0)
				{
					if (bracket == 0)
					{
						for (i = 0, j = 0; i < 14; i++, j++)
						{
							output[i] = n[j] + '0';
							if (i < 14)
							{
								output[i + 1] = fuhao[j];
							}
							i++;
						}
					}
				}
			}
			char result[14] = { '3','+','7','+','8','+','9','+','8','+','5','+','3','=' };
			Assert::AreEqual(result, output);
		}
	};
}