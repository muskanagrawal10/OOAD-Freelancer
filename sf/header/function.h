using namespace std;
int agreecheck(string agree)
{
   if(!(agree[0] == 'y' || agree[0] == 'Y' ||agree[0] == 'n' || agree[0] == 'N' ))
   return 1;
   else
   return 0;
}

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}

void header(string name)
{
  cout<<"-----------------------------------------------------------------------"<<endl;
  cout<<"|  Signed in as : "<<bold_on<<name<<bold_off;
  for(int i=0;i<52-name.size();i++)
  {
    cout<<" ";
  }
  cout<<"|"<<endl;
  cout<<"|  "<<bold_on<<"q : "<<bold_off<<"Quit  |  "<<bold_on<<"0 : "<<bold_off<<"Logout  |  "<<bold_on<<"b : "<<bold_off<<"Back                               |"<<endl;
  // cout<<"|  q : Quit  |  l : Logout  |  b : Back                                |"<<endl;
  cout<<"-----------------------------------------------------------------------";
}

void choice()
{
  cout<<"   "<<bold_on<<"Enter your choice  :  "<<bold_off;
}

void space()
{
  cout<<"   ->  ";
}

void systemClear()
{
  system("clear");
}
