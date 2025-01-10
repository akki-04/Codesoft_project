#include<iostream>
using namespace std;
int main(){
    string tasks[10] = "";
    int completed =0;
    int count = 0;
    int option = -1;
    do{
    cout<<"-------To Do List-------"<<endl;
    cout<<"1. View List "<<endl;
    cout<<"2. Add Task in a List "<<endl;
    cout<<"3. Mark complete Tast "<<endl;
    cout<<"4. Delete Task from the list "<<endl;
    cout<<"5. To Exit the current Linked list "<<endl;
    cin>>option;
    switch(option){
        case 1:
            {
                cout<<"Task To Do "<<endl;
                for(int i=0;i<=count;i++){
                    cout<<"Task"<<i<<" : "<<tasks[i]<<endl; 
                }
                break;
            }
        case 2:
            {
                if(count>9 || count<0){
                    cout<<"List full ho chuki hai.......!"<<endl;
                }
                else{
                    cout<<"Enter the task "<<endl;
                    cin.ignore();
                    getline(cin,tasks[count]);
                    count++;
                }
                break;
            }
            case 3:
                {   int s;
                    cout<<"Entered the task you completed "<<endl;
                    cin>>s;
                    if(s<1 || s>count ){
                        cout<<"Invalid Integer "<<endl;
                    }
                    else{
                        completed++;
                        cout<<"Task mark as completed : "<<completed<<endl;
                    }
                    break;
                }
        case 4:
            {
                int dlt;
                cout<<"Enter the task you want to delete "<<endl;
                cin>>dlt;
                if(dlt>9 || dlt<0){
                    cout<<"You Enter Invalid task "<<endl;
                }
                else{
                    for(int i = dlt;i<count;i++){
                        tasks[i]=tasks[i+1];

                    }
                    count--;
                    break;
                }
            }
                case 5:
                    break;
        }
    }while(option != 5);
}












