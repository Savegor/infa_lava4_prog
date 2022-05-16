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
    else if(player == 's')
    {
        if (bot_choose == 'p')
        {
            cout << "You win";
        }
        else if (bot_choose == 'r')
        {
            cout << "You lose";
        }
    }
    else if(player == 'r')
    {
        if (bot_choose == 's')
        {
            cout << "You win";
        }
        else if (bot_choose == 'p')
        {
            cout << "You lose";
        }
    }
        else if(player == 'p')
        {
        if (bot_choose == 'r')
        {
        cout << "You win";
        }
        else if (bot_choose == 's')
        {
        cout << "You lose";
        }
}
	

	
	
}
