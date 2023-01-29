#include"iostream"
using namespace std;
int main()
{
    int quant;
    int choice;
    //QUnatity
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
    //fooed item sold
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
    //total price
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;
    cout<<"\n\t Quantity of item we have ";
    cout<<"\n Rooms available ";
    cin>>Qrooms;
    cout<<"\n Quantity of Pasta ";
    cin>>Qpasta;
    cout<<"\n Quantity of Burger ";
    cin>>Qburger;
    cout<<"\n Quantity of Noodles ";
    cin>>Qnoodles;
    cout<<"\n Quantity of Shakes ";
    cin>>Qshake;
    cout<<"\n Quantity of Chicken Rolls ";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\t Please select from the given menu options";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burgers";
    cout<<"\n4) Noodels";
    cout<<"\n5) Shake";
    cout<<"\n6) Chiken-rolls";
    cout<<"\n7) Information regarding sales and collections ";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter your choice!!!";
    cin>>choice;

    switch (choice)
    {
        case 1: 
            cout<<"\n\n Enter the number of rooms you want: ";
                cin>>quant;
                if(Qrooms-Srooms>=quant)
                {
                    Srooms=Srooms+quant;
                    Total_rooms=Total_rooms+quant*1200;
                    cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you! ";
                }
                else
                
                    cout<<"\n\t Only "<<Qrooms-Srooms<<" Rooms remaining in hotel";
                    break;
        case 2: 
            cout<<"\n\n Enter Pasta Quantity : ";
                cin>>quant;
                if(Qpasta-Spasta>=quant)
                {
                    Spasta=Spasta+quant;
                    Total_pasta=Total_pasta+quant*250;
                    cout<<"\n\n\t\t"<<quant<<" pasta is the order ! ";
                }
                else
                
                    cout<<"\n\t Only "<<Qpasta-Spasta<<" pasta remaining in the hotel";
                    break;
        case 3: 
            cout<<"\n\n Enter Burger Quantity : ";
                cin>>quant;
                if(Qburger-Sburger>=quant)
                {
                    Sburger=Sburger+quant;
                    Total_burger=Total_burger+quant*120;
                    cout<<"\n\n\t\t"<<quant<<" Burger is the order ! ";
                }
                else
                
                    cout<<"\n\t Only "<<Qburger-Sburger<<" Burger remaining in the hotel";
                    break;
        case 4: 
            cout<<"\n\n Enter Noodles Quantity : ";
                cin>>quant;
                if(Qnoodles-Snoodles>=quant)
                {
                    Snoodles=Snoodles+quant;
                    Total_noodles=Total_noodles+quant*140;
                    cout<<"\n\n\t\t"<<quant<<" Noodles is the order ! ";
                }
                else
                
                    cout<<"\n\t Only "<<Qnoodles-Snoodles<<" Noodles remaining in the hotel";
                    break;
        case 5: 
            cout<<"\n\n Enter Shakes Quantity : ";
                cin>>quant;
                if(Qshake-Sshake>=quant)
                {
                    Sshake=Sshake+quant;
                    Total_shake=Total_shake+quant*120;
                    cout<<"\n\n\t\t"<<quant<<" shkes is the order ! ";
                }
                else
                
                    cout<<"\n\t Only "<<Qshake-Sshake<<" shakes remaining in the hotel";
                    break;
        case 6: 
            cout<<"\n\n Enter Chicken-rools Quantity : ";
                cin>>quant;
                if(Qchicken-Schicken>=quant)
                {
                    Schicken=Schicken+quant;
                    Total_chicken=Total_chicken+quant*150;
                    cout<<"\n\n\t\t"<<quant<<" chicken-rolls is the order ! ";
                }
                else
                
                    cout<<"\n\t Only "<<Qchicken-Schicken<<" chicken-rolls remaining in the hotel";
                    break;
        
        case 7:
            cout<<"\n\t\tDetails of sales and collections ";
            cout<<"\n\n Number of rooms we had : "<<Qrooms;
            cout<<"\n\n Number of rooms we gave for rent  : "<<Srooms;
            cout<<"\n\n Remaining rooms :"<<Qrooms-Srooms;
            cout<<"\n\n Total rooms collection for day: "<<Total_rooms;

            cout<<"\n\n Number of pasta we had : "<<Qpasta;
            cout<<"\n\n Number of rooms we sold  : "<<Spasta;
            cout<<"\n\n Remaining pasta :"<<Qpasta-Spasta;
            cout<<"\n\n Total pasta collection for day: "<<Total_pasta;

            cout<<"\n\n Number of Burgers we had : "<<Qburger;
            cout<<"\n\n Number of rooms we sold : "<<Sburger;
            cout<<"\n\n Remaining Burgers :"<<Qburger-Sburger;
            cout<<"\n\n Total rBurgers collection for day: "<<Total_burger;

            cout<<"\n\n Number of Noodles we had : "<<Qnoodles;
            cout<<"\n\n Number of Noodles we sold   : "<<Snoodles;
            cout<<"\n\n Remaining Noodles :"<<Qnoodles-Snoodles;
            cout<<"\n\n Total noodles collection for day: "<<Total_noodles;

            cout<<"\n\n Number of shakes we had : "<<Qshake;
            cout<<"\n\n Number of shakes we sold  : "<<Sshake;
            cout<<"\n\n Remaining shakes :"<<Qshake-Sshake;
            cout<<"\n\n Total shakes collection for day: "<<Total_shake;

            cout<<"\n\n Number of chicken-rolls we had : "<<Qchicken;
            cout<<"\n\n Number of chicken-rolls we sold  : "<<Schicken;
            cout<<"\n\n Remaining chicken-rolls :"<<Qchicken-Schicken;
            cout<<"\n\n Total chicken-rolls collection for day: "<<Total_chicken;

        case 8:
                exit(0);
            
            default:
                cout<<"\n Please select the numbers mention above!! ";

    }
    goto m ;
}