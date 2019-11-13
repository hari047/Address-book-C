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

class Place
{
    char name[30];
    char pNo[30];
    unsigned int yearEstablished;
    char timings[30];
    char feedbackEmail[30];
    char doorNo[30];
    char street[30],locality[30],city[30],state[30];
    char pinCode[30];
public:
    void getData()
    {

        takePName :
        int inputName=1;
        cout<<"\n\t"<<setw(38)<<left<<"Enter name :"<<"";
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
            goto takePName;



        takePPNo :
        int inputPNo=1;
        cout<<"\n\t"<<setw(38)<<left<<"Enter Phone number"<<": ";
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
            cout<<"\tPhone number cannot exceed 10 digits.";
        }
        catch(int x)
        {
            cout<<"\tEnter a valid phone number.";
        }
        if(inputPNo==0)
            goto takePPNo;

        cout<<"\n\t"<<setw(38)<<left<<"Enter year established"<<": ";
        cin>>yearEstablished;
        cout<<"\n\t"<<setw(38)<<left<<"Enter working hours"<<": ";
        fflush(stdin);
        cin.getline(timings,30);
        cout<<"\n\t"<<setw(38)<<left<<"Enter feedback email Id"<<": ";
        fflush(stdin);
        cin.getline(feedbackEmail,30);
        takeDoorNO :
        int inputDoorNo=1;
        cout<<"\n\t"<<setw(38)<<left<<"Enter the door number"<<": ";
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


        cout<<"\n\t"<<setw(38)<<left<<"Enter name of the street"<<": ";
        fflush(stdin);
        cin.getline(street,30);
        cout<<"\n\t"<<setw(38)<<left<<"Enter name of the locality"<<": ";
        fflush(stdin);
        cin.getline(locality,30);

        takeCity :
        int inputCity=1;
        cout<<"\n\t"<<setw(38)<<left<<"Enter name of the city"<<": ";
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
        cout<<"\n\t"<<setw(38)<<left<<"Enter name of the state"<<": ";
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
        cout<<"\n\t"<<setw(38)<<left<<"Enter the Pincode"<<": ";
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
        cout<<"\n\t"<<setw(30)<<left<<"Phone number"<<": "<<pNo;
        cout<<"\n\t"<<setw(30)<<left<<"Year Established"<<": "<<yearEstablished;
        cout<<"\n\t"<<setw(30)<<left<<"Working hours"<<": "<<timings;
        cout<<"\n\t"<<setw(30)<<left<<"Feedback Email Id"<<": "<<feedbackEmail;
        cout<<"\n\t"<<setw(30)<<left<<"Address"<<": #"<<doorNo<<", "<<street;
        cout<<"\n\t"<<setw(32)<<left<<"                      "<<locality<<", "<<city;
        cout<<"\n\t"<<setw(32)<<left<<"                      "<<state<<" - "<<pinCode;
    }
    void partialShow()
    {
        cout<<"\n\t"<<setw(25)<<left<<name<<setw(20)<<left<<pNo<<setw(15)<<left<<city<<setw(15)<<left<<state;
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

class Mall: public Place
{
    char foodStalls[30],movies[40];
    int shops;
public:
    void getData()
    {
        Place::getData();
        cout<<"\n\t"<<setw(50)<<left<<"Enter names of all food stalls in food court"<<": ";
        fflush(stdin);
        cin.getline(foodStalls,30);
        cout<<"\n\t"<<setw(38)<<left<<"Enter the movies running"<<": ";
        fflush(stdin);
        cin.getline(movies,40);
        cout<<"\n\t"<<setw(38)<<left<<"Enter the number of shops"<<": ";
        cin>>shops;
    }
    void show()
    {
        Place::show();
        cout<<"\n\t"<<setw(30)<<left<<"Food stalls in food court"<<": "<<foodStalls;
        cout<<"\n\t"<<setw(30)<<left<<"Movies running"<<": "<<movies;
        cout<<"\n\t"<<setw(30)<<left<<"Number of shops"<<": "<<shops;
    }


};



class Hospital : public Place
{
    char specialities[30],visitingHrs[30];
    unsigned int capacity,noOfDoctors;
public:
    void getData()
    {
        Place::getData();
        cout<<"\n\t"<<setw(50)<<left<<"Specialities of the Hospital"<<": ";
        fflush(stdin);
        //cin.ignore();
        cin.getline(specialities,30);
        cout<<"\n\t"<<setw(50)<<left<<"Visiting hours for patients"<<": ";
        fflush(stdin);
        //cin.ignore();
        cin.getline(visitingHrs,30);
        cout<<"\n\t"<<setw(50)<<left<<"Capacity of the hospital"<<": ";
        cin>>capacity;
        cout<<"\n\t"<<setw(50)<<left<<"Number of doctors in the hospital"<<": ";
        cin>>noOfDoctors;
    }
    void show()
    {
        Place::show();
        cout<<"\n\t"<<setw(30)<<left<<"Specialities"<<": "<<specialities;
        cout<<"\n\t"<<setw(30)<<left<<"Visiting hours"<<": "<<visitingHrs;
        cout<<"\n\t"<<setw(30)<<left<<"Capacity of the hospital"<<": "<<capacity;
        cout<<"\n\t"<<setw(30)<<left<<"Number of doctors"<<": "<<noOfDoctors;
    }
};

class Restaurant : public Place
{
    float ratings;
    unsigned int pricePerPerson;
    char specialOffers[30];
    char reviews[30];
public:
    void getData()
    {
        Place::getData();
        cout<<"\n\t"<<setw(30)<<left<<"Enter Price per person"<<": ";
        cin>>pricePerPerson;
        cout<<"\n\t"<<setw(30)<<left<<"Enter Ratings"<<": ";
        cin>>ratings;
        cout<<"\n\t"<<setw(30)<<left<<"Enter reviews"<<": ";
        fflush(stdin);
        cin.getline(reviews,30);
        cout<<"\n\t"<<setw(30)<<left<<"Enter special offers"<<": ";
        fflush(stdin);
        cin.getline(specialOffers,30);
    }
    void show()
    {
        Place::show();
        cout<<"\n\t"<<setw(30)<<left<<"Price per person"<<": "<<pricePerPerson;
        cout<<"\n\t"<<setw(30)<<left<<"Ratings"<<": "<<ratings;
        cout<<"\n\t"<<setw(30)<<left<<"Reviews"<<": ";
        cout<<reviews;
        cout<<"\n\t"<<setw(30)<<left<<"Special Offers"<<": ";
        cout<<specialOffers;
    }
};

Hospital h,h_arr[20];
Restaurant r,r_arr[20];
Person p,p_arr[20];
Mall m,m_arr[20];

int nh=0,nr=0,np=0,nm=0;

void createHospital()
{
    hfp.open("Hospital.txt",ios::out|ios::app);
    h.getData();
    hfp.write((char*)&h,sizeof(Hospital));
    hfp.close();
    system("cls");
    cout<<"\n\tHospital with below mentioned details has been added.\n\n";
    h.show();
    getch();
}

void createRestaurant()
{
    rfp.open("Restaurant.txt",ios::out|ios::app);
    r.getData();
    rfp.write((char*)&r,sizeof(Restaurant));
    rfp.close();
    system("cls");
    cout<<"\n\tRestaurant with below mentioned details has been added.\n\n";
    r.show();
    getch();
}

void createPerson()
{
    pfp.open("Person.txt",ios::out|ios::app);
    p.getData();
    pfp.write((char*)&p,sizeof(Person));
    pfp.close();
    system("cls");
    cout<<"\n\tPerson with below mentioned details has been added.\n\n";
    p.show();
    getch();
}


void createMall()
{
    mfp.open("Mall.txt",ios::out|ios::app);
    m.getData();
    mfp.write((char*)&m,sizeof(Mall));
    mfp.close();
    system("cls");
    cout<<"\n\tShopping mall with below mentioned details has been added.\n\n";
    m.show();
    getch();
}



void create()
{

    int ch;
    while(1)
    {
        system("cls");
        cout<<"\n\t\tCREATE\n";
        cout<<"\n\t1. PERSON\n\t2. HOSPITAL\n\t3. RESTAURANT\n\t4. SHOPPING MALL\n\t5. BACK TO MAIN MENU\n\n\tEnter choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1: createPerson();
                    break;

            case 2: createHospital();
                    break;

            case 3: createRestaurant();
                    break;

            case 4: createMall();
                    break;

            case 5: return;
                    break;

            default:cout<<"\n\tINVALID CHOICE\n";
                    break;

        }
    }
}

void searchHospitalName(char NAME[])
{
    int flag=0;
    hfp.open("Hospital.txt",ios::in);
    while(hfp.read((char*)&h,sizeof(Hospital)))
    {
        if(strcmpi(NAME,h.returnName())==0)
        {
            //system("cls");
            h.show();
            h_arr[nh]=h;
            nh++;
            flag=1;
        }
    }
    hfp.close();
    if(flag==0)
        cout<<"\n\t"<<NAME<<" hospital does not exist";
    getch();
}

void searchHospitalpNo(char PNO[])
{
    int flag=0;
    hfp.open("Hospital.txt",ios::in);
    while(hfp.read((char*)&h,sizeof(Hospital)))
    {
        if(strcmpi(PNO,h.returnpNo())==0)
        {
            h.show();
            h_arr[nh]=h;
            nh++;
            flag=1;
        }
    }
    hfp.close();
    if(flag==0)
        cout<<"\n\tHospital with phone number: "<<PNO<<" does not exist";
    getch();
}

void searchPersonName(char NAME[])
{
    int flag=0;
    pfp.open("Person.txt",ios::in);
    while(pfp.read((char*)&p,sizeof(Person)))
    {
        if(strcmpi(NAME,p.returnName())==0)
        {
            //system("cls");
            p.show();
            p_arr[np]=p;
            np++;
            flag=1;
        }
    }
    pfp.close();
    if(flag==0)
        cout<<"\n\t"<<NAME<<"'s record does not exist";
    getch();
}

void searchPersonpNo(char PNO[])
{
    int flag=0;
    pfp.open("Person.txt",ios::in);
    while(pfp.read((char*)&p,sizeof(Person)))
    {
        if(strcmpi(PNO,p.returnpNo())==0)
        {
            //system("cls");
            p.show();
            p_arr[np]=p;
            np++;
            flag=1;
        }
    }
    pfp.close();
    if(flag==0)
        cout<<"\n\tPerson with phone number: "<<PNO<<" does not exist";
    getch();
}



void searchRestaurantName(char NAME[])
{
    int flag=0;
    rfp.open("Restaurant.txt",ios::in);
    while(rfp.read((char*)&r,sizeof(Restaurant)))
    {
        if(strcmpi(NAME,r.returnName())==0)
        {
            //system("cls");
            r.show();
            r_arr[nr]=r;
            nr++;
            flag=1;
        }
    }
    rfp.close();
    if(flag==0)
        cout<<"\n\t"<<NAME<<" restaurant does not exist";
    getch();
}

void searchRestaurantpNo(char PNO[])
{
    int flag=0;
    rfp.open("Restaurant.txt",ios::in);
    while(rfp.read((char*)&r,sizeof(Restaurant)))
    {
        if(strcmpi(PNO,r.returnpNo())==0)
        {
            //system("cls");
            r.show();
            r_arr[nr]=r;
            nr++;
            flag=1;
        }
    }
    rfp.close();
    if(flag==0)
        cout<<"\n\tRestaurant with phone number: "<<PNO<<" does not exist";
    getch();
}



void searchMallName(char NAME[])
{
    int flag=0;
    mfp.open("Mall.txt",ios::in);
    while(mfp.read((char*)&m,sizeof(Mall)))
    {
        if(strcmpi(NAME,m.returnName())==0)
        {
            //system("cls");
            m.show();
            m_arr[nm]=m;
            nm++;
            flag=1;
        }
    }
    mfp.close();
    if(flag==0)
        cout<<"\n\t"<<NAME<<" mall does not exist";
    getch();
}

void searchMallpNo(char PNO[])
{
    int flag=0;
    mfp.open("Mall.txt",ios::in);
    while(mfp.read((char*)&m,sizeof(Mall)))
    {
        if(strcmpi(PNO,m.returnpNo())==0)
        {
            //system("cls");
            m.show();
            m_arr[nm]=m;
            nm++;
            flag=1;
        }
    }
    mfp.close();
    if(flag==0)
        cout<<"\n\tMall with phone number: "<<PNO<<" does not exist";
    getch();
}

void ssearch()
{
    int ch;
    while(1)
    {
        searchMenu:
        system("cls");
        cout<<"\n\t\tSEARCH\n";
        cout<<"\n\t1. PERSON\n\t2. HOSPITAL\n\t3. RESTAURANT\n\t4. SHOPPING MALL\n\t5. BACK TO MAIN MENU\n\n\tEnter choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1: int ch1;
                    system("cls");
                    cout<<"\n\t\tSEARCH PERSON\n\n\t1. BY NAME\n\t2. BY PHONE NUMBER\n\t3. BACK TO SEARCH MENU\n\n\tEnter choice : ";
                    cin>>ch1;
                    switch(ch1)
                    {
                        case 1: char n[30];
                                cout<<"\n\tEnter name to search : ";
                                fflush(stdin);
                                cin.getline(n,30);
                                searchPersonName(n);
                                break;

                        case 2: char p[30];
                                cout<<"\n\tEnter phone number to search : ";
                                fflush(stdin);
                                cin.getline(p,30);
                                searchPersonpNo(p);
                                break;

                        case 3: goto searchMenu;

                        default:cout<<"\n\tINVALID CHOICE\n";
                                break;

                    }
                    break;

            case 2: int ch2;
                    system("cls");
                    cout<<"\n\t\tSEARCH HOSPITAL\n\n\t1. BY NAME\n\t2. BY PHONE NUMBER\n\t3. BACK TO SEARCH MENU\n\n\tEnter choice : ";
                    cin>>ch2;
                    switch(ch2)
                    {
                        case 1: char n[30];
                                cout<<"\n\tEnter name to search : ";
                                fflush(stdin);
                                cin.getline(n,30);
                                searchHospitalName(n);
                                break;

                        case 2: char p[30];
                                cout<<"\n\tEnter phone number to search : ";
                                fflush(stdin);
                                cin.getline(p,30);
                                searchHospitalpNo(p);
                                break;

                        case 3: goto searchMenu;

                        default:cout<<"\n\tINVALID CHOICE\n";
                                break;

                    }
                    break;

            case 3: int ch3;
                    system("cls");
                    cout<<"\n\t\tSEARCH RESTAURANT\n\n\t1. BY NAME\n\t2. BY PHONE NUMBER\n\t3. BACK TO SEARCH MENU\n\n\tEnter choice : ";
                    cin>>ch3;
                    switch(ch3)
                    {
                        case 1: char n[30];
                                cout<<"\n\tEnter name to search : ";
                                fflush(stdin);
                                cin.getline(n,30);
                                searchRestaurantName(n);
                                break;

                        case 2: char p[30];
                                cout<<"\n\tEnter phone number to search : ";
                                fflush(stdin);
                                cin.getline(p,30);
                                searchRestaurantpNo(p);
                                break;

                        case 3: goto searchMenu;

                        default:cout<<"\n\tINVALID CHOICE\n";
                                break;

                    }
                    break;

            case 4: int ch4;
                    system("cls");
                    cout<<"\n\t\tSEARCH SHOPPING MALL\n\n\t1. BY NAME\n\t2. BY PHONE NUMBER\n\t3. BACK TO SEARCH MENU\n\n\tEnter choice : ";
                    cin>>ch4;
                    switch(ch4)
                    {
                        case 1: char n[30];
                                cout<<"\n\tEnter name to search : ";
                                fflush(stdin);
                                cin.getline(n,30);
                                searchMallName(n);
                                break;

                        case 2: char p[30];
                                cout<<"\n\tEnter phone number to search : ";
                                fflush(stdin);
                                cin.getline(p,30);
                                searchMallpNo(p);
                                break;

                        case 3: goto searchMenu;

                        default:cout<<"\n\tINVALID CHOICE\n";
                                break;

                    }
                    break;

            case 5: return;

            default:cout<<"\n\tINVALID CHOICE\n";
                    break;
        }
    }
}

void showHospital()
{
    hfp.open("Hospital.txt",ios::in);
    while(hfp.read((char*)&h,sizeof(Hospital)))
    {
      h.partialShow();

    }
    hfp.close();
    getch();
}

void showRestaurant()
{
    rfp.open("Restaurant.txt",ios::in);
    while(rfp.read((char*)&r,sizeof(Restaurant)))
    {
      r.partialShow();

    }
    rfp.close();
    getch();
}

void showPerson()
{
    pfp.open("Person.txt",ios::in);
    while(pfp.read((char*)&p,sizeof(Person)))
    {
      p.partialShow();

    }
    pfp.close();
    getch();
}

void showMall()
{
    mfp.open("Mall.txt",ios::in);
    while(mfp.read((char*)&m,sizeof(Mall)))
    {
      m.partialShow();

    }
    mfp.close();
    getch();
}

void display()
{
    int ch;
    while(1)
    {
        system("cls");
        cout<<"\n\t\tDISPLAY\n";
        cout<<"\n\t1. PERSON\n\t2. HOSPITAL\n\t3. RESTAURANT\n\t4. SHOPPING MALL\n\t5. BACK TO MAIN MENU\n\n\tEnter choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1: system("cls");
                    cout<<"\n\tDISPLAY PERSON";
                    cout<<"\n\n\t"<<setw(25)<<left<<"Name"<<setw(10)<<left<<"Age"<<setw(20)<<left<<"Phone number"<<endl;
                    showPerson();
                    break;

            case 2: system("cls");
                    cout<<"\n\tDISPLAY HOSPITAL";
                    cout<<"\n\n\t"<<setw(25)<<left<<"Name"<<setw(20)<<left<<"Phone number"<<setw(15)<<left<<"City"<<setw(15)<<left<<"State"<<endl;
                    showHospital();
                    break;

            case 3: system("cls");
                    cout<<"\n\tDISPLAY RESTAURANT";
                    cout<<"\n\n\t"<<setw(25)<<left<<"Name"<<setw(20)<<left<<"Phone number"<<setw(15)<<left<<"City"<<setw(15)<<left<<"State"<<endl;
                    showRestaurant();
                    break;

            case 4: system("cls");
                    cout<<"\n\tDISPLAY SHOPPING MALL";
                    cout<<"\n\n\t"<<setw(25)<<left<<"Name"<<setw(20)<<left<<"Phone number"<<setw(15)<<left<<"City"<<setw(15)<<left<<"State"<<endl;
                    showMall();
                    break;

            case 5: return;
                    break;

            default: cout<<"\n\tINVALID CHOICE\n";
                     break;

        }
    }
}



void modifyHospitalName()
{
    int found=0;
    char NAME[30];
    cout<<"\nEnter name to modify : ";
    cin>>NAME;
    system("cls");
    hfp.open("Hospital.txt",ios::in|ios::out);
    while(hfp.read((char*)&h,sizeof(Hospital))&&found==0)
    {
     if(strcmpi(NAME,h.returnName())==0)
        {
            system("cls");
            h.show();
            cout<<"\n\tEnter new details"<<endl;
            h.getData();
            int pos=-1*sizeof(h);
			hfp.seekp(pos,ios::cur);
            hfp.write((char*)&h,sizeof(Hospital));
            cout<<"\n\tRecord update";
            found=1;
        }
    }
    hfp.close();
    if(found==0)
        cout<<"\n\tRecord not found";
    getch();
}


void modifyHospitalpNo()
{
    int found=0;
    char PNO[30];
    cout<<"\nEnter phone number to modify : ";
    cin>>PNO;
    system("cls");
    hfp.open("Hospital.txt",ios::in|ios::out);
    while(hfp.read((char*)&h,sizeof(Hospital))&&found==0)
    {
     if(strcmpi(PNO,h.returnpNo())==0)
        {
            system("cls");
            h.show();
            cout<<"\n\tEnter new details"<<endl;
            h.getData();
            int pos=-1*sizeof(h);
			hfp.seekp(pos,ios::cur);
            hfp.write((char*)&h,sizeof(Hospital));
            cout<<"\n\tRecord update";
            found=1;
        }
    }
    hfp.close();
    if(found==0)
        cout<<"\n\tRecord not found";
    getch();
}


void modifyRestaurantName()
{
    int found=0;
    char NAME[30];
    cout<<"\nEnter name to modify : ";
    cin>>NAME;
    system("cls");
    rfp.open("Restaurant.txt",ios::in|ios::out);
    while(hfp.read((char*)&r,sizeof(Restaurant))&&found==0)
    {
     if(strcmpi(NAME,r.returnName())==0)
        {
            system("cls");
            r.show();
            cout<<"\n\tEnter new details"<<endl;
            r.getData();
            int pos=-1*sizeof(r);
			rfp.seekp(pos,ios::cur);
            rfp.write((char*)&r,sizeof(Restaurant));
            cout<<"\n\tRecord update";
            found=1;
        }
    }
    rfp.close();
    if(found==0)
        cout<<"\n\tRecord not found";
    getch();
}


void modifyRestaurantpNo()
{
    int found=0;
    char PNO[30];
    cout<<"\nEnter phone number to modify : ";
    cin>>PNO;
    system("cls");
    rfp.open("Restaurant.txt",ios::in|ios::out);
    while(rfp.read((char*)&r,sizeof(Restaurant))&&found==0)
    {
     if(strcmpi(PNO,r.returnpNo())==0)
        {
            system("cls");
            r.show();
            cout<<"\n\tEnter new details"<<endl;
            r.getData();
            int pos=-1*sizeof(r);
			rfp.seekp(pos,ios::cur);
            rfp.write((char*)&r,sizeof(Restaurant));
            cout<<"\n\tRecord update";
            found=1;
        }
    }
    rfp.close();
    if(found==0)
        cout<<"\n\tRecord not found";
    getch();
}


void modifyPersonName()
{
    int found=0;
    char NAME[30];
    cout<<"\nEnter name to modify : ";
    cin>>NAME;
    system("cls");
    pfp.open("Person.txt",ios::in|ios::out);
    while(pfp.read((char*)&p,sizeof(Person))&&found==0)
    {
     if(strcmpi(NAME,p.returnName())==0)
        {
            system("cls");
            p.show();
            cout<<"\n\tEnter new details"<<endl;
            p.getData();
            int pos=-1*sizeof(p);
			pfp.seekp(pos,ios::cur);
            pfp.write((char*)&p,sizeof(Person));
            cout<<"\n\tRecord update";
            found=1;
        }
    }
    pfp.close();
    if(found==0)
        cout<<"\n\tRecord not found";
    getch();
}


void modifyPersonpNo()
{
    int found=0;
    char PNO[30];
    cout<<"\nEnter phone number to modify : ";
    cin>>PNO;
    system("cls");
    pfp.open("Person.txt",ios::in|ios::out);
    while(pfp.read((char*)&p,sizeof(Person))&&found==0)
    {
     if(strcmpi(PNO,p.returnpNo())==0)
        {
            system("cls");
            p.show();
            cout<<"\n\tEnter new details"<<endl;
            p.getData();
            int pos=-1*sizeof(p);
			pfp.seekp(pos,ios::cur);
            pfp.write((char*)&p,sizeof(Person));
            cout<<"\n\tRecord update";
            found=1;
        }
    }
    pfp.close();
    if(found==0)
        cout<<"\n\tRecord not found";
    getch();
}

void modifyMallName()
{
    int found=0;
    char NAME[30];
    cout<<"\nEnter name to modify : ";
    cin>>NAME;
    system("cls");
    mfp.open("Mall.txt",ios::in|ios::out);
    while(mfp.read((char*)&m,sizeof(Mall))&&found==0)
    {
     if(strcmpi(NAME,m.returnName())==0)
        {
            system("cls");
            m.show();
            cout<<"\n\tEnter new details"<<endl;
            m.getData();
            int pos=-1*sizeof(m);
			mfp.seekp(pos,ios::cur);
            mfp.write((char*)&m,sizeof(Mall));
            cout<<"\n\tRecord update";
            found=1;
        }
    }
    mfp.close();
    if(found==0)
        cout<<"\n\tRecord not found";
    getch();
}


void modifyMallpNo()
{
    int found=0;
    char PNO[30];
    cout<<"\nEnter phone number to modify : ";
    cin>>PNO;
    system("cls");
    mfp.open("Mall.txt",ios::in|ios::out);
    while(mfp.read((char*)&m,sizeof(Mall))&&found==0)
    {
     if(strcmpi(PNO,m.returnpNo())==0)
        {
            system("cls");
            m.show();
            cout<<"\n\tEnter new details"<<endl;
            m.getData();
            int pos=-1*sizeof(m);
			mfp.seekp(pos,ios::cur);
            mfp.write((char*)&m,sizeof(Mall));
            cout<<"\n\tRecord update";
            found=1;
        }
    }
    mfp.close();
    if(found==0)
        cout<<"\n\tRecord not found";
    getch();
}


void modify()
{
    int ch;
    while(1)
    {
        modifyMenu :
        system("cls");
        cout<<"\n\t\tMODIFY\n";
        cout<<"\n\t1. PERSON\n\t2. HOSPITAL\n\t3. RESTAURANT\n\t4. SHOPPING MALL\n\t5. BACK TO MAIN MENU\n\n\tEnter choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1: int ch1;
                    system("cls");
                    cout<<"\n\t\tMODIFY PERSON\n\n\t1. BY NAME\n\t2. BY PHONE NUMBER\n\t3. BACK TO MODIFY MENU\n\n\tEnter choice : ";
                    cin>>ch1;
                    switch(ch1)
                    {
                        case 1: modifyPersonName();
                                break;

                        case 2: modifyPersonpNo();
                                break;

                        case 3: goto modifyMenu;

                        default:cout<<"\n\tINVALID CHOICE\n";
                                break;

                    }
                    break;

            case 2: int ch2;
                    system("cls");
                    cout<<"\n\t\tMODIFY HOSPITAL\n\n\t1. BY NAME\n\t2. BY PHONE NUMBER\n\t3. BACK TO MODIFY MENU\n\n\tEnter choice : ";
                    cin>>ch2;
                    switch(ch2)
                    {
                        case 1: modifyHospitalName();
                                break;

                        case 2: modifyHospitalpNo();
                                break;

                        case 3: goto modifyMenu;

                        default:cout<<"\n\tINVALID CHOICE\n";
                                break;

                    }
                    break;

            case 3: int ch3;
                    system("cls");
                    cout<<"\n\t\tMODIFY RESTAURANT\n\n\t1. BY NAME\n\t2. BY PHONE NUMBER\n\t3. BACK TO MODIFY MENU\n\n\tEnter choice : ";
                    cin>>ch3;
                    switch(ch3)
                    {
                        case 1: modifyRestaurantName();
                                break;

                        case 2: modifyRestaurantpNo();
                                break;

                        case 3: goto modifyMenu;

                        default:cout<<"\n\tINVALID CHOICE\n";
                                break;

                    }
                    break;

            case 4: int ch4;
                    system("cls");
                    cout<<"\n\t\tMODIFY SHOPPING MALL\n\n\t1. BY NAME\n\t2. BY PHONE NUMBER\n\t3. BACK TO MODIFY MENU\n\n\tEnter choice : ";
                    cin>>ch4;
                    switch(ch4)
                    {
                        case 1: modifyMallName();
                                break;

                        case 2: modifyMallpNo();
                                break;

                        case 3: goto modifyMenu;

                        default:cout<<"\n\tINVALID CHOICE\n";
                                break;

                    }
                    break;

            case 5: return;
                    break;

            default:cout<<"\n\tINVALID CHOICE\n";
                    break;
        }
    }
}

void mostSearchedHospital()
{
    int i,j;
    Hospital popular,temp;
    int tempCount,cnt=1;
    popular=h_arr[0];
    for(i=0 ; i<nh ; i++)
    {
        tempCount=0;
        temp=h_arr[i];
        tempCount++;
        for(j=i+1 ; j<nh ; j++)
        {
            if(strcmpi(h_arr[j].returnName(),temp.returnName())==0)
            {
                tempCount++;
                if(tempCount > cnt)
                {
                    popular=temp;
                    cnt=tempCount;
                }
            }
        }
    }
    if(nh==0)
        cout<<"\n\tNo hospitals searched.";
    else
    {
        cout<<"\n\tMOST SEARCHED HOSPITAL ";
        popular.show();
    }
    getch();
}

void mostSearchedRestaurant()
{
    int i,j;
    Restaurant popular,temp;
    int tempCount,cnt=1;
    popular=r_arr[0];
    for(i=0 ; i<nr ; i++)
    {
        tempCount=0;
        temp=r_arr[i];
        tempCount++;
        for(j=i+1 ; j<nr ; j++)
        {
            if(strcmpi(r_arr[j].returnName(),temp.returnName())==0)
            {
                tempCount++;
                if(tempCount > cnt)
                {
                    popular=temp;
                    cnt=tempCount;
                }
            }
        }
    }
    if(nr==0)
        cout<<"\n\tNo restaurants searched.";
    else
    {
        cout<<"\n\tMOST SEARCHED RESTAURANT";
        popular.show();
    }
    getch();
}

void mostSearchedMall()
{
    int i,j;
    Mall popular,temp;
    int tempCount,cnt=1;
    popular=m_arr[0];
    for(i=0 ; i<nm ; i++)
    {
        tempCount=0;
        temp=m_arr[i];
        tempCount++;
        for(j=i+1 ; j<nm ; j++)
        {
            if(strcmpi(m_arr[j].returnName(),temp.returnName())==0)
            {
                tempCount++;
                if(tempCount > cnt)
                {
                    popular=temp;
                    cnt=tempCount;
                }
            }
        }
    }
    if(nm==0)
        cout<<"\n\tNo shopping malls searched.";
    else
    {
        cout<<"\n\tMOST SEARCHED SHOPPING MALL";
        popular.show();
    }
    getch();
}

void mostSearchedPerson()
{
    int i,j;
    Person popular,temp;
    int tempCount,cnt=1;
    popular=p_arr[0];
    for(i=0 ; i<np ; i++)
    {
        tempCount=0;
        temp=p_arr[i];
        tempCount++;
        for(j=i+1 ; j<np ; j++)
        {
            if(strcmpi(p_arr[j].returnName(),temp.returnName())==0)
            {
                tempCount++;
                if(tempCount > cnt)
                {
                    popular=temp;
                    cnt=tempCount;
                }
            }
        }
    }
    if(np==0)
        cout<<"\n\tNo person searched.";
    else
    {
        cout<<"\n\tMOST SEARCHED PERSON";
        popular.show();
    }
    getch();
}

void mostSearched()
{
    int ch;
    while(1)
    {
        system("cls");
        cout<<"\n\t\tMOST SEARCHED\n";
        cout<<"\n\t1. PERSON\n\t2. HOSPITAL\n\t3. RESTAURANT\n\t4. SHOPPING MALL\n\t5. BACK TO MAIN MENU\n\n\tEnter choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1: mostSearchedPerson();
                    break;

            case 2: mostSearchedHospital();
                    break;

            case 3: mostSearchedRestaurant();
                    break;

            case 4: mostSearchedMall();
                    break;

            case 5: return;
                    break;

            default:cout<<"\n\tINVALID CHOICE\n";
                    break;

        }
    }
}

void deletePerson()
{
    char name[30];
	cout<<"\n\tEnter the name of the person who's record is to be deleted : ";
	cin>>name;
	pfp.open("Person.txt",ios::in);
	pfp1.open("Temp.txt",ios::out);
	pfp.seekg(0,ios::beg);
	while(pfp.read((char*)&p,sizeof(Person)))
	{
		if(strcmpi(name,p.returnName())!=0)
		{
			pfp1.write((char*)&p,sizeof(Person));
		}
	}
	pfp.close();
	pfp1.close();
	remove("Person.txt");
	rename("Temp.txt","Person.txt");
	cout<<"\n\tDatabase updated.";
	getch();
}

void deleteRestaurant()
{
    char name[30];
	cout<<"\n\tEnter the name of the restaurant who's record is to be deleted : ";
	cin>>name;
	rfp.open("Restaurant.txt",ios::in);
	rfp1.open("Temp.txt",ios::out);
	rfp.seekg(0,ios::beg);
	while(rfp.read((char*)&r,sizeof(Restaurant)))
	{
		if(strcmpi(name,r.returnName())!=0)
		{
			rfp1.write((char*)&r,sizeof(Restaurant));
		}
	}
	rfp.close();
	rfp1.close();
	remove("Restaurant.txt");
	rename("Temp.txt","Restaurant.txt");
	cout<<"\n\tDatabase updated.";
	getch();
}

void deleteMall()
{
    char name[30];
	cout<<"\n\tEnter the name of the shopping mall who's record is to be deleted : ";
	cin>>name;
	mfp.open("Mall.txt",ios::in);
	mfp1.open("Temp.txt",ios::out);
	mfp.seekg(0,ios::beg);
	while(mfp.read((char*)&m,sizeof(Mall)))
	{
		if(strcmpi(name,m.returnName())!=0)
		{
			mfp1.write((char*)&m,sizeof(Mall));
		}
	}
	mfp.close();
	mfp1.close();
	remove("Mall.txt");
	rename("Temp.txt","Mall.txt");
	cout<<"\n\tDatabase updated.";
	getch();
}

void deleteHospital()
{
    char name[30];
	cout<<"\n\tEnter the name of the hospital who's record is to be deleted : ";
	cin>>name;
	hfp.open("Hospital.txt",ios::in);
	hfp1.open("Temp.txt",ios::out);
	hfp.seekg(0,ios::beg);
	while(hfp.read((char*)&h,sizeof(Hospital)))
	{
		if(strcmpi(name,h.returnName())!=0)
		{
			hfp1.write((char*)&h,sizeof(Hospital));
		}
	}
	hfp.close();
	hfp1.close();
	remove("Hospital.txt");
	rename("Temp.txt","Hospital.txt");
	cout<<"\n\tDatabase updated.";
	getch();
}

void deleteRecords()
{
    int ch;
    while(1)
    {
        system("cls");
        cout<<"\n\t\tDELETE\n";
        cout<<"\n\t1. PERSON\n\t2. HOSPITAL\n\t3. RESTAURANT\n\t4. SHOPPING MALL\n\t5. BACK TO MAIN MENU\n\n\tEnter choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1: deletePerson();
                    break;

            case 2: deleteHospital();
                    break;

            case 3: deleteRestaurant();
                    break;

            case 4: deleteMall();
                    break;

            case 5: return;
                    break;

            default:cout<<"\n\tINVALID CHOICE\n";
                    break;

        }
    }
}

int main()
{
    int ch;
    while(1)
    {
        system("cls");
        system("color 02");
        cout<<"\n\t\tMAIN MENU\n";
        cout<<"\n\t1. CREATE\n\t2. SEARCH\n\t3. DISPLAY\n\t4. MODIFY\n\t5. MOST SEARCHED\n\t6. DELETE\n\t7. EXIT\n\n\tEnter choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1: create();
                    break;

            case 2: ssearch();
                    break;

            case 3: display();
                    break;

            case 4: modify();
                    break;

            case 5: mostSearched();
                    break;

            case 6: deleteRecords();
                    break;

            case 7: exit(0);

            default: cout<<"\n\tINVALID CHOICE\n";
                     break;
        }
    }

}
