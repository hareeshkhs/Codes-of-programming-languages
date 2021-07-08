/*roject about billing in shop
******************************************************************/
#include <iostream>
#include<string.h>
using namespace std;
const int m=100;
class ITEMS
{
    int itemcode[m];
    float itemcost[m];
    string itemname[m];
    int count=0;
    public:
    void getitem();
    void displaysum();
    void remove();
    void displayitems();
    void displayremainitems();
    void quit();
};
inline void ITEMS::getitem()
{
    cout<<"enter item code:";
    cin>>itemcode[count];
    cout<<"enter item name:";
    cin>>itemname[count];
    cout<<"enter item cost:";
    cin>>itemcost[count];
    count++;
}
inline void ITEMS::displaysum()
{
    float sum=0;
    for(int i=0;i<count;i++)
    {
        sum=sum+itemcost[i];
    }
    cout<<"\nTotal value of items:"<<sum<<endl;
}
inline void ITEMS::remove()
{
    int a;
    int h=0;
    cout<<"enter item code:";
    cin>>a;
    for(int j=0;j<count;j++)
    {
        if(itemcode[j]==a)
        {
            int k=j;
            for(int i=k;i<count;i++)
            {
                itemcode[i]=itemcode[i+1];
                itemname[i]=itemname[i+1];
                itemcost[i]=itemcost[i+1];
            }
            cout<<"successfully deleted!!!\n";
            count--;
        }
    }
}
inline void ITEMS::displayitems()
{
    cout<<"\ncode    name    price\n";
    for(int i=0;i<count;i++)
    {
        cout<<"\n"<<itemcode[i];
        cout<<"    "<<itemname[i];
        cout<<"    "<<itemcost[i];
    }
    cout<<"\n";
}
inline void ITEMS::displayremainitems()
{
    cout<<"\ncode    name    price\n";
    for(int i=0;i<count;i++)
    {
        cout<<"\n"<<itemcode[i];
        cout<<"    "<<itemname[i];
        cout<<"    "<<itemcost[i];
    }
    cout<<"\n";
}
inline void ITEMS::quit()
{
    cout<<"\nthank you for your coming!!!";
    cout<<"\ncome again!!!\n"<<"have a nice day!!!\n";
}
int main()
{
    ITEMS order;
    int h;
    do
    {
        cout<<"*********************************************";
        cout<<"\nwelcome to khs mall:";
        cout<<"\n1:Add an item:";
        cout<<"\n2:Display total value: ";
        cout<<"\n3:Display all items: ";
        cout<<"\n4:Delete an item: ";
        cout<<"\n5:Display remaining all items: ";
        cout<<"\n6:quit";
        cout<<"\nenter your choice: ";
        cin>>h;
        switch(h)
        {
            case 1:order.getitem();
            break;
            case 2:order.displaysum();
            break;
            case 3:order.displayitems();
            break;
            case 4:order.remove();
            break;
            case 5:order.displayremainitems();
            break;
            case 6:order.quit();
            break;
            default:
                cout<<"error in your choice:try again\n";
        }
    }while(h!=6);
     cout<<"\n*********************************************";
    return 0;
}
//*********************************************************************************************

