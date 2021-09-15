#include<iostream>
#include<conio.h>
using namespace std;
void player1(char arr[]){
    // for(int i=0;i<1;i++){
        int cross;
        cout<<"player 1 turn ";
        cin>>cross;
        switch(cross){
            case 1:
                if(arr[0]=='x' || arr[0]=='0'){
                    cout<<"wrong value ";
                    player1(arr);
                }
                else {
                    arr[0]='x';
                
                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}

                break;
             
             case 2:
                 if(arr[1]=='x' || arr[1]=='0'){
                    cout<<"wrong value ";
                    player1(arr);
                }
                else {
                    arr[1]='x';
                
                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
             
             case 3:
              if(arr[2]=='x' || arr[2]=='0'){
                    cout<<"wrong value ";
                    player1(arr);
                }
                else {
                    arr[2]='x';
                
                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
             case 4:
                
                 if(arr[3]=='x' || arr[3]=='0'){
                    cout<<"wrong value ";
                    player1(arr);
                }
                else {
                    arr[3]='x';

                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
             case 5:
                 if(arr[4]=='x' || arr[4]=='0'){
                    cout<<"wrong value ";
                    player1(arr);
                }
                else {
                    arr[4]='x';

                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
            case 6:
             if(arr[5]=='x' || arr[5]=='0'){
                    cout<<"wrong value ";
                    player1(arr);
                }
                else {
                    arr[5]='x';

                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
             case 7:
              if(arr[6]=='x' || arr[6]=='0'){
                    cout<<"wrong value ";
                    player1(arr);
                }
                else {
                    arr[6]='x';

                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
             case 8:
              if(arr[7]=='x' || arr[7]=='0'){
                    cout<<"wrong value ";
                    player1(arr);
                }
                else {
                    arr[7]='x';

                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                    break;
             case 9:
              if(arr[8]=='x' || arr[8]=='0'){
                    cout<<"wrong value ";
                    player1(arr);
                }
                else {
                    arr[8]='x';

                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
            default :
                cout<<"wrong value";

        }

    // }

}

void player2(char arr[]){
    // for(int i=0;i<1;i++){
        int zero;
        cout<<"player 2 turn ";
        cin>>zero;
        switch(zero){
            case 1:
                if(arr[0]=='x' || arr[0]=='0'){
                    cout<<"wrong value ";
                    player2(arr);
                }
                else {
                    arr[0]='0';
                
                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
             
             case 2:
                if(arr[1]=='x' || arr[1]=='0'){
                    cout<<"wrong value ";
                    player2(arr);
                }
                else {
                    arr[1]='0';
                
                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
             
             case 3:
                if(arr[2]=='x' || arr[2]=='0'){
                    cout<<"wrong value ";
                    player2(arr);
                }
                else {
                    arr[2]='0';
                
                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
             case 4:
                if(arr[3]=='x' || arr[3]=='0'){
                    cout<<"wrong value ";
                    player2(arr);
                }
                else {
                    arr[3]='0';

                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
             case 5:
                if(arr[4]=='x' || arr[4]=='0'){
                    cout<<"wrong value ";
                    player2(arr);
                }
                else {
                    arr[4]='0';

                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
            case 6:
            if(arr[5]=='x' || arr[5]=='0'){
                    cout<<"wrong value ";
                    player2(arr);
                }
                else {
                    arr[5]='0';

                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
             case 7:
                if(arr[6]=='x' || arr[6]=='0'){
                    cout<<"wrong value ";
                    player2(arr);
                }
                else {
                    arr[6]='0';

                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
             case 8:
             if(arr[7]=='x' || arr[7]=='0'){
                    cout<<"wrong value ";
                    player2(arr);
                }
                else {
                    arr[7]='0';

                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                    break;
             case 9:
             if(arr[8]=='x' || arr[8]=='0'){
                    cout<<"wrong value ";
                    player2(arr);
                }
                else {
                    arr[8]='0';
                
                    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl; 
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
                    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
                    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;}
                break;
            default :
                cout<<"wrong value";

        }

    // }

}
// void result(char arr[]){
   
// }

int main(){
    char arr[]={ '1','2','3','4','5','6','7','8','9'};
    cout<<"player 1[x]"<<"   "<<"player 2[0]"<<endl;

    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
    cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
    cout<<"-"<<" + "<<"-"<<" + "<<"-"<<endl;
    cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;
    for(int i=0;i<6;i++){
        
        if((arr[0]==arr[1])&&(arr[1]==arr[2])&&(arr[2]=='x')||(arr[3]==arr[4])&&(arr[4]==arr[5])&&(arr[5]=='x')||(arr[6]==arr[7])&&(arr[7]==arr[8])&&(arr[8]=='x')||(arr[0]==arr[3])&&(arr[3]==arr[6])&&(arr[6]=='x')||(arr[1]==arr[4])&&(arr[4]==arr[7])&&(arr[7]=='x')||(arr[2]==arr[5])&&(arr[5]==arr[8])&&(arr[8]=='x')||(arr[0]==arr[4])&&(arr[4]==arr[8])&&(arr[8]=='x')||(arr[2]==arr[4])&&(arr[4]==arr[6])&&(arr[6]=='x')){
            cout<<"player 1 win";
            getch();
            break;

        }
    
        else if((arr[0]==arr[1])&&(arr[1]==arr[2])&&(arr[2]=='0')||(arr[3]==arr[4])&&(arr[4]==arr[5])&&(arr[5]=='0')||(arr[6]==arr[7])&&(arr[7]==arr[8])&&(arr[8]=='0')||(arr[0]==arr[3])&&(arr[3]==arr[6])&&(arr[6]=='0')||(arr[1]==arr[4])&&(arr[4]==arr[7])&&(arr[7]=='0')||(arr[2]==arr[5])&&(arr[5]==arr[8])&&(arr[8]=='0')||(arr[0]==arr[4])&&(arr[4]==arr[8])&&(arr[8]=='0')||(arr[2]==arr[4])&&(arr[4]==arr[6])&&(arr[6]=='0')){
            cout<<"player 2 win";
            getch();
            break;

        }
        else if((arr[0]!='1') && (arr[1]!='2') && (arr[2]!='3') && (arr[3]!='4') && (arr[4]!='5') && (arr[5]!='6') && (arr[6]!='7') && (arr[7]!='8')&&(arr[8]!='9')){
            cout<<"math is draw";
            getch();
            break;
        }
        else{
            player1(arr);
        }
        if((arr[0]==arr[1])&&(arr[1]==arr[2])&&(arr[2]=='x')||(arr[3]==arr[4])&&(arr[4]==arr[5])&&(arr[5]=='x')||(arr[6]==arr[7])&&(arr[7]==arr[8])&&(arr[8]=='x')||(arr[0]==arr[3])&&(arr[3]==arr[6])&&(arr[6]=='x')||(arr[1]==arr[4])&&(arr[4]==arr[7])&&(arr[7]=='x')||(arr[2]==arr[5])&&(arr[5]==arr[8])&&(arr[8]=='x')||(arr[0]==arr[4])&&(arr[4]==arr[8])&&(arr[8]=='x')||(arr[2]==arr[4])&&(arr[4]==arr[6])&&(arr[6]=='x')){
            cout<<"player 1 win";
            getch();
            break;

        }
    
        else if((arr[0]==arr[1])&&(arr[1]==arr[2])&&(arr[2]=='0')||(arr[3]==arr[4])&&(arr[4]==arr[5])&&(arr[5]=='0')||(arr[6]==arr[7])&&(arr[7]==arr[8])&&(arr[8]=='0')||(arr[0]==arr[3])&&(arr[3]==arr[6])&&(arr[6]=='0')||(arr[1]==arr[4])&&(arr[4]==arr[7])&&(arr[7]=='0')||(arr[2]==arr[5])&&(arr[5]==arr[8])&&(arr[8]=='0')||(arr[0]==arr[4])&&(arr[4]==arr[8])&&(arr[8]=='0')||(arr[2]==arr[4])&&(arr[4]==arr[6])&&(arr[6]=='0')){
            cout<<"player 2 win";
            getch();
            break;

        }
        else if((arr[0]!='1') && (arr[1]!='2') && (arr[2]!='3') && (arr[3]!='4') && (arr[4]!='5') && (arr[5]!='6') && (arr[6]!='7') && (arr[7]!='8')&&(arr[8]!='9')){
            cout<<"math is draw";
            getch();
            break;
        }
        else{
            player2(arr);
        }
    }

    return 0; 
}