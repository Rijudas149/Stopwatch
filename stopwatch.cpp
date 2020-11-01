//Project name---> STOPWATCH
//Used Language---> C++


#include<bits/stdc++.h>
#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int main(){
    system("CLS");
    int hour=0,minute=0,second=0;
    cout<<"\n\t\t-------WELCOME TO STOPWATCH---------\n\n"<<endl;
    Sleep(1000);
    cout<<"\n\t\tTHE CURRENT STATUS OF THE STOPWATCH IS-\n\n"<<endl;
    Sleep(1000);
    cout<<"\n\t\t\tHH :: MM :: SS"<<endl;
    Sleep(1000);
    cout<<"\n\t\t\t "<<hour<<" :: "<<" "<<minute<<" :: "<<" "<<second<<endl;
    Sleep(2000);
    cout<<"\n\t\t ___PRESS ANY KEY TO START___"<<endl;
    _getch();
    while(!_kbhit()){
    	second++;
  Sleep(1000);
  if(second>59)
  {
   minute++;
   second=0;
  }
  if(minute>59)
  { 
    hour++;
    minute=0;
	}
	system("CLS");
	cout<<"\n\t\t-------WELCOME TO STOPWATCH---------\n\n"<<endl;
    //Sleep(1000);
    cout<<"\n\t\tTHE CURRENT STATUS OF THE STOPWATCH IS-\n\n"<<endl;
   // Sleep(1000);
    cout<<"\n\t\t\tHH :: MM :: SS"<<endl;
   // Sleep(1000);
    cout<<"\n\t\t\t "<<hour<<" :: "<<" "<<minute<<" :: "<<" "<<second<<endl;
    //Sleep(2000);
    cout<<"\n\t\t ___PRESS ANY KEY TO STOP___"<<endl;
}
_getch();
cout<<"\n\t\tTHE TIME AFTER PAUSING IS-\n\n"<<endl;
    Sleep(1000);
    cout<<"\n\t\t\tHH :: MM :: SS"<<endl;
    Sleep(1000);
    cout<<"\n\t\t\t "<<hour<<" :: "<<" "<<minute<<" :: "<<" "<<second<<"\n\n"<<endl;
   cout<<"-------THANKS FOR USING STOPWATCH!!!!!---------\n\n"<<endl;
   Sleep(1000);
   cout<<"___________________________________________________"<<endl;
    return 0;
}
