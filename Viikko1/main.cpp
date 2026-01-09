#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum){
    int attempts=0;
    int random_number=rand()%maxnum+1;
    int guess;
    while(1){
        cout << "Guess number: " << endl;
        cin >> guess;
        attempts++;
        if(guess>random_number){
            cout<<"Your number is bigger. Try again."<<endl;
        }
        else if(guess<random_number){
            cout<<"Your number is smaller.Try again." << endl;
        }
        else if(guess==random_number){
            cout<<"Your number is right!"<<endl;
            break;
        }
    }
    return attempts;
}
int main()
{
    srand(time(0));
    int maxnum=40;
    int result=game(maxnum);
    cout<<"Your attempts:"<<result<<endl;
    return 0;
}

