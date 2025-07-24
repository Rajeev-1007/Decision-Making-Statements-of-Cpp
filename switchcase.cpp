
#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"1.Manchester United"<<endl<<"2.Fc Barcelona"<<endl<<"3.Real Madrid"<<endl<<"4.Bayern Munich"<<endl<<"5.AC Milan"<<endl<<"6.Liverpool"<<endl<<"7.Other"<<endl<<"Enter a choice to choose your favourite football club: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Machester United";
        break;
        case 2:
        cout<<"FC Barcelona";
        break;
        case 3:
        cout<<"Real Madrid";
        break;
        case 4:
        cout<<"Bayern Munich";
        break;
        case 5:
        cout<<"AC Milan";
        break;
        case 6:
        cout<<"Liverpool";
        break;
        case 7:
        cout<<"Some other team";
        break;
        default:
        cout<<"Wrong choice";
        break;
    }
    return 0;
}