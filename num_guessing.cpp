#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    string name;
    int n,i=1;
    cout<<"Enter you name->"<<endl;
    getline(cin,name);
    cout<<endl<<"how many chances you want to guess the no."<<endl;
    cin>>n;
    cout<<endl;
    srand(time(0));
    int v = rand()%100+1;
    while(i<=n){
        
        int inputuser;
        cout<<"enter no you guess it"<<endl;
        cin>>inputuser;
        if(v==inputuser){
            cout<<"congratulation you got it..........!"<<endl;
            cout<<"Thanks for playing "<<endl;
            break;
        }
        
        else{
            if(v<inputuser){
                cout<<"your input is high "<<endl;
                cout<<i<<" chance is over"<<endl;
                i++;
            }
            else{
                cout<<"your input is low"<<endl;
                cout<<i<<" chances is over"<<endl;
                i++;
            }
        }
        if(i>n){
            cout<<"ufff...! Try next time best of luck "<<endl;
            cout<<"number is ->"<<ends<<v<<endl;
        }
    }
}



















