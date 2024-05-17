#include <iostream>
#include <string>
#include<map>
#include<vector>
#include<sstream>
#include<stack>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
	int numberOfRecites;
	cin >> numberOfRecites;
	vector<int> RecitesValues;
	vector<int>MissingValues;
	for (int i = 0; i < numberOfRecites; i++) {
		int n;
		cin >> n;
		RecitesValues.push_back(n);
	}
	sort(RecitesValues.begin(), RecitesValues.end());
    
	vector<int>::iterator it;

	for (int i = 1; i < RecitesValues[RecitesValues.size() - 1] + 1; i++) {
		it = find(RecitesValues.begin(), RecitesValues.end(), i);
		if (it == RecitesValues.end()) {
			MissingValues.push_back(i);
			cout << i<<endl;
		}		
	}
	if (MissingValues.size() == 0) {
		cout << "good job";
	}
}