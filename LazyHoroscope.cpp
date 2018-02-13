//Authors: Joshua Pierce
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string first, last;
    int lucky;
	cout << "What is your first name?" << endl;
	cin >> first;
	cout << "What is your last name?" << endl;
	cin >> last;

    cout << "Welcome, " << first[0] << "." << last[0] << "." << ", here is your fortune..." << endl;
    lucky = first.length();
    cout << "The variable has " << lucky << " letters." << endl;
    cout << "Your lucky number is " << lucky << endl;

  return 0;
}
