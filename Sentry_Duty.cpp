#include<iostream>
#include<conio.h>
using namespace std;
main()
{   
   
   string week[7]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"} ,day;
   
   int startSentryDuty,numberDays,sentryDutyNumber,storage=0,stopCondition;
   while(1)
   {
       cout<<"Enter a start day of Sentry duty :";
       cin>>day;
          
       cout<<"How many times are repeated your Sentry duty ";
       cin>>numberDays;
   
       cout<<"Enter number of Sentry duty if you know the start Sentry duty is "<<day<<": ";
       cin>>sentryDutyNumber;
       
       for(int i=0;i<7;i++)
           if(day==week[i])
              startSentryDuty=i;
           
       startSentryDuty++;
   
       for(int y=0;y<(sentryDutyNumber-1);y++)
       {
	   
            for(int j=0;j<=numberDays;j++)

   	            storage=(startSentryDuty++)%7;  
	    }  

        cout<<week[storage]<<"  "<<storage<<endl;
        
        cout<<"Enter 0 to Exit 1 to continue :";
        cin>>stopCondition;
        if(stopCondition==0)
           break;
        else if(stopCondition==1)
		   continue;          
        
   }
   
getch();
}
