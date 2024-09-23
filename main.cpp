#include <iostream>
using namespace std;
int main()
{
 int grosssalary;
    int tax;
    double netsalary;
    double taxpayable;

    cout<<"enter the grosssalary:";
    cin>>grosssalary;

    if(grosssalary<=15000) {
        taxpayable= 0;
        netsalary = grosssalary;
        cout<<"the net salary is"<<grosssalary<<endl;
        cout<<"the taxpayable is "<<taxpayable<<endl;
    }
 else if (grosssalary<=40000) {
        taxpayable = ((grosssalary - 15000)*0.5);
        netsalary = grosssalary-taxpayable;
     cout<<"the net salary is"<<netsalary<<endl;
     cout<<"the taxpayable is " <<taxpayable<<endl;

 }
else if(grosssalary<=70000) {
    taxpayable= ((grosssalary - 15000)*0.5 +sdeeere4  )
    netsalary= grosssalary-taxpayable;

    cout<<"the netsalary is "<<netsalary<<endl;
    cout<<"the taxpayable is "<<taxpayable<<endl;
}

else if( grosssalary<=105000) {
    taxpayable=0.25*grosssalary;
    netsalary=grosssalary-taxpayable;

    cout<<"the netsalary is "<<netsalary<<endl;
    cout<<"the taxpayable is "<<taxpayable<<endl;
}

    else if(grosssalary>105000) {
        taxpayable=0.3* grosssalary;
        netsalary=grosssalary-taxpayable;

        cout<<"the net salary is "<<netsalary<<endl;
        cout<<" the tax payable is "<<taxpayable<<endl;
    }

    return 0;
}
