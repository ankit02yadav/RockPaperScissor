#include <bits/stdc++.h>
using namespace std;
int main(){
    while (1)
    {
        srand(time(0)); // we have to give him a seed to generate random things so we gave time its always change
        char options[] = {'R','P','S'};
        char ComputerChoice = options[rand() % 3];
        char YourChoice;
        int choice;
        cout<<"\nRock Paper Scissor Game \n";
        cout<<"1. Rock\n";
        cout<<"2. Paper\n";
        cout<<"3. Scissor\n";
        cout<<"4. Anything to exit\n";
        cout<<"Enter Your Choice : ";
        if(cin>>choice){
            if(choice==1){
                YourChoice = 'R';
            }
            else if(choice == 2){
                YourChoice = 'P';
            }
            else if(choice == 3){
                YourChoice = 'S';
            }
            else{
                cout<<"Invalid Input";
                break;
            }
        }else{
            cout<<"Invalid input \n";
            break;
        }

        if(YourChoice == 'S'){
            if(ComputerChoice == 'R'){
                cout<<"You Loose Computer Choice is : Rock";
            }
            else if(ComputerChoice == 'P'){
                cout<<"You Win Computer Choice is : Paper";
            }
            else{
                cout<<"Its a Tie Computer Choice is : Scissor";
            }
        }
        else if(YourChoice == 'R'){
            if(ComputerChoice == 'P'){
                cout<<"You Loose Computer Choice is : Paper";
            }
            else if(ComputerChoice == 'S'){
                cout<<"You Win Computer Choice is : Scissor";
            }
            else{
                cout<<"Its a Tie Computer Choice is : Rock";
            }
        }
        else if(YourChoice == 'P'){
            if(ComputerChoice == 'S'){
                cout<<"You Loose Computer Choice is : Scissor";
            }
            else if(ComputerChoice == 'R'){
                cout<<"You Win Computer Choice is : Rock";
            }
            else{
                cout<<"Its a Tie Computer Choice is : Paper";
            }
        }
    }
    return 0;
}