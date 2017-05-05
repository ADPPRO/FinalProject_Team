#include "stdafx.h"
#include "CppUnitTest.h"
#include"Account.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(unittest1)
	{
	public:
		
		
		TEST_METHOD(TEST_getUser)
		{
			account a;
			string name = "helio";
			string pass = "123";
			a.setaccount(name,pass);
			string testName1 = "helio";
			string testName2 = "hi";
			Assert::AreEqual(a.getuser(),testName1);
			Assert::AreNotEqual(a.getuser(), testName2);
		}
		TEST_METHOD(TEST_getPassword)
		{
			account a;
			string name = "helio";
			string pass = "123";
			a.setaccount(name,pass);
			string testPass1 = "123";
			string testPass2 = "1";
			Assert::AreEqual(a.getpassword(), testPass1);
			Assert::AreNotEqual(a.getpassword(), testPass2);
		}
		
	};
}