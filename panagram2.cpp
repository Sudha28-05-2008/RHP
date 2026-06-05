#include <iostream>
using namespace std;

int main()
{
int n;
cin >> n;

string s;
cin >> s;

bool vis[26] = {false};

for(char c : s)
{
c = tolower(c);
vis[c - 'a'] = true;
}

for(int i = 0; i < 26; i++)
{
if(!vis[i])
{
cout << "NO";
return 0;
}
}

cout << "YES";
return 0;
}
