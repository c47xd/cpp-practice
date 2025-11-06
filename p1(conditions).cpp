#include<iostream>
#include<cmath>
using namespace std;
int main(){

    /*    LOGIC      */
    int a,b,c;
    cout<<"Enter 3 numbers \n";
    cin>>a>>b>>c;
    float sqrtC;
    enum state{locked = 0,opened};
    state statusDoor1 = locked;
    state statusDoor2 = locked;
    state statusDoor3 = locked;

    bool isAprime,isCpersq;
    // FOR DOOR 1
    if(a == 1 || a < 0){
        statusDoor1 = locked;
    }else {
        for ( int i = 2 ; i < sqrt(a) ; ++i){
            isAprime = false;
            if(a%i == 0){
            isAprime = true;
        }
        // else{isAprime = false;}
    }
    if(isAprime && a<b){
        statusDoor1 = opened;
    }
}
   // FOR DOOR 2
   if(((b%2 == 0 && c%2 != 0) || (b%2 != 0 && c%2 == 0)) && ((b+c)%3 == 0) ){

    statusDoor2 = opened;
   }
   // FOR DOOR 3 
   sqrtC = sqrt(c);
   if((int)sqrtC == sqrtC){
    isCpersq = true;
   }else{isCpersq = false;}
   bool final_a = a>50;
   bool final_b = b>=10 && b<=20;
   if(final_a + final_b + isCpersq == 1){
    statusDoor3 = opened;
   }else{
    statusDoor3 = locked;
   }

   //final output

    if(statusDoor1){cout<<"Door 1 : OPEN \n";}else{cout<<"Door 1 : CLOSED \n";}
    if(statusDoor2){cout<<"Door 2 : OPEN \n";}else{cout<<"Door 2 : CLOSED \n";}
    if(statusDoor3){cout<<"Door 3 : OPEN \n";}else{cout<<"Door 3 : CLOSED \n";}








    return 0;
}