#include<iostream>
using namespace std;
char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int column;
char check = 'x';
bool tie=false;
string n1 ="";
string n2 ="";
void structure(){
    
    
    cout<<"  |   |  "<<endl;
    cout<< space[0][0]<<" | "<< space[0][1]<<" | "<< space[0][2]<<endl;
    cout<<"__|___|__"<<endl;
    cout<<"  |   |  "<<endl;
    cout<< space[1][0]<<" | "<< space[1][1]<<" | "<< space[1][2]<<endl;
    cout<<"__|___|__"<<endl;
    cout<<"  |   |  "<<endl;
    cout<< space[2][0]<<" | "<< space[2][1]<<" | "<< space[2][2]<<endl;
    cout<<"  |   |  "<<endl;
}
void check_invalid(){
    int digit;
    if(check=='x'){
        cout<<n1<<" please enter "<<endl;
        cin>>digit;
    }
    else if(check=='0'){
        cout<<n2<<" please enter "<<endl;
        cin>>digit;
    }
    switch(digit){
        case 1:
            row = 0;    column=0;
            break;
        case 2:
            row = 0;    column=1;
            break;
        case 3:
            row = 0;    column=2;
            break;
        case 4:
            row = 1;    column=0;
            break;
        case 5:
            row = 1;    column=1;
            break;
        case 6:
            row = 1;    column=2;
            break;
        case 7:
            row = 2;    column=0;
            break;
        case 8:
            row = 2;    column=1;
            break;
        case 9:
            row = 2;    column=2;
            break;
        default:
            cout<<"invalid digit case plz..... enter valid case"<<endl;
            check_invalid();                       
            break;
    }
    
    if(check == 'x' && space[row][column] != 'x' && space[row][column] != '0'){
        space[row][column]='x';
        check ='0';
    }
    else if(check == '0' && space[row][column] != 'x' && space[row][column] != '0'){
        space[row][column]='0';
        check ='x';
    }
    else{
        cout<<"khali jagah nahi hai mere dost "<<endl;
        check_invalid();
    }
    structure();
}
bool isWin() {
    for (int i = 0; i < 3; i++) {
        if (space[i][0] == space[i][1]&& space[i][0] == space[i][2] || space[0][i] == space[1][i] &&space[0][i]==space[2][i])
            return true;
    }
    if (space[0][0] == space[1][1]&& space[1][1] == space[2][2] ||space[0][2] == space[1][1] && space[1][1] == space[2][0])
        return true;
    for(int  i = 0;i<3;i++){
        for(int j = 0; j<3;j++){
            if(space[i][j] != 'x' && space[i][j] != '0'){
                return false;
            }
        }
    }
    tie = true;
    return false;
}
int main(){
    cout<<"Enter the name of the first player : "<<endl;
    getline(cin,n1);
    cout<<"Enter the name of the second player :"<<endl;
    getline(cin,n2);
    while(!isWin()){
        structure();
        check_invalid();
    }
    if (!tie)
     { 
        if (check == '0') { 
            cout << n1 << " wins.....!" << endl; 
        }
        else { 
             cout << n2 << " wins.....! " << endl; 
        } 
    }
    else{ 
        cout << "It is a draw!" <<endl;
    }
}










