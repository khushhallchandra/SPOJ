#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {
	int temp, i, j;
	vector<string> arr[62];
	string str,t;
	cin>>str;

	int len = str.length();
	for(i =len-1;i>=0;i--){
		if(str[i]>='0'&&str[i]<='9')
			temp = str[i]-'0';
		else
		if(str[i]>='A'&&str[i]<='Z')
			temp = str[i]-'A' + 10;
		else
		if(str[i]>='a'&&str[i]<='z')
			temp = str[i]-'a' + 36;

		t= str.substr(i);
		vector<string>::iterator it = std::upper_bound( arr[temp].begin(), arr[temp].end(), t);
		arr[temp].insert( it, t );
	}

	for(i=0;i<62;i++)
		for(j=0;j<arr[i].size();j++)
		    printf("%d\n", (int)(len-arr[i][j].size()));	

	return 0;
}