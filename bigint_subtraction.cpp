#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char A[1024]={};
    char B[1024]={};
    cout<<"Enter two numbers : \n";
    cin>>A;
    cin>>B;
    
    //Making both numbers of same length
    int lenA , lenB;
    lenA = strlen(A);
    lenB = strlen(B);
    
    if(lenA > lenB){
        char reversedB[lenA+2]={};
        for(int i = 0 ; i < lenB ; i ++){
            reversedB[i] = B[lenB-1-i];
            B[lenB-1-i] = 0;
        }
        
        for(int i = 0 ; i < lenA-lenB ; i++){
            reversedB[strlen(reversedB)] = '0';
        }
        reversedB[lenA+1] = '\0';
        for(int i = 0 ; i < strlen(reversedB) ; i++){
            B[i] = (int)reversedB[strlen(reversedB)-1-i];
        }
        B[lenA+1] = '\0'; 
    }
    
    if(lenB > lenA){
        char reversedA[lenB+2] = {};
        for(int i = 0 ; i < lenA ; i ++){
            reversedA[i] = A[lenA-1-i];
            A[lenA-1-i] = 0;
        }
        for(int i = 0 ; i < lenB-lenA ; i++){
            reversedA[strlen(reversedA)] = '0';
        }
        reversedA[lenB+1] = '\0';

        for(int i = 0 ; i < strlen(reversedA) ; i++){
            A[i] = reversedA[strlen(reversedA)-1-i];
        }
        A[lenB+1] = '\0'; 
    }
    
    lenA = strlen(A);
    lenB = strlen(B);


    //Subtraction logic

    int temp1, temp2, borrow;
    char tempArr[lenA+50] = {};
    borrow = 0;
    bool isAbigger = false , isBbigger = false;
    for(int i = 0 ; i < strlen(A) ; i++){
        if(A[i] > B[i]){isAbigger = true;break;}
        else if(A[i]<B[i]){isBbigger = true ; break;}
    }   



    borrow =0;
    
    if(isAbigger){
        for(int i = 0 ; i < lenA ; i++){
            temp1 = (int)(A[lenA-1-i] - '0');
            temp2 = (int)(B[lenA-1-i] - '0');
            if(temp1 + borrow >= temp2){
                tempArr[i] = temp1-temp2+borrow;
                borrow = 0;
            }
            else{
                tempArr[i] = (temp1+10) - temp2 + borrow;
                borrow = -1;
            }
        }
    } else {
        for(int i = 0 ; i < lenA ; i++){
            temp1 = (int)(B[lenA-1-i] - '0');
            temp2 = (int)(A[lenA-1-i] - '0');
            if(temp1 + borrow >= temp2){
                tempArr[i] = temp1-temp2+borrow;
                borrow = 0;

            }
            else{
                tempArr[i] = (temp1+10) - temp2+borrow;
                borrow = -1;
            }
        }
    } 
    cout<<"The answer is : \n";
    tempArr[lenA] = '\0';
    int no0index = 0,i=lenA;
    while(tempArr[i] == 0 && i>0){no0index++;i--;}
    if(isAbigger || (!isAbigger && !isBbigger)){
        for(int i = lenA-no0index ; i >=0 ; i--){
            cout<<(int)tempArr[i];
        }
    } else {
        cout<<'-';
        for(int i = lenA-no0index ; i >=0 ; i--){
            cout<<(int)tempArr[i];
        }
    }
    cout<<endl;
    return 0;
}
