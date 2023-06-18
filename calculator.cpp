#include <iostream>
#include <stdlib.h>

using namespace std;

void calculateGPA();


int main(){

    int input;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                    GPA & CGPA Calculator (Developed by Ohid)             "<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"                   2. Exit Application"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;

    sub:
    cout<<"Enter your choise: ";
    cin>>input;
    
    switch(input){
        case 1:
            calculateGPA();
            break;

        case 2:
            exit(EXIT_SUCCESS);
            break;
        default:
            cout<<"you have entered wrong input.Try Again \n";
            goto sub;
            break;

    }



}
void calculateGPA(){

    int q;
    cout<<"-------------- GPA Calculating -----------------"<<endl;
    cout<<" How many subject's do you want to calculate? : ";
    cin>>q;

    float credit [q];
    float point  [q];
    cout<<endl;
    
    for(int i = 0;i<q;i++){


        cout<<"Enter the credit for the subject "<<i+1<<": ";
        cin>>credit[i];
        cout<<endl;
        cout<<"Enter the point of the subject "<<i+1<<": ";
        cin>>point[i];
        cout<<"-----------------------------------\n\n"<<endl;


    }
    float sum =0;
    float tot;

    for (int j=0;j<q; j++){

        tot=credit[j]*point[j];
        sum = sum+ tot;
    }

    float totCr=0;

    for(int k=0;k<q;k++){
        totCr= totCr+ credit[k];

    }
    cout<<"\n\n\nTotal Points: "<<sum<< " . Total Credits: "<<totCr<<" .Total GPA: "<<sum/totCr<<" ."<<endl;

    sub:
    int inmenu;

    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: ";
    cin>>inmenu;

    switch (inmenu)
    {
    case 1:
        calculateGPA();
        break;   
    case 2:
        main();
        break;
    case 3:
        exit(EXIT_SUCCESS);
        break;     
    
    default:
        cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
        goto sub;
    }

    
}






