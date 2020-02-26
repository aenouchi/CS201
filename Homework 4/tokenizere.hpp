
#ifndef TOKENIZERe_Hpp
#define TOKENIZERe_Hpp

#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::istringstream;
using std::string;
using std::vector;

bool ReadLine(string& str);
unsigned StringToTokensWS(string& input, vector<string>& tokens);
void AnalyzeTokens(vector<string>& tokens);

#endif