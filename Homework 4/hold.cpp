//int digit(int x)
//{
//	int digit = 1;
//	if (x == 0)
//		return 0;
//
//	for (int i = 10; i < x; i + 10)
//	{
//		digit++;
//		if (x <= 10 * i)
//			break;
//	}
//	return digit;
//}
//
//bool ReadLine(std::string& str)
//{
//	std::getline(std::cin, str);
//
//	if (str != "")
//		return true;
//
//	return false;
//}
//
//unsigned stringToTokenWS(std::vector <std::string>& tokens)
//{
//	int tt = 0;
//	for (string s : tokens)
//	{
//		std::istringstream v(s);
//		int x;
//
//		v >> x;
//		tt + digit(x);
//		continue;
//	}
//	return tt;
//}
//void analyzeTokens(const std::vector <std::string>& tokens)
//{
//	std::string type;
//
//	for (std::string s : tokens)
//	{
//		if (s == "")
//			type = "whitespace";
//		else if (std::istringstream(s))
//			type = "integer";
//		else
//			type = "string";
//		cout << "\"" << s << "\" - " << type << endl;
//	}
////}
//
//int main()
//{
//	cout << "Please type in some text. When you are done, type end" << endl;
//
//	vector <std::string> mv = { "HelloWorld","Sonic1991", "$$$$","012345689" };
//
//	cout << "Testing ReadLine():\n";
//	for (std::string x : mv)
//	{
//		ReadLine(x);
//		cout << "\n";
//	}
//	cout << "\n\n\n\n";
//
//	cout << "Testing stringToTokenWS():\n";
//	stringToTokenWS(mv);
//	cout << "\n\n\n\n";
//
//	cout << "Testing analyzeTokens(): \n";
//	analyzeTokens(mv);
//}
////*