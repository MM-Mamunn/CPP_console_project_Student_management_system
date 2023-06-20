///_________________________C221046_____________________

#include<bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#define   sleep     fflush(stdout);usleep(9999);
#define cls  system("cls");
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
char chh = 254;

///class
class student
{
private:
    string sfname, sdept, sec, sadvisor, sid, course="Not Completed", spass, reg ="0";
    double cgpa0=0,cgpa1=0,cgpa2=0,cgpa3=0,cgpa4=0,cgpa5=0,cgpa6=0,cgpa7=0,tcgpa=0;
public:
///default constructor
    student()
    {};
///setting data by calling constructor
    student(string sfname,string sid,string sdept,string ssec,string sadvisor,string spass,string course="null",double cgpa0=0,double cgpa1=0,double cgpa2=0,double cgpa3=0,double cgpa4=0,double cgpa5=0,double cgpa6=0,double cgpa7=0,double tcgpa=0,string reg = "0")
    {
        string s1="Pending",s2="Enrolled",s3="Null",s4="Denied";
        this->sfname =sfname;
        this->sid= sid;
        this->sdept =sdept ;
        this->sec =ssec ;
        this->sadvisor = sadvisor;
        this->spass = spass;
        this->reg = reg;
        if(reg == "1")
            this->course = s1;
        else if(reg == "2")
            this->course = s2;
        else if(reg == "3")
            this->course = s4;
        else
            this->course = s3;

        this->cgpa0 = cgpa0;
        this->cgpa1 = cgpa1;
        this->cgpa2 = cgpa2;
        this->cgpa3 = cgpa3;
        this->cgpa4 = cgpa4;
        this->cgpa5 = cgpa5;
        this->cgpa6 = cgpa6;
        this->cgpa7 = cgpa7;
        this->tcgpa = tcgpa;
    }
    void set_result(double cgpa,int sem)
    {
        if(sem == 1)
            cgpa0 = cgpa;
        else if(sem == 2)
            cgpa1 = cgpa;
        else if(sem == 3)
            cgpa2 = cgpa;
        else if(sem == 4)
            cgpa3 = cgpa;
        else  if(sem == 5)
            cgpa4 = cgpa;
        else if(sem == 6)
            cgpa5 = cgpa;
        else    if(sem == 7)
            cgpa6 = cgpa;
        else if(sem == 8)
            cgpa7 = cgpa;
        double sum =cgpa0+cgpa1+cgpa2+cgpa3+cgpa4+cgpa5+cgpa6+cgpa7;
        tcgpa = sum/sem;
    }

    void show (void)
    {
        cout<<"\t\t\t"<<chh<<" Name          : "<<sfname<<endl;
        usleep(9999);
        cout<<"\t\t\t"<<chh<<" Id            : "<<sid<<endl;
        usleep(9999);
        cout<<"\t\t\t"<<chh<<" Dept.         : "<<sdept<<endl;
        usleep(9999);
        cout<<"\t\t\t"<<chh<<" Section       : "<<sec<<endl;
        usleep(9999);
        cout<<"\t\t\t"<<chh<<" Advisor       : "<<sadvisor<<endl;
        usleep(9999);
        cout<<"\t\t\t"<<chh<<" Course Status : "<<course<<endl;
        usleep(9999);
        printf("\t\t\t%c Current CGPA  : %.2f\n\n",chh,tcgpa);

    }
    void show_result(int sem)
    {
        double current;
        if(sem == 1)
            current = cgpa0;
        else if (sem == 2)
            current = cgpa1;
        else if (sem == 3)
            current = cgpa2;
        else if (sem == 4)
            current = cgpa3;
        else if (sem == 5)
            current = cgpa4;
        else if (sem == 6)
            current = cgpa5;
        else if (sem == 7)
            current = cgpa6;
        else if (sem == 8)
            current = cgpa7;
        if(current == 0)
            cout<<"\t\t\tCurrent Semester Result is not published yet\n";
        else
            cout<<"\t\t\tCurrent Semester CGPA is : "<<current<<endl;
        cout<<"\t\t\tTotall CGPA              : "<<tcgpa<<endl;
        cout<<"____________________________________________________________________________________\n";
        cout<<"\t\t\t1st semester CGPA : "<<cgpa0<<endl;
        sleep;
        cout<<"\t\t\t2nd semester CGPA : "<<cgpa1<<endl;
        sleep;
        cout<<"\t\t\t3rd semester CGPA : "<<cgpa2<<endl;
        sleep;
        cout<<"\t\t\t4th semester CGPA : "<<cgpa3<<endl;
        sleep;
        cout<<"\t\t\t5th semester CGPA : "<<cgpa4<<endl;
        sleep;
        cout<<"\t\t\t6th semester CGPA : "<<cgpa5<<endl;
        sleep;
        cout<<"\t\t\t7th semester CGPA : "<<cgpa6<<endl;
        sleep;
        cout<<"\t\t\t8th semester CGPA : "<<cgpa7<<endl<<endl;
    }
///friend function
    friend void log_in_st(int);
    friend void read_st();
    friend void write_st();
    friend void take_st();
    friend void log_in_st(int);
    friend int main();
    friend void log_in_tt(int);
    friend void read_tt();
    friend void write_tt();
    friend void take_tt();
    friend void log_in_tt(int);
    friend void delete_st();
    friend void delete_tt();

};

class teacher
{
private:
    string tfname, tdept, desig, tid, tpass;

public:
///default constructor
    teacher()
    {};
///setting data by calling constructor
    teacher(string tfname,string tid,string tdept,string desig,string tpass)
    {
        this->tfname  = tfname;
        this->tid    = tid;
        this->tdept  = tdept;
        this->desig = desig;
        this->tpass = tpass;
    }
    void show(void)
    {
        cout<<"\t\t\t   "<<chh<<" Name       :"<<tfname<<endl;
        usleep(9999);
        cout<<"\t\t\t   "<<chh<<" ID         :"<<tid<<endl;
        usleep(9999);
        cout<<"\t\t\t   "<<chh<<" Dept.      :"<<tdept<<endl;
        usleep(9999);
        cout<<"\t\t\t   "<<chh<<" Designation:"<<desig<<endl<<endl;
        usleep(9999);
    }
///friend function
    friend void log_in_tt(int);
    friend void read_tt();
    friend void write_tt();
    friend void take_tt();
    friend void log_in_tt(int);
    friend int main();
    friend void log_in_st(int);
    friend void read_st();
    friend void write_st();
    friend void take_st();
    friend void log_in_st(int);
    friend void delete_st();
    friend void delete_tt();
};

///object of classes

student data[20];
teacher data2[20];

///counting objects

int scnt =0;
int tcnt=0;

///reading from stdata(student) file

void read_st()
{
    string sfname,slname,sid,sdept,sec,sadvisor,course,spass,reg,str;
    double cgpa0=0,cgpa1=0,cgpa2=0,cgpa3=0,cgpa4=0,cgpa5=0,cgpa6=0,cgpa7=0,tcgpa=0;

    fstream read("count.txt",ios:: in);
    read>>scnt;
    read.close();
    fstream readd("stdata.txt",ios:: in);
    for(int i =1; i<=scnt; i++)
    {
        getline(readd,sfname);
        getline(readd,sid);
        getline(readd,sec);
        getline(readd,sdept);
        getline(readd,sadvisor);
        getline(readd,spass);
        getline(readd,reg);
        getline(readd,str);
        cgpa0 = stod(str);
        getline(readd,str);
        cgpa1 = stod(str);
        getline(readd,str);
        cgpa2 = stod(str);
        getline(readd,str);
        cgpa3 = stod(str);
        getline(readd,str);
        cgpa4 = stod(str);
        getline(readd,str);
        cgpa5 = stod(str);
        getline(readd,str);
        cgpa6 = stod(str);
        getline(readd,str);
        cgpa7 = stod(str);
        getline(readd,str);
        tcgpa = stod(str);
        data[i] = student(sfname,sid,sdept,sec,sadvisor,spass,course,cgpa0,cgpa1,cgpa2,cgpa3,cgpa4,cgpa5,cgpa6,cgpa7,tcgpa,reg);
    }
    readd.close();
}
///reading from ttdata(teacher) file

void read_tt()
{
    string tfname,tid,tdept,desig,tpass;
    fstream read("count2.txt",ios:: in);
    read>>tcnt;
    read.close();
    fstream readd("ttdata.txt",ios:: in);
    for(int i =1; i<=tcnt; i++)
    {
        getline(readd,tfname);
        getline(readd,tid);
        getline(readd,tdept);
        getline(readd,desig);
        getline(readd,tpass);
        data2[i] = teacher(tfname,tid,tdept,desig,tpass);
    }
    readd.close();
}

///writing students data to stdata file

void write_st()
{
    fstream outt("count.txt",ios:: out);
    outt<<scnt<<endl;
    outt.close();
    fstream wriite("stdata.txt",ios:: out);
    wriite.close();
    fstream write("stdata.txt",ios::app);
    for(int i = 1; i<=scnt; i++)
    {
        write<<data[i].sfname<<endl;
        write<<data[i].sid<<endl;
        write<<data[i].sec<<endl;
        write<<data[i].sdept<<endl;
        write<<data[i].sadvisor<<endl;
        write<<data[i].spass<<endl;
        write<<data[i].reg<<endl;
        write<<data[i].cgpa0<<endl;
        write<<data[i].cgpa1<<endl;
        write<<data[i].cgpa2<<endl;
        write<<data[i].cgpa3<<endl;
        write<<data[i].cgpa4<<endl;
        write<<data[i].cgpa5<<endl;
        write<<data[i].cgpa6<<endl;
        write<<data[i].cgpa7<<endl;
        write<<data[i].tcgpa<<endl;
    }
    write.close();

}

///writing teachers data to ttdata file
void write_tt()
{
    fstream outt("count2.txt",ios:: out);
    outt<<tcnt<<endl;
    outt.close();
    fstream wriite("ttdata.txt",ios:: out);
    wriite.close();
    fstream write("ttdata.txt",ios::app);
    for(int i = 1; i<=tcnt; i++)
    {
        write<<data2[i].tfname<<endl;
        //write<<data2[i].tlname<<endl;
        write<<data2[i].tid<<endl;
        write<<data2[i].tdept<<endl;
        write<<data2[i].desig<<endl;
        write<<data2[i].tpass<<endl;
    }
    write.close();

}

///Animation start

void gotoxy(int y,int x)
{
    COORD CRD;
    CRD.X=x;
    CRD.Y=y;
    SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE),CRD );
}
void go()
{
    gotoxy(8,8);
    cout<<"\n";
}
void animated_cls()
{
    for(int z=0; z<=35; z++)
    {
        gotoxy(z,1);
        cout<<"                                                                                                                                                            ";
        fflush(stdout);
        usleep(9999);
    }
}

string menu()
{
    system("Color E4");

    gotoxy(5,10);
    cout<<setfill(char(chh-49))<<setw(90)<<" "<<endl;
    fflush(stdout);
    usleep(8000);
    gotoxy(6,10);
    cout<<setfill(char(chh-49))<<setw(90)<<" "<<endl;
    fflush(stdout);
    usleep(8000);
    system("Color E4");
    for(int i = 7; i<=18; i++)
    {
        gotoxy(i,10);
        cout<<char(chh-68)<<char(chh-68)<<endl;
        fflush(stdout);
        usleep(1000);
        gotoxy(i,55);
        cout<<char(chh-68)<<endl;
        fflush(stdout);
        usleep(1000);
        gotoxy(i,97);
        cout<<char(chh-68)<<char(chh-68)<<endl;
        fflush(stdout);
        usleep(1000);
    }
    system("Color E0");
    gotoxy(19,10);
    cout<<setfill(char(chh-49))<<setw(90)<<" "<<endl;
    fflush(stdout);
    usleep(8000);
    gotoxy(20,10);
    cout<<setfill(char(chh-49))<<setw(90)<<" "<<endl;
    fflush(stdout);
    usleep(8000);
    system("Color E4");
    for(int i =1; i<=5; i++)
    {
        gotoxy(12,25);
        cout<<"       "<<endl;
        gotoxy(12,75);
        cout<<"       "<<endl;
        fflush(stdout);
        usleep(8000);
        gotoxy(12,25);
        cout<<"Teacher"<<endl;
        gotoxy(12,75);
        cout<<"Student"<<endl;
        fflush(stdout);
        usleep(8000);
    }
    system("Color E0");
    int j =28,jj=28,l=78,ll=78;
    for(int i = 7; i<=12; i++)
    {
        gotoxy(i,j);
        cout<<chh<<endl;
        fflush(stdout);
        usleep(999);
        gotoxy(i,jj);
        cout<<chh<<endl;
        fflush(stdout);
        usleep(999);
        gotoxy(i,l);
        cout<<chh<<endl;
        fflush(stdout);
        usleep(999);
        gotoxy(i,ll);
        cout<<chh<<endl;
        fflush(stdout);
        usleep(999);
        l-=1;
        ll++;
        j-=1;
        jj++;
    }
    system("Color E0");
    j =23;
    jj=33;
    l=73;
    ll=83;
    system("Color E4");
    for(int i = 13; i<=18; i++)
    {
        gotoxy(i,j);
        cout<<chh<<endl;
        fflush(stdout);
        usleep(8000);
        gotoxy(i,jj);
        cout<<chh<<endl;
        fflush(stdout);
        usleep(8000);

        gotoxy(i,l);
        cout<<chh<<endl;
        fflush(stdout);
        usleep(8000);
        gotoxy(i,ll);
        cout<<chh<<endl;
        fflush(stdout);
        usleep(8000);
        l+=1;
        ll--;
        j+=1;
        jj--;
    }
    system("Color F4");
    gotoxy(22,10);
    cout<<"==>Enter 1 for Teacher's segment.\n";
    sleep;
    cout<<"\t  ==>Enter 2 for Student's segment.\n";
    sleep;
    cout<<"\t  ==>Enter Your CHOICE(1/2):\n\t   "<<chh;
    fflush(stdout);
    usleep(8000);

    string k;
    cin>>k;
    animated_cls();
    return k;
}

///login animation
void login_animation()
{
    for(int z=1; z<=5; z++)
    {
        cls;
        usleep(9999);
        int x=6;
        gotoxy(6,21);
        for(int d =1; d<=39; d++)
            cout<<char(207);
        for(int g =1; g<=13; g++)
        {
            gotoxy(x,20);
            cout<<char(182);
            gotoxy(x,60);
            cout<<char(199);
            x++;
        }
        gotoxy(18,21);
        for(int d =1; d<=39; d++)
            cout<<char(209);
        usleep(40000);
    }
}
void success()
{
    cls;
    go();
    cout<<"...................................................................................................................\n";
    cout<<"\t\t\tSuccessfull!! please wait...\n";
    cout<<"...................................................................................................................\n";
    fflush(stdout);
    usleep(999000);
    cls;
}

void wrong()
{
    cls;
    system("Color 47");
    for(int i =1; i<=4; i++)
    {
        cls;
        go();
        fflush(stdout);
        usleep(70000);
        cout<<"\t\t\t !!! \n";
        cout<<"\t\t\t Wrong choice/No data found!!\n";
        fflush(stdout);
        usleep(70000);
    }
    cout<<"-------------------------------------------------------------------------------------------------------------------\n";
    cout<<"\t\t\t"<<chh<<" Enter any key.\n\t\t\tEnter: ";
    string l;
    cin>>l;
}
/// animation end;

void take_st()
{
    string ssfname,sslname,ssid,ttname,ssdept,ttdept,ddesig,ssec,ssadvisor,password;
    int k;
    system("cls");
    go();
    cout<<"\t\t\t __Enter Student Info__\n\n";
    cout<<"\t\t\t Choose the number of students you want to input(Must input integers,eg:1)\n\t\t\t"<<chh;
    cin>>k;
    system("cls");
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(k--)
    {
        cls;
        cout<<"\n\n\t\t\t>>Enter information for student no:"<<scnt+1<<"\n\n\t\t\t";
        cout<<">>Student ID(6 digits): ";
        cin>>ssid;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"\t\t\t>>Name                : ";
        getline(cin,ssfname);
        cout<<"\t\t\t>>Section(eg:1BM)     : ";
        cin>>ssec;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"\t\t\t>>Department          : ";
        cin>>ssdept;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"\t\t\t>>Advisor             : ";
        getline(cin,ssadvisor);
        cout<<"\t\t\t>>PASSWORD            : ";
        cin>>password;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        scnt+=1;
        data[scnt] = student(ssfname,ssid,ssdept,ssec,ssadvisor,password);
        write_st();
        system("cls");
    }
}
void delete_st()
{
    cls;
    string id;
    int index = -1;
    go();
    cout<<"\t\t\t"<<chh<<"Enter Student id to Delete:";
    cin>>id;
    for(int i =1; i<=scnt; i++)
    {
        if(data[i].sid == id)
        {
            index = i;
            break;
        }
    }
    if(index == -1)
        wrong();
    else
    {
        for(int i = index; i<scnt; i++)
            data[i]  = data[i+1];
        scnt-=1;
        write_st();
        read_st();
        success();
    }
}
void delete_tt()
{
    cls;
    string id;
    int index = -1;
    go();
    cout<<"\t\t\t"<<chh<<"Enter teacher id to Delete:";
    cin>>id;
    for(int i =1; i<=tcnt; i++)
    {
        if(data2[i].tid == id)
        {
            index = i;
            break;
        }
    }
    if(index == -1)
        wrong();
    else
    {
        for(int i = index; i<tcnt; i++)
            data2[i]  = data2[i+1];
        tcnt-=1;
        write_tt();
        read_tt();
        success();
    }

}
///student logged in
void log_in_st(int index)
{
    int p=1;
    string roll = data[index].sid;

    while(p)
    {
        system("Color B4");
        string choicee;
        char choice;
        cls;
        login_animation();
        gotoxy(7,8);
        cout<<"\n";
        cout<<"\t\t\t        WELCOME "<<data[index].sfname<<endl<<endl;
        usleep(9999);
        data[index].show();
        cout<<"\n\n\n\t\t    |Enter 1 for add new student(s)";
        usleep(9999);
        cout<<"\n\t\t    |Enter 2 for update Your Data(s)";
        usleep(9999);
        cout<<"\n\t\t    |Enter 3 for update course registration";
        usleep(9999);
        cout<<"\n\t\t    |Enter 4 for view result";
        usleep(9999);
        cout<<"\n\t\t    |Enter 5 for view all teachers";
        usleep(9999);
        cout<<"\n\t\t    |Enter 6 for delete student";
        usleep(9999);
        cout<<"\n\t\t    |Enter 0 for log out\n\t\t    "<<chh;
        cin>>choicee;
        choice = choicee[0];
        animated_cls();
        switch(choice)
        {
        ///Add Student
        case '1':
        {
            take_st();
            success();
            animated_cls();
            break;
        }

        ///update
        case '2':
        {
            cls;
            string ssfname,ssid,ttname,ssdept,ttdept,ddesig,ssec,ssadvisor,password;
            cout<<endl<<"\t\t\tPresent data:"<<endl;
            data[index].show();
            cout<<"\n\n\t\t\t>>Enter New informations"<<"\n\n\t\t\t";
            cout<<">>New Student ID(6 digits): ";
            cin>>ssid;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"\t\t\t>>New Name                : ";
            getline(cin,ssfname);
            cout<<"\t\t\t>>New Section             : ";
            cin>>ssec;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"\t\t\t>>New Department          : ";
            cin>>ssdept;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"\t\t\t>>New Advisor             : ";
            getline(cin,ssadvisor);
            cout<<"\t\t\t>>New PASSWORD            : ";
            cin>>password;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            data[index] = student(ssfname,ssid,ssdept,ssec,ssadvisor,password,data[index].course,data[index].cgpa0,data[index].cgpa1,data[index].cgpa2,data[index].cgpa3,data[index].cgpa4,data[index].cgpa5,data[index].cgpa6,data[index].cgpa7,data[index].tcgpa,data[index].reg);
            write_st();
            system("cls");
            p = 0;

            cls;
            go();
            cout<<"\t\t\tSuccessfull!!\n\t\t\tYou'll be logged out. please wait...";
            fflush(stdout);
            usleep(999999);
            cls;
            break;
        }

        ///course registration
        case '3':
        {
            string x;

            if(data[index].reg == "0")
            {
                cls;
                go();
                cout<<"\t\t\t"<<chh<<" Your Current Course enrollment status is: "<<data[index].course<<endl;
                cout<<"\n\n\t\t\t"<<chh<<" Enter 1 for Apply for enrollment: ";
                cin>>x;
                if(x =="1")
                {
                    data[index].reg ="1";
                    write_st();
                    read_st();
                    cls;
                    go();
                    cout<<"\t\t\t"<<chh<<"Your course enrollment request successfully sent to your advisor..\n\t\t\tPlease wait!!!\n";
                    usleep(999900);
                    cout<<"\t\t\t"<<chh<<"Enter any key for continue: ";
                    string ch;
                    cin>>ch;
                }
                else
                {
                    wrong();
                }

            }
            else
            {
//                cls;
//                go();
                if(data[index].reg=="1")
                    cout<<"\t\t\t"<<chh<<"Already Pending\n";
                else if(data[index].reg=="2" )
                    cout<<"\t\t\t"<<chh<<"Already Enrolled(Approved)\n";
                else
                    cout<<"\t\t\t"<<chh<<"Already Denied\n";
                cout<<"\t\t\t"<<chh<<"Enter any Key for continue!\n\t\t\tEnter : ";
                char ch;
                cin>>ch;
            }
            animated_cls();
            break;
        }

        ///view result
        case '4':
        {
            int sem;
            sem = data[index].sec[0] - '0';
            cls;
            cout<<endl<<endl;
            cout<<"\n\n\t  -------------------------------------------------------------------------\n";
            data[index].show();
            cout<<"\n------------------------------------------------------------------------------------\n";
            cout<<"\t\t\t\tResults:\n";
            cout<<"------------------------------------------------------------------------------------\n";
            data[index].show_result(sem);
            cout<<"\t\t\t"<<chh<<"Enter any Key for continue!\n\t\t\tEnter : ";
            char ch;
            cin>>ch;
            animated_cls();
            break;
        }
        ///view teacher
        case '5':
        {
            cls;
            cout<<endl<<endl;
            for(int y=1; y<=tcnt; y++)
            {
                cout<<"\t\t\t   #Teacher no : "<<y<<endl;
                cout<<"\t\t-----------------------------------------\n";
                data2[y].show();
            }
            cout<<"\t\t\t"<<chh<<"Enter any Key for continue!\n\t\t\tEnter: ";
            char ch;
            cin>>ch;
            break;
        }

        ///delete student
        case '6':
        {
            delete_st();
            for(int l =1; l<=scnt; l++)
            {
                if(data[l].sid == roll)
                    index = l;
                break;
            }
            break;
        }


        case '0':
        {
            p =0;
            animated_cls();
            break;
        }


        default:
            wrong();
        }
    }
}


void take_tt()
{
    string ttid,tpass,ttfname,ttdept,ddesig;
    int kk;
    system("cls");
    cout<<"\t\t\t __Enter Teacher Info__\n\n";
    cout<<"\t\t\t Choose the number of Teacher you want to input((Must input integers)\n\t\t\t";
    cin>>kk;
    system("cls");
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i =1; i<=kk; i++)
    {
        cout<<"\t\t\t >>Enter information for Teacher no:"<<tcnt+1<<"\n\n\t\t\t";
        cout<<">>Teacher ID(6 digits): ";
        cin>>ttid;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"\t\t\t>>Name: ";
        getline(cin,ttfname);
        cout<<"\t\t\t>>Designation: ";
        getline(cin,ddesig);
        cout<<"\t\t\t>>Department: ";
        cin>>ttdept;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"\t\t\t>>Password: ";
        cin>>tpass;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        tcnt++;
        data2[tcnt]=teacher(ttfname,ttid,ttdept,ddesig,tpass);
        write_tt();
        system("cls");
    }
}

void log_in_tt(int index)
{
    read_st();
    read_tt();
    string  roll = data2[index].tid;
    int p=1;
    while(p)
    {
        system("Color E0");
        int msg =0;
        read_st();
        read_tt();
        for(int q=1; q<=scnt; q++)
        {
            if(data[q].sadvisor == data2[index].tfname && data[q].reg == "1")
                msg+=1;
        }

        cls;
        string choicee;
        char choice;
        login_animation();
        go();
        cout<<"\t\t\t      WELCOME "<<data2[index].tfname<<endl<<endl;
        data2[index].show();
        cout<<"\n\n\n\n\t\t    |Enter 1 for add new Teachers(s)";
        usleep(9999);
        cout<<"\n\t\t    |Enter 2 for update Your Data(s)\n";
        usleep(9999);
        cout<<"\t\t    |Enter 3 for Enrollment requests";
        cout<<"("<<msg<<")\n";
        usleep(9999);
        cout<<"\t\t    |Enter 4 To View All Students\n";
        usleep(9999);
        cout<<"\t\t    |Enter 5 for result processing\n";
        usleep(9999);
        cout<<"\t\t    |Enter 6 for delete student\n";
        usleep(9999);
        cout<<"\t\t    |Enter 7 for delete teacher\n";
        usleep(9999);
        cout<<"\t\t    |Enter 0 for log out\n\t\t    "<<chh;
        cin>>choicee;
        choice = choicee[0];
        animated_cls();
        switch(choice)
        {
        ///ADD new
        case '1':
        {
            take_tt();
            success();
            animated_cls();
            break;
        }

        ///Update data
        case '2':
        {
            cls;
            cout<<endl<<endl;
            data2[index].show();
            cout<<endl<<endl;
            string ttid,tpass,ttfname,ttlname,ttdept,ddesig;
            cout<<"\t\t\t"<<chh<<"Enter New informations"<<"\n\n";
            cout<<"\t\t\t>>New Teacher ID(6 digits): ";
            cin>>ttid;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"\t\t\t>>New Name: ";
            getline(cin,ttfname);
            cout<<"\t\t\t>>New Designation: ";
            getline(cin,ddesig);
            cout<<"\t\t\t>>New Department: ";
            cin>>ttdept;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"\t\t\t>>New Password: ";
            cin>>tpass;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            data2[index]=teacher(ttfname,ttid,ttdept,ddesig,tpass);
            write_tt();
            p=0;
            cls;
            go();
            cout<<"\t\t\tSuccessfull!!\n\t\t\tYou'll be logged out. please wait...";
            fflush(stdout);
            usleep(999999);
            cls;
            break;

        }

        ///Enrollment request
        case '3':
        {
            cls;
            string choice,id;
            int flag = 0,fl=0,z=1;;
            for(int y =1; y<=msg; y++)
            {
                flag =1;
                for(int a=1; a<=scnt; a++)
                {
                    if(data[a].sadvisor == data2[index].tfname && data[a].reg == "1")
                    {
                        cout<<"\n\n\t\t\tRequest No: "<<z<<endl;
                        data[a].show();
                        cout<<"\t\t\tEnrollment Request: Yes\n\n";
                        z++;
                    }
                }
                cout<<"\t______________________________________________________________________________________\n\t\t\t"<<chh<<"Enter student id: ";
                cin>>id;
                cls;
                for(int a=1; a<=scnt; a++)
                {
                    if(data[a].sadvisor == data2[index].tfname && data[a].reg == "1" && data[a].sid == id)
                    {
                        cls;
                        fl =1;
                        go();
                        cout<<"\t\t-----------------------------------------\n";
                        data[a].show();
                        cout<<"\t\t\tEnrollment Request: Yes\n\n";
                        cout<<"\t________________________________________________________________________________________\n";
                        cout<<"\t\t\t"<<chh<<"Enter 1 for accept.\n\t\t\t"<<chh<<"Enter 2 for deny\n\t\t\tEnter: ";
                        cin>>choice;
                        if(choice == "1")
                        {
                            data[a].reg ="2";
                            cls;
                            go();
                            success();
                        }
                        else if(choice== "2")
                        {
                            data[a].reg ="3";
                            cls;
                            go();
                            cout<<"\t\t\tSuccessfull\n\t\t\tPlease wait!!!\n";
                            usleep(999900);
                        }

                        else
                            wrong();
                        write_st();
                        write_tt();

                        break;
                    }
                }

                if(fl == 0)
                    wrong();
                break;

            }
            if(flag == 0)
            {
                cls;
                go();
                cout<<"\t\t\t"<<chh<<"No Requests\n\t\t\tEnter Any key for main menu.\n\t-----------------------------------------------------------------------------------------------\n\t\t\tEnter : ";
                char ch;
                cin>>ch;
            }
            break;
        }

        ///view student
        case '4':
        {
            char choice,ch;
            cls;
            go();
            cout<<"\t____________________________________________________________________________________\n\n";
            cout<<"\t\t\t"<<chh<<"Enter 1 to view All students\n\t\t\t"<<chh<<"Enter 2 to view all students under you\n\t\t\t"<<chh<<"Enter 3 for Search student\n";
            cout<<"\t____________________________________________________________________________________\n\t\t\tEnter: ";
            cin>>choice;
            if(choice == '1')
            {
                cls;
                cout<<"\n\t\t\t-------------------------------\n";
                cout<<"\t\t\t    #Showing all students\n";
                cout<<"\t\t\t-------------------------------\n";
                cout<<endl;
                for(int i =1; i<=scnt; i++)
                {
                    cout<<"\t\t\t>>Student no: "<<i<<endl;
                    cout<<"\t\t\t-----------------\n";
                    data[i].show();
                    cout<<endl;
                }
                cout<<"\t\t\t"<<chh<<"Enter any key for main menu: ";
                cin>>ch;
                break;
            }
            else if(choice == '2')
            {
                cls;
                cout<<endl<<endl<<"\n\t\t\t"<<chh<<"Showing student list under you.\n  ======================================================================================\n\n";
                for(int i =1; i<=scnt; i++)
                {
                    if(data[i].sadvisor == data2[index].tfname)
                    {
                        data[i].show();
                        cout<<"\t\t\t-----------------\n\n";
                    }
                }
                cout<<"\t\t\t"<<chh<<"Enter any key for main menu: ";
                cin>>ch;
                break;
            }
            else if(choice == '3')
            {
                cls;
                string id;
                string ch;
                int flag =0;
                go();
                cout<<"\t\t\tEnter ID for search:";
                cin>>id;
                for(int i = 1; i<=scnt ; i++)
                {
                    cout<<"\n\n\t\t-----------------------------------------\n";
                    if(data[i].sid == id)
                    {
                        flag =1;
                        cout<<endl;
                        data[i].show();
                        cout<<"\t\t\tEnter any key for main menu: ";
                        cin>>ch;
                        animated_cls();
                        break;
                    }
                }
                if(flag != 1)
                    wrong();
                break;
            }
            else
                wrong();
            break;
        }

        ///result processing

        case '5' :
        {
            read_st();
            char choice;
            cls;
            go();
            cout<<"\t\t\t"<<chh<<"Enter 1 for Semester wise result input.\n";
            sleep;
            cout<<"\t\t\t"<<chh<<"Enter 2 for indivual result input.\n\t\t\t"<<":";
            sleep;
            cin>>choice;
            int cnt =1;
            if(choice == '1')
            {
                cls;
                go();
                cout<<"\t\t\tEnter Semester no for result processing(eg: 2) : ";
                char choose;
                int number=0,number2=1;
                cin>>choose;
                for(int i =1; i<=scnt; i++)
                {
                    char k = data[i].sec[0];
                    if(choose == k && data[i].sadvisor == data2[index].tfname )
                        number+=1;
                }
                cls;
                if(number == 0)
                    wrong();
                else
                {
                    for(int i =1; i<=scnt; i++)
                    {
                        char k = data[i].sec[0];
                        if(data[i].sadvisor == data2[index].tfname && choose == k)
                        {
                            cout<<"\n\n\n\t\t\tResult processing no "<<number2<<"/"<<number<<endl<<endl;
                            int sem;
                            double input;
                            sem = data[i].sec[0] - '0';
                            data[i].show();
                            cout<<endl;
                            if(data[i].cgpa0==0&&data[i].cgpa1==0&&data[i].cgpa2==0&&data[i].cgpa3==0&&data[i].cgpa4==0&&data[i].cgpa5==0&&data[i].cgpa6==0&&data[i].cgpa7==0&& data[i].tcgpa==0)
                                for(int z=1; z<sem; z++)
                                {
                                    cout<<"\t\t\t#Enter the result of "<<z<<"(th) semester of student "<<data[i].sid<<"(eg: 3.95)"<<endl<<"\t\t\tEnter 11 to skip this student"<<"\t\t\t:";
                                    cin>>input;
                                    if(input == 11)
                                        continue;
                                    data[i].set_result(input,z);
                                    number2+=1;
                                    write_st();
                                }
                            cout<<"\t\t\t#Enter the result of "<<sem<<"(th) semester of student "<<data[i].sid<<"(eg: 3.95)"<<endl<<"\t\t\t#Enter 11 to skip this student"<<"\n\t\t\t:";
                            cin>>input;
                            if(input != 11)
                            {
                                data[i].set_result(input,sem);
                                write_st();
                            }
                            number2+=1;
                            cnt+=1;
                        }
                    }
                }
                success();
                break;
            }
            else if(choice =='2')
            {
                cls;
                go();
                cout<<"\t\t\t"<<chh<<" Enter student roll for result processing : ";
                string k;
                int f=0;
                cin>>k;
                for(int i =1; i<=scnt; i++)
                {
                    if(data[i].sadvisor == data2[index].tfname && data[i].sid == k)
                    {
                        f =1;
                        int sem;
                        double input;
                        sem = data[i].sec[0] - '0';
                        cout<<endl;
                        data[i].show();
                        cout<<endl;
                        if(data[i].cgpa0==0&&data[i].cgpa1==0&&data[i].cgpa2==0&&data[i].cgpa3==0&&data[i].cgpa4==0&&data[i].cgpa5==0&&data[i].cgpa6==0&&data[i].cgpa7==0&& data[i].tcgpa==0)
                            for(int z=1; z<sem; z++)
                            {
                                cout<<"\t\t\t"<<chh<<"Enter the result of "<<z<<"(th) semester of student "<<data[i].sid<<"(eg: 3.95)"<<endl<<"\t\t\tEnter :: ";
                                cin>>input;
                                data[i].set_result(input,z);
                                write_st();
                            }
                        cout<<"\t\t\t"<<chh<<"Enter the result of "<<sem<<"(th) semester of student "<<data[i].sid<<"(eg: 3.95)"<<endl<<"\t\t\t";
                        cin>>input;
                        data[i].set_result(input,sem);
                        write_st();
                        animated_cls();
                        cnt+=1;
                        success();
                    }
                }
                if(f == 0)
                    wrong();
                break;
            }
            else
                wrong();
            break;
        }

        ///delete student
        case '6':
        {
            delete_st();

            break;
        }

       ///delete teacher
        case '7':
        {
            delete_tt();
            for(int l =1; l<=scnt; l++)
            {
                if(data2[l].tid == roll)
                    index = l;
                break;
            }
            break;
        }


        case '0':
        {
            p = 0;
            break;
        }
        default :
            wrong();

        }
    }
}

void first_login()
{
    read_st();
    read_tt();
    cls;
    string ch;

    if(scnt==0)
    {
        go();
        cout<<"\n\t----------------------------------------------------------------------------------------------------\n";
        cout<<"\t\t\t   Welcome to Mamun's project for the first time.\n\t----------------------------------------------------------------------------------------------------\n\t\t\t";
        cout<<chh<<"Let's Start.\n\t\t\t";
        cout<<chh<<"Enter Atleast 1 Student data first.\n\t\t\t";
        sleep;
        cout<<chh<<"Enter any key for continue\n\t\t\tEnter: ";
        cin>>ch;
        take_st();
        go();
        cout<<"\t\t\tSuccessfull!!\n\t\t\tPlease wait..";
        fflush(stdout);
        usleep(999999);
        cls;
    }
    if(tcnt==0)
    {
        go();
        cout<<"\n\t----------------------------------------------------------------------------------------------------\n";
        cout<<"\t\t\t   Welcome to Mamun's project for the first time.\n\t----------------------------------------------------------------------------------------------------\n\t\t\t";
        cout<<chh<<"Let's Start.\n\t\t\t";
        cout<<chh<<"Enter Atleast 1 teacher data first.";
        sleep;
        cout<<"\n\t\t\t"<<chh<<"Enter any key for continue\n\t\t\tEnter: ";
        cin>>ch;
        take_tt();
        go();
        cout<<"\t\t\tSuccessfull!!\n\t\t\tPlease wait..";
        fflush(stdout);
        usleep(999999);
        cls;
    }
    cls;
    go();
    cout<<"\t\t\tGreat..\n\t\tWe are Ready to GO.\n   ---------------------------------------------------------------------------------\n\t\t"<<chh<<"Enter any key for continue.\n\t\t";

    cin>>ch;
}



int main()
{
    system("Color E4");
    int truee=1;
    while(truee)
    {
        read_st();
        read_tt();
        cls;
        if(scnt == 0 || tcnt == 0)
        {
            ///calling write functions to create the files first;
            write_st();
            write_tt();
            first_login();
            continue;
        }
        string q=menu();
        cls;
        ///teacher part
        if(q == "1")
        {
            int flag =0;
            cls;
            string id,pass;
            system("Color A4");
            go();
            cout<<"\t\t------------------------------------------------\n";
            cout<<"\t\t\tLog in by ID & Password!\n";
            cout<<"\t\t------------------------------------------------\n\n";
            cout<<"\t\t\t"<<chh<<"Enter ID(Teacher): ";
            cin>>id;
            cout<<"\t\t\t"<<chh<<"Enter Password   : ";
            cin>>pass;
            for(int i =1; i<=tcnt; i++)
            {
                if(data2[i].tid == id && data2[i].tpass == pass)
                {
                    log_in_tt(i);
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                wrong();
        }
        ///student part
        else if( q== "2")
        {
            cls;
            string id,pass;
            system("Color A4");
            go();
            int flag =0;
            cout<<"\t\t------------------------------------------------\n";
            cout<<"\t\t\tLog in by ID & Password!\n";
            cout<<"\t\t------------------------------------------------\n\n";
            cout<<"\t\t\t"<<chh<<"Enter ID(Students): ";
            cin>>id;
            cout<<"\t\t\t"<<chh<<"Enter Password    : ";
            cin>>pass;
            for(int i =1; i<=scnt; i++)
            {
                if(data[i].sid == id && data[i].spass == pass)
                {
                    flag=1;
                    log_in_st(i);
                    break;
                }
            }
            if(flag == 0)
                wrong();
        }
        else
            wrong();
    }
    return 0;
}