#ifndef ANS_H
#define ANS_H
#include <string>
using namespace std;
class Ans {
public:
	string answer;
	bool solve(vector<double> nums, vector<string> expr);
};
#endif
