#include<iostream>
#include<windows.h>
using namespace std;

class DigitalGame
{
public:
    void start()
    {
        cout<<"===============================================";
        cout<<"\n||          Welcome To Digital Game          ||";
        cout<<"\n===============================================\n\n";

        Sleep(2000);

        cout<<"\n\n          -Game Rules-          ";
        Sleep(1000);
        cout<<"\n1.The game starts with 21 sticks.";
        Sleep(1000);
        cout<<"\n2.The player and computer will play one by one.";
        Sleep(1000);
        cout<<"\n3.In each turns, A player can take upto 4 sticks.";
        Sleep(1000);
        cout<<"\n4.The computer will also take upto 4 sticks.";
        Sleep(1000);
        cout<<"\n5.The sticks that are picked are removed from the total sticks.";
        Sleep(1000);
        cout<<"\n6.The turns continue until only one stick is left.";
        Sleep(1000);
        cout<<"\n7.The player who is forced to take the last stick is the looser.";

        int Choice;

a:
        Sleep(2000);

        cout<<"\n\n          -Game Menu-          ";
        Sleep(1000);
        cout<<"\n1.Start Game";
        Sleep(1000);
        cout<<"\n2.Exit";
        cout<<"\n\nSelect : ";
        cin>>Choice;

        if(Choice==1)
        {
            playGame();
            goto a;
        }
        else if(Choice==2)
        {
            Sleep(1000);
            cout<<"\n\n     -----Thank You for Visit-----";
        }
    }

private:
    void playGame()
    {
        int UserSticks;
        int TotalSticks=21;
        int ComputerSticks;
        int RemainSticks=0;
        int count=0;
        int count1=0;
        int choice1;

        Sleep(2000);
        cout<<"\n\n          Let's Start The Game!!          \n\n";
        Sleep(1000);
        cout<<"Total Stick : 21\n\n";

        for(;;)
        {
            int i;

            for(i=1;i<=(TotalSticks-(count+count1));i++)
            {
                cout<<"O  ";
            }

            cout<<"\n";

            for(i=1;i<=(TotalSticks-(count+count1));i++)
            {
                cout<<"|  ";
            }

            cout<<"\n";

            for(i=1;i<=(TotalSticks-(count+count1));i++)
            {
                cout<<"|  ";
            }

            cout<<"\n\nEnter Sticks Number(Upto 4) : ";
            cin>>UserSticks;
            cout<<"\n";

            if(UserSticks>=5)
            {
                Sleep(1000);
                cout<<"Sorry You can enter sticks Upto 4!!";
                break;
            }

            count=count+UserSticks;

            for(i=1;i<=UserSticks;i++)
            {
                cout<<"O  ";
            }

            cout<<"\n";

            for(i=1;i<=UserSticks;i++)
            {
                cout<<"|  ";
            }

            cout<<"\n";

            for(i=1;i<=UserSticks;i++)
            {
                cout<<"|  ";
            }

            ComputerSticks=5-UserSticks;
            count1=count1+ComputerSticks;

            Sleep(1000);

            cout<<"\n\nComputer Enter "<<ComputerSticks<<" Sticks\n";
            cout<<"\n";

            Sleep(1000);

            for(i=1;i<=ComputerSticks;i++)
            {
                cout<<"O  ";
            }

            cout<<"\n";

            for(i=1;i<=ComputerSticks;i++)
            {
                cout<<"|  ";
            }

            cout<<"\n";

            for(i=1;i<=ComputerSticks;i++)
            {
                cout<<"|  ";
            }

            RemainSticks=TotalSticks-(count+count1);

            Sleep(1000);

            cout<<"\n\nRemainSticks : "<<RemainSticks<<"\n\n";

            Sleep(1000);

            if(RemainSticks==1)
            {
                cout<<"\n\n----------------------------------------";
                cout<<"\n|          Sorry You are Looser!!       |";
                cout<<"\n----------------------------------------";
                cout<<"\n\nDo you want Play again??(Press 1 for Yes/Press 2 for No)\n";
                cin>>choice1;

                if(choice1==2)
                {
                    break;
                }
                else if(choice1==1)
                {
                    RemainSticks=0;
                    count=0;
                    count1=0;
                    TotalSticks=21;
                    playGame(); // restart game
                    return;
                }
            }
        }
    }
};

int main()
{
    DigitalGame obj;
    obj.start();
    return 0;
}