#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand (time(NULL));
	char bot[3] = {'s','r','p'};
	char player;
	char bot_choose = bot[rand()%3];
	cout << "s = scissors, r = rock, p = paper"<<endl;
	cin >>player;
	cout<<"bot choose = "<< bot_choose<<endl;
	if (player == bot_choose)
	{
		cout<<"Draw";
	}


	

	
	
}
