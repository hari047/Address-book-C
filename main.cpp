#include <iostream>
#include <stdio.h>
#include <string.h>
#include <process.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <iomanip>
using namespace std;
fstream hfp,hfp1;
fstream rfp,rfp1;
fstream pfp,pfp1;
fstream mfp,mfp1;


class Person
{
    unsigned int age;
    char sex;
    char name[30];
    char pNo[30];
    char doorNo[30];
    char street[30],locality[30],city[30],state[30];
    char pinCode[30];
public:
    void getData()
    {

        takeName :
        int inputName=1;
        cout<<"\n\t"<<setw(30)<<left<<"Enter name"<<": ";
        fflush(stdin);
        try
        {
            cin.getline(name,30);
            unsigned int i=0;
            for(i=0;i<strlen(name);i++)
            {
                if(isdigit(name[i]))
                {
                    inputName=0;
                    throw(1);
                }

            }

        }
        catch(int x)
        {
            cout<<"\tEnter a valid name.";
        }
        if(inputName==0)
            goto takeName;


        cout<<"\n\t"<<setw(30)<<left<<"Enter age"<<": ";
        fflush(stdin);
        cin>>age;


        takePNo :
        int inputPNo=1;
        cout<<"\n\t"<<setw(30)<<left<<"Enter Phone number"<<": ";
        fflush(stdin);
        try
        {
            cin.getline(pNo,30);
            if(strlen(pNo)!=10)
            {

                inputPNo=0;
                throw 'c';
            }
            unsigned int i=0;
            for(i=0;i<strlen(pNo);i++)
            {
                if(!(isdigit(pNo[i])))
                {
                    inputPNo=0;
                    throw(1);
                }

            }

        }
        catch(char c)
        {
            cout<<"\tPhone number must be of 10 digits.";
        }
        catch(int x)
        {
            cout<<"\tEnter a valid phone number.";
        }
        if(inputPNo==0)
            goto takePNo;


        takeSex :
        int inputSex=1;
        cout<<"\n\t"<<setw(30)<<left<<"Enter sex (M/F)"<<": ";
        fflush(stdin);
        try
        {
            cin>>sex;

            if(sex!='m'&&sex!='M'&&sex!='f'&&sex!='F')
            {
                inputSex=0;
                throw(1);
            }

        }
        catch(int x)
        {
            cout<<"\tEnter a valid sex.";
        }
        if(inputSex==0)
            goto takeSex;


        takeDoorNO :
        int inputDoorNo=1;
        cout<<"\n\t"<<setw(30)<<left<<"Enter the door number"<<": ";
        fflush(stdin);
        try
        {
            cin.getline(doorNo,30);
            unsigned int i=0;
            for(i=0;i<strlen(doorNo);i++)
            {
                if(!(isdigit(doorNo[i])))
                {
                    inputDoorNo=0;
                    throw(1);
                }

            }

        }
        catch(int x)
        {
            cout<<"\tEnter valid door number.";
        }
        if(inputDoorNo==0)
            goto takeDoorNO;


        cout<<"\n\t"<<setw(30)<<left<<"Enter name of the street"<<": ";
        fflush(stdin);
        cin.getline(street,30);
        cout<<"\n\t"<<setw(30)<<left<<"Enter name of the locality"<<": ";
        fflush(stdin);
        cin.getline(locality,30);


        takeCity :
        int inputCity=1;
        cout<<"\n\t"<<setw(30)<<left<<"Enter name of the city"<<": ";
        fflush(stdin);
        try
        {
            cin.getline(city,30);
            unsigned int i=0;
            for(i=0;i<strlen(city);i++)
            {
                if(isdigit(city[i]))
                {
                    strcpy(city," ");
                    inputCity=0;
                    throw(1);
                }

            }

        }
        catch(int x)
        {
            cout<<"\tEnter a valid city name.";
        }
        if(inputCity==0)
            goto takeCity;


        takeState :
        int inputState=1;
        cout<<"\n\t"<<setw(30)<<left<<"Enter name of the state"<<": ";
        fflush(stdin);
        try
        {
            cin.getline(state,30);
            unsigned int i=0;
            for(i=0;i<strlen(state);i++)
            {
                if(isdigit(state[i]))
                {
                    inputState=0;
                    throw(1);
                }

            }

        }
        catch(int x)
        {
            cout<<"\tEnter a valid state name.";
        }
        if(inputState==0)
            goto takeState;

        takePin :
        int inputPin=1;
        cout<<"\n\t"<<setw(30)<<left<<"Enter the Pincode"<<": ";
        fflush(stdin);
        try
        {
            cin.getline(pinCode,30);
            if(strlen(pinCode)!=6)
            {
                inputPin=0;
                throw 'c';

            }
            unsigned int i=0;
            for(i=0;i<strlen(pinCode);i++)
            {
                if(!(isdigit(pinCode[i])))
                {
                    inputPin=0;
                    throw(1);
                }

            }

        }
        catch(char c)
        {
            cout<<"\tPin code must be of 6 digits.";
        }
        catch(int x)
        {
            cout<<"\tEnter a valid pin code.";
        }
        if(inputPin==0)
            goto takePin;


    }
    void show()
    {
        cout<<"\n\t"<<setw(30)<<left<<"Name"<<": "<<name;
        cout<<"\n\t"<<setw(30)<<left<<"Age"<<": "<<age;
        cout<<"\n\t"<<setw(30)<<left<<"Phone Number"<<": "<<pNo;
        cout<<"\n\t"<<setw(30)<<left<<"Sex"<<": "<<sex;
        cout<<"\n\t"<<setw(30)<<left<<"Address"<<": #"<<doorNo<<", "<<street;
        cout<<"\n\t"<<setw(32)<<left<<"                   "<<locality<<", "<<city;
        cout<<"\n\t"<<setw(32)<<left<<"                   "<<state<<" - "<<pinCode;
    }
    void partialShow()
    {
        cout<<"\n\t"<<setw(25)<<left<<name<<setw(10)<<left<<age<<setw(20)<<left<<pNo;
    }
    char* returnName()
    {
        return name;
    }
    char* returnpNo()
    {
        return pNo;
    }

};


// This is just a sample of the source code to the project.
// The original project has 1500 lines of code with hospital, Mall and Restaurants


// Contact me for further information.
