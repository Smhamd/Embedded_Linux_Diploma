#include<iostream>
#include<vector>

#define List_Users  1
#define Add         2
#define DeleteUser  3
#define DeleteAll   4   
struct User 
{
    std::string name;
    std::string phone;
    std::string email;
};

void Entery_Function(void);
void List (const  std::vector<User>& (Addressbook));
void Add_User(std::vector<User>& (Addressbook));
void Delete_User(std::vector<User>& (Addressbook));


int main()
{
int Command;
std::vector<User> Addressbook;

Entery_Function();

while (1)

{
   std::cout<<"Enter Choice Number \n";
   std::cin>>Command;

  switch(Command)
{   
    case List_Users        : {  List(Addressbook);                  break;     }
    case Add               : {  Add_User(Addressbook);              break;     }
    case DeleteUser        : {  Delete_User(Addressbook);           break;     }
    case DeleteAll         : {  Addressbook.clear();                break;     }
}

}
    return 0;
}


void Entery_Function(void)
{
std::cout<<"Welcome to My Address book"<<std::endl;
std::cout<<"How can i help you ?"<<std::endl;
std::cout<<"\t | 1.List       \t | List   all users \n";
std::cout<<"\t | 2.Add        \t | Add    an  user  \n";
std::cout<<"\t | 3.Delete     \t | Delete an  user  \n";
std::cout<<"\t | 4.Delete All \t | Delete all       \n";
std::cout<<"\t | 5.Search     \t | Search for user  \n";
std::cout<<"\t | 6.Close      \t | Close Addr Book  \n";
std::cout<<"****************************************\n";
}

void List(const std::vector<User>& (Addressbook))
{   if( !(Addressbook.empty()) )
    {
          for (auto user : Addressbook)
          {
           std::cout << "Name: " <<  user.name     << std::endl;
           std::cout << "Phone: " << user.phone    << std::endl;
           std::cout << "Email: " << user.email    << std::endl;
           std::cout << "------------------------" << std::endl;
           }
    }
    else
    {
        std::cout<<"No Users found"<<std::endl;
    }
}

void Add_User(std::vector<User>& (Addressbook))
{
     User x ; 
            std::cout<<"Enter Name  \n";
            std::cin>>x.name;
            std::cout<<"Enter Phone \n";
            std::cin>>x.phone;
            std::cout<<"Enter Email \n";
            std::cin>>x.email;
            Addressbook.insert(Addressbook.end(),x);    
}

void Delete_User(std::vector<User>& (Addressbook))
{     
     int x;
     std::cout<<"Enter User_Number to be deleted \n";
     std::cin>>x;
     std::vector<User>::iterator it = Addressbook.begin()+x;
     Addressbook.erase(it);
     //std::cout<<typeid(it).name();
}


