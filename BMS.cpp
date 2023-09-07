#include<iostream>
#include<iomanip>
using namespace std;

class bank
{
public :
int acno,n;
long double deposit,bal;
char name[50],type;
void openaccount();
void depositmoney(int);
void withdrawal(int);
void balanceEnquiry(int);
void Passbook(int);
void Staff();
};
void bank :: openaccount()
{
cout <<" Enter Account no : "<<endl;
cin >> acno;
cout <<" Enter Account holder name :"<<endl;
cin.ignore();
cin.getline(name,50);
cout <<" Select Account type (C/S) :"<<endl;
cin >>type;
cout <<" Enter initial deposit amount :"<<endl;
cin >> bal;
cout<<" Account created successfully..."<<endl;

}
void bank :: depositmoney(int n)
{
  long double x;
  if(acno==n)
  {
  cout << " Enter deposit amount : " <<endl;
  cin >>x;
  bal+=x;
  cout<< " New balance is : " << bal << endl;
  }
  else
  {
    cout<<" Account number is incorrect "<<endl;
  }

}
void bank :: withdrawal(int n)
{
  long double x;
  if(acno==n)
  {
  cout <<" Enter amount to be widthdrwal: "<< endl;
  cin >> x;
  if(x<=bal)
  {
  bal-=x;
  cout<<" Remaining balance is : "<< bal<<endl;
  }
  else
  {
    cout<<" Insufficient balance "<<endl;
  }
  }
  else
  {
    cout<< "Entered account number is incorrect"<<endl;
  }
}
void bank :: balanceEnquiry(int n)
{
 if(acno==n)
 {
    cout<< " Net balance is "<< bal <<endl;
 }
 else
 {
   cout<< "Entered account number is incorrect"<<endl;
 }
}

void bank :: Passbook(int n)
{
 if(acno==n)
  {
    cout << "Bank name : " << " Bank of India "<< setw(18)<<" IFSC code : " << "BOIB00067"<<endl;;
    cout << "Branch    : " << " Nerul "<< endl;
    cout << "Account number : " << acno << setw(32)<< "Account holder name : "<< name <<endl;
    cout << "Account type   : "<< type <<endl;
  }
 else
  {
    cout<< "Entered account number is incorrect"<<endl;
  }
}

void bank :: Staff()
  {
  cout << " Names " << setw(29) << " Position "<<endl;
  cout << " Shri Atanu Kumar Das" << setw(30) << " Managing Director & CEO "<<endl;
  cout << " Mr.Monoj Das " << setw(30) << " General Manager  "<<endl;
  cout << " Mr.D Hairsh  " << setw(37) << " Share holder director   "<<endl;
  cout << " Mr.Rajeev Bhatia " << setw(39) << " Co. Secretary & Compl. Officer"<<endl;
  }

int main()
{
  int ch;
  int n,acno;
    cout << "\t\t\t\t\t===============================\n"<<endl;
    cout << "\t\t\t\t\t      * BANK OF INDIA *\n"<<endl;
    cout << "\t\t\t\t\t===============================\n"<<endl;
  do
  {
    cout <<"\n\t\t\t\t\t\t::MAIN MENU::\n"<<endl;
    cout << "\t\t\t\t\t\t1. CREATE ACCOUNT"<<endl;
    cout << "\t\t\t\t\t\t2. DEPOSIT MONEY "<<endl;
    cout << "\t\t\t\t\t\t3. WITHDRAWAL "<<endl;
    cout << "\t\t\t\t\t\t4. BALANCE ENQUIRY"<<endl;
    cout << "\t\t\t\t\t\t5. E-PASSBOOK "<<endl;
    cout << "\t\t\t\t\t\t6. STAFF DETAILS "<<endl;
    cout << "\t\t\t\t\t\t7. EXIT\n"<<endl;
    cout << "\tSelect anyone option" << endl;
    cin >> ch;
    bank b1;
    switch (ch)
    {
    case 1:
    b1.openaccount();
    break;

    case 2:
    cout<< " Enter account number :"<<endl;
    cin>>n;
    b1.depositmoney(n);
    break;

    case 3:
    cout<< " Enter account number :"<<endl;
    cin>>n;
    b1.withdrawal(n);
    break;

    case 4:
    cout<< " Enter account number :"<<endl;
    cin>>n;
    b1.balanceEnquiry(n);
    break;

    case 5:
    cout<< " Enter account number :"<<endl;
    cin>>n;
    b1.Passbook(n);
    break;

    case 6:
    b1.Staff();
    break;

    case 7:
    cout << " EXIT "<<endl;
    break;

    default :
    cout <<"Invalid input check again"<<endl;
    }
    }
    while (ch!=7);
    return 0;

}
