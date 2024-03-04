#include<iostream>
#include<string>
using namespace std;
int main(){
    const int size=100;
    string players[size][2];
    int numberofitem=-1,choice;
    string name, score;
    cout<<"Choose operation:"<<endl;
    cout<<"\t 1- Add player's score. \n\t 2- Update player's score."<<endl;
    cout<<"\t 3- Print player's score. \n\t 4- Delete player's score."<<endl;
    cout<<"5- End"<<endl;
    cin>>choice;
    while (choice!=5)
    {
        switch (choice)
        {
        case 1:
            if(numberofitem<size){
                cout<<"Enter name and score:";
                cin>>name>>score;
                numberofitem++;
                players[numberofitem][0]=name;
                players[numberofitem][1]=score;
            }
            else {
                cout<<"The array is full. You need to Delete items."<<endl;
            }
            break;
            case 2:
            cout<<"Enter player name to update:";
            cin>>name;
            for(int i=0;i<numberofitem;i++){
                if(players[i][0]==name){
                    cout<<"Enter new score:";
                    cin>>score;
                    players[i][1]=score;
                    cout<<"\n player"<<(i+1)<<" "<<players[i][0]<<"score update to:"<<players[i][1];
                    cout<<endl;
                    break;
                }
            }
            break;
            case 3:
            for(int i=0;i<numberofitem;i++){
                cout<<"player:"<<(i+1)<<"\t"<<players[i][0]<<"\t"<<players[i][1]<<endl;
            }
            cout<<endl;
            break;
            case 4:
            if(numberofitem>=0){
                cout<<"\n Enter player name to Delete:";
                cin>>name;
                for(int i=0;i<=numberofitem;i++){
                    if(players[i][0]==name){
                        for(int j=0;j<numberofitem;j++){
                            players[j][0]=players[j+1][0];
                            players[j][1]=players[j+1][1];
                        }
                        numberofitem--;
                        cout<<"\n player delete.";
                        break;
                    }
                }

            }
            break;
        default:
        cout<<"Inccorrect menu option.";
        }
        cout<<"Choose operation:"<<endl;
        cout<<"\t 1- Add player's score. \n\t 2- Update player's score."<<endl;
        cout<<"\t 3- Print player's score. \n\t 4- Delete player's score."<<endl;
        cout<<"5- End"<<endl;
        cin>>choice;
    }
    return 0;
}