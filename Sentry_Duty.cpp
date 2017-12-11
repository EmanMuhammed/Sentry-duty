#include<iostream>
#include<conio.h>
using namespace std;
main()
{   
   
   string week[7]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
   
   int startSentryDuty,numberDays,sentryDutyNumber,storage=0;
   while(1)
   {
   
       cout<<"Enter number (0-6) start whirlpool:";
       cin>>startSentryDuty;
   
       cout<<"How many times you have whirlpool";
       cin>>numberDays;
   
       cout<<"Enter number of whirlpool";
       cin>>sentryDutyNumber;
   
       startSentryDuty++;
   
       for(int y=0;y<(sentryDutyNumber-1);y++)
       {
	   
            for(int j=0;j<=numberDays;j++)

   	            storage=(startSentryDuty++)%7;  
	    }  

        cout<<week[storage]<<"  "<<storage<<endl;
   }
   
getch();
}
