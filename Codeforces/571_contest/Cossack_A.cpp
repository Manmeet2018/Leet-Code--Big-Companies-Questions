//M1
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	if(n <= min(m,k))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}

//M2
/* 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	if(n <= m && n <= k)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
*/
