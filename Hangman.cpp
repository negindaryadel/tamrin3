#include <iostream>
#include<time.h>
#include <cstdlib>

using namespace std;

int main()
{
  string words[3] = { "computer","console","desktop" };
   string word , userinput[12];
   int random;
   char letter;
   srand(time(0));
   random= rand()%3;
   word=words[random];
   for (int i = 0; i < word.size(); i++) {
		cout << "-" << '\t';
	}
	cout<<endl << "enter letter"<<endl;
	cin>>letter;
	for (int i = 0; i < word.size(); i++) {
		if (letter == word[i]) {
			userinput[i] = letter;
		}
	}
	for (int i = 0; i < word.size(); i++)
	{
		cout << userinput;


	if (word == userinput[i]) {
		break;
	}
}
   if (word == userinput) {
    cout << "\nYou won!" << endl;
    }

	else  cout <<"\n"<<word <<"\ngameover!" << endl;



	return 0;

}

