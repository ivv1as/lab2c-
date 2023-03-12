#include <iostream>
#include <string>
#include <stack>
#include <sstream>

int main()
{
	std::string str;
	getline(std::cin, str);
	std::stringstream ss(str);
	std::stack<int> st;
	for (int i = 0; i < str.size(); i++)
	{
		if (isdigit(str[i])) st.push(str[i] - 48);
		else if (isspace(str[i])) continue;
		else
		{
			int a, b = 0;
			a = st.top();
			st.pop();
			b = st.top();
			st.pop();
			if (str[i] == '+') {
				st.push(a + b);
			}
			else {
				if (str[i] == '-') {
					st.push(b - a);
				}
				else {
					st.push(a * b);
				}
			}
		}
	}
	std::cout << st.top();
	return 0;
}
