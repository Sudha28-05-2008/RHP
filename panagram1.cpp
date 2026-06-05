#include <iostream>
using namespace std;

int main()
{
string s;
getline(cin, s);

bool present[26] = {false};
int count = 0;

for(char ch : s)
{
if(isalpha(ch))
{
ch = tolower(ch);

if(!present[ch - 'a'])
{
present[ch - 'a'] = true;
count++;
}
}
}

if(count == 26)
cout << "Pangram";
else
cout << "Not Pangram";

return 0;
}
