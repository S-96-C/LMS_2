#include<iostream>
#include<cstring>
#define SIZE 10

using namespace std;

class Payment
{
  private:
    char payID[10];
    char payDate[11];
    char payType[10];
    char payDescription[20];
    double payAmount;
    
  public:
    Payment();
    Payment(char paID[], char paDate[], char paType[], char paDesc[]);
    Payment(double paAmo);
    void setPaymentDetails(char paID[], char paDate[], char paType[], char paDesc[]);

    void setpayAmount(double paAmo);

    double getpayAmount();

    void displayPayment();
    ~Payment();

};

Payment::Payment()
{
  strcpy(payID, "");
  strcpy(payDate, "");
  strcpy(payType, "");
  strcpy(payDescription, "");
  double payAmount = 0;
}

Payment::Payment(char paID[], char paDate[], char paType[], char paDesc[])
{
  strcpy(payID, paID);
  strcpy(payDate, paDate);
  strcpy(payType, paType);
  strcpy(payDescription, paDesc);
}

Payment::Payment(double paAmo)
{
  double payAmount = paAmo;
}

void Payment::setPaymentDetails(char paID[], char paDate[], char paType[], char paDesc[])
{
  char* payID = paID;
  char* payDate = paDate;
  char* payType = paType;
  char* payDescription = paDesc;

}

void Payment::setpayAmount(double paAmo)
{
  payAmount = paAmo;
}

double Payment::getpayAmount()
{
  return 0;
}

void Payment::displayPayment()
{
}

Payment::~Payment(){}

class Publisher
{
  private:
    char publisherID[10];
    char publisherName[10];
    char publisherAddress[30];
    int yearOfpub;
    int publisherTelno;

  public:
    Publisher();
    Publisher(char pID[], char pName[], char pAdd[], int pYear, int pTelno);
    void setPublisherDetails(char pID[], char pName[], char pAdd[], int pYear, int pTelno);

    void displayPublisher();
    ~Publisher();

};

Publisher::Publisher()
{
  strcpy(publisherID, "");
  strcpy(publisherName, "");
  strcpy(publisherAddress, "");
  int yearOfpub = 0;
  int publisherTelno = 0;
}

Publisher::Publisher(char pID[], char pName[], char pAdd[], int pYear, int pTelno)
{
  strcpy(publisherID, pID);
  strcpy(publisherName, pName);
  strcpy(publisherAddress, pAdd);
  int yearOfpub = pYear;
  int publisherTelno = pTelno;
}

void Publisher::setPublisherDetails(char pID[], char pName[], char pAdd[], int pYear, int pTelno)
{
  char* publisherID = pID;
  char* publisherName = pName;
  char* publisherAddress = pAdd;
  int yearOfpub = pYear;
  int publisherTelno = pTelno;
}

void Publisher::displayPublisher()
{
}

Publisher::~Publisher(){}

class Report
{
  private:
    char reportID[10];
    char reportType[10];
    char reportDescription[25];

  public:
    Report();
    Report(char rID[], char rType[], char rDesc[]);
    void setReportDetails(char rID[], char rType[], char rDesc[]);

    void displayReport();
    ~Report();

};

Report::Report()
{
  strcpy(reportID, "");
  strcpy(reportType, "");
  strcpy(reportDescription, "");
}

Report::Report(char rID[], char rType[], char rDesc[])
{
  strcpy(reportID, rID);
  strcpy(reportType, rType);
  strcpy(reportDescription, rDesc);
}

void Report::setReportDetails(char rID[], char rType[], char rDesc[])
{
  char* reportID = rID;
  char* reportType = rType;
  char* reportDescription = rDesc;
}

void Report::displayReport()
{
}

Report::~Report(){}


class Librarian
{
  protected:
    char libID[10];
    char libEmail[25];
    char libFirstname[10];
    char libSecondname[10];
    int libTelno;
    char libAddress[25];

  public:
    Librarian();
    Librarian(char lID[], char lEmail[], char lFirstn[], char lSecn[], int lTelno, char lAdd[]);
    void setLibrarianDetails(char lID[], char lEmail[], char lFirstn[], char lSecn[], int lTelno, char lAdd[]);

    void displayLibrarian();
    ~Librarian();

};

Librarian::Librarian()
{
  strcpy(libID, "");
  strcpy(libEmail, "");
  strcpy(libFirstname, "");
  strcpy(libSecondname, "");
  int libTelno = 0;
  strcpy(libAddress, "");
}

Librarian::Librarian(char lID[], char lEmail[], char lFirstn[], char lSecn[], int lTelno, char lAdd[])
{
  strcpy(libID, lID);
  strcpy(libEmail, lEmail);
  strcpy(libFirstname, lFirstn);
  strcpy(libSecondname, lSecn);
  int libTelno = lTelno;
  strcpy(libAddress, lAdd);
}

void Librarian::setLibrarianDetails(char lID[], char lEmail[], char lFirstn[],char lSecn[], int lTelno, char lAdd[])
{
  char* libID = lID;
  char* libEmail = lEmail;
  char* libFirstname = lFirstn;
  char* libSecondname = lSecn;
  int libTelno = lTelno;
  char* libAddress = lAdd;
}

void Librarian::displayLibrarian()
{
  cout << "Library ID : " << libID << endl;
  cout << "Library Email : " << libEmail << endl;
  cout << "First Name : " << libFirstname << endl;
  cout << "Second Name : " << libSecondname << endl;
  cout << "Contact Number : " << libTelno << endl;
  cout << "Address : " << libAddress << endl;
}

Librarian::~Librarian()
{
}

class Admin : public Librarian //inheritance
{
  private:
    char adminID[10];
    char firstName[10];
    char secondName[10];
    int adminTelno;

    Publisher *publi[1]; //aggregation
    Report *rpt; // association

  public:
    Admin();
    Admin(char aID[], char aFirstn[], char aSecn[], int aTeln, Report *rpt, Publisher *pub1);
    void addAdminDetails(char aID[], char aFirstn[], char aSecn[], int aTeln, Report *rpt, Publisher *pub1);

    void addPublisher(Publisher *pub1);
    void displayAdmin();
    ~Admin();

};

Admin::Admin()
{
  strcpy(adminID,"");
  strcpy(firstName, "");
  strcpy(secondName, "");
  int adminTelno = 0;
}

Admin::Admin(char aID[], char aFirstn[], char aSecn[], int aTeln, Report *r, Publisher *pub1)
{
  strcpy(adminID, aID);
  strcpy(firstName, aFirstn);
  strcpy(secondName, aSecn);
  int adminTelno = aTeln;
  rpt = r;
  publi[0] = pub1;

}

void Admin::addAdminDetails(char aID[], char aFirstn[], char aSecn[], int aTeln, Report *r, Publisher *pub1)
{
  char* adminID = aID;
  char* firstName = aFirstn;
  char* secondName = aSecn;
  int adminTelno = aTeln;
  rpt = r;
  publi[0] = pub1;
}

void Admin::displayAdmin()
{
  cout << "Admin First Name : " << firstName << endl;
  rpt->displayReport();
}

void Admin::addPublisher(Publisher *pub1)
{
  Publisher * publi = pub1;
}

Admin::~Admin(){}

class StoreKeeper
{
  private:
    int storekeeperID;
    char storekName[10];
    int storekTelno;

  public:
    StoreKeeper();
    StoreKeeper(int skID, char skName[], int skTeln);
    void setStorekDetails(int skID, char skName[], int skTeln);
    
    void displayAdsk();
    void addAdmin(int noOfsk, Admin *a);

    void displayStoreKeeper();
    ~StoreKeeper();

};

StoreKeeper::StoreKeeper()
{
  int storekeeperID = 0;
  strcpy(storekName, "");
  int storekTelno = 0;
}

StoreKeeper::StoreKeeper(int skID, char skName[], int skTeln)
{
  int storekeeperID = skID;
  strcpy(storekName, skName);
  int storekTelno = skTeln;
}


void StoreKeeper::setStorekDetails(int skID, char skName[], int skTeln)
{
  storekeeperID = skID;
  char* storekName = skName;
  storekTelno = skTeln;
}

void StoreKeeper::displayStoreKeeper()
{
}

void StoreKeeper::displayAdsk()
{
  cout << "Store Keeper Name  : " << storekName << endl;
}

void setAdmin(int noOfsk, Admin *a)
{
}

StoreKeeper::~StoreKeeper(){}

class System;
class Member;
class Book;

class System
{
  private:

    char systemID[10];
    char systemPassword[15];
    int noOfMembers;

    Member *mem[SIZE]; //bidirectional

    Librarian *libr;
    int libTelno;
    Book *bk[2];

  public:
    System();
    System(char sID[], char sPass[], Book *bk);
    System(int libTelno);
    void setSystemDetails(char sID[], char sPass[], Book *bk);

    void addMember(Member *M);
    void displaySystemDetails();
    ~System();

};

System::System()
{
  strcpy(systemID, "");
  strcpy(systemPassword, "");
  int noOfMembers = 0;
  
}

System::System(char sID[], char sPass[], Book *bk)
{
  strcpy(systemID, sID);
  strcpy(systemPassword, sPass);
  int noOfMembers = 0;
  Book *bk1;
}

System::System(int libTelno)
{
  libr = new Librarian ();
}

void System::setSystemDetails(char sID[], char sPass[], Book *bk)
{
  char* systemID = sID;
  char* systemPassword = sPass;
}

void System::addMember(Member *M)
{
  if(noOfMembers < SIZE)
    mem[noOfMembers] = 0;
    noOfMembers++;    
}

void System::displaySystemDetails()
{
  cout << "Enter ID : " << systemID << endl;
  cout << "Password : " << systemPassword << endl;
}

System::~System(){}

class Member : public Librarian 
{
  private:

    char memID[5];
    char memEmail[20];
    char memAddress[30];
    char memType[10];
    char firstName[10];
    char secondName[10];
    int memTelno;

    Payment *pay[1];
    System *Sys; 

  public:
    Member();

    Member(char mID[], char mEmail[], char mAdd[], char mType[], char mFirstn[], char mSecn[], int mTelno, System *mSys, Payment *pay1);

    void setMemberDetails(char mID[], char mEmail[], char mAdd[], char mType[], char mFirstn[], char mSecn[], int mTelno, Payment *pay1);

    void addPayment(Payment *pay1);
    void displayMemberPayment();
    void displayMember();
  
    ~Member();
};

Member::Member()
{
  strcpy(memID, " ");
  strcpy(memEmail, " ");
  strcpy(memAddress, " ");
  strcpy(memType, " ");
  strcpy(firstName, " ");
  strcpy(secondName, " ");
  memTelno = 0;
}

Member::Member(char mID[], char mEmail[], char mAdd[], char mType[], char mFirstn[], char mSecn[], int mTelno, System *mSys, Payment *pay1)
{
  strcpy(memID, mID);
  strcpy(memEmail, mEmail);
  strcpy(memAddress, mAdd);
  strcpy(memType, mType);
  strcpy(firstName, mFirstn);
  strcpy(secondName, mSecn);
  memTelno = mTelno;
  Sys = mSys;
  Sys->addMember(this);
  pay[0] = pay1;
}

void Member::setMemberDetails(char mID[], char mEmail[], char mAdd[], char mType[], char mFirstn[], char mSecn[], int mTelno, Payment *pay1)
{
  char* memID = mID;
  char* memEmail = mEmail;
  char* memAddress = mAdd;
  char* memType = mType;
  char* firstName = mFirstn;
  char* secondName = mSecn;
  memTelno = mTelno;
  pay[0] = pay1;
}

void addPayment(Payment *pay1)
{
  Payment *pay = pay1;
}

void Member::displayMemberPayment()
{
  for(int i = 0; i < 2; i++)
  {
    pay[i]->displayPayment();
  }
}

void Member::displayMember()
{
  cout << "Member ID = " << memID << endl;
  cout << "Member Email : " << memEmail << endl;
  cout << "Member Address : " << memAddress << endl;
  cout << "Member Type : " << memType << endl;
  cout << "First Name : " << firstName << endl;
  cout << "Second Name : " << secondName << endl;
  cout << "Member Contact Number : " << memTelno << endl;
}

Member::~Member(){}

class Book
{
  private:
    char bookID[10];
    char bookTitle[20];
    char bookAuthor[15];
    char bookType[10];
    char bookDescription[50];
    double bookPrice;
    int bookISBN;

    Librarian *lib[0];

    Member *member[];

  public:
    Book();
    Book(char bID[], char bTitl[], char bAuth[], char bType[], char bDes[], double bPrice, int bISbn);
    void setBookDetails(char bID[], char bTitl[], char bAuth[], char bType[], char bDes[],  double bPrice, int bISbn);
    void setPrice(double bPrice);
    double getPrice();

    void displayBookDetails();
    ~Book();

};

Book::Book()
{
  strcpy(bookID, "");
  strcpy(bookTitle, "");
  strcpy(bookAuthor, "");
  strcpy(bookType, "");
  strcpy(bookDescription, "");
  double bookPrice = 0;
  int bookISBN = 0;
  member[0] = new Member();
  lib[0] = new Librarian();

}

Book::Book(char bID[], char bTitl[], char bAuth[], char bType[], char bDes[],  double bPrice, int bISbn)
{
  strcpy(bookID, bID);
  strcpy(bookTitle, bTitl);
  strcpy(bookAuthor, bAuth);
  strcpy(bookType, bType);
  strcpy(bookDescription, bDes);
  double bookPrice = bPrice;
  int bookISBN = bISbn;
  member[0] = new Member();
  lib[0] = new Librarian();

}

void Book::setBookDetails(char bID[], char bTitl[], char bAuth[], char bType[], char bDes[],  double bPrice, int bISbn)
{
  char* bookID = bID;
  char* bookTitle = bTitl;
  char* bookAuthor = bAuth;
  char* bookType = bType;
  char* bookDescription = bDes;
  double bookPrice = bPrice;
  int bookISBN = bISbn;
  member[0] = new Member();
}

void Book::setPrice(double bPrice)
{
  bookPrice = bPrice;
}

double Book::getPrice()
{
  return 0;
}

void Book::displayBookDetails()
{
  cout << "Enter Book ID : " << bookID << endl;
  cout << "Enter Book Title : " << bookTitle << endl;
  cout << "Enter Book Author : " << bookAuthor << endl;
  cout << "Enter Book Type : " << bookType << endl;
  cout << "Enter Book Description : " << bookDescription << endl;
  cout << "Enter Book Price is : " << bookPrice << endl;
  cout << "Enter Book ISBN : " << bookISBN << endl;
}

Book::~Book(){}


int main()
{  
  Admin *ad = new Admin();
  
  Publisher *p1 = new Publisher();
  Publisher *p2 = new Publisher();

  ad->displayAdmin();

  Report *r1 = new Report();
  Admin *a1 = new Admin();

  a1->displayAdmin();

  Member *m1 = new Member ();
  Member *m2 = new Member ();

  System *s1 = new System ();
  System *s2 = new System ();

  m1->displayMember();
  s1->displaySystemDetails();

  Book *b1 = new Book();
  b1->displayBookDetails();

  Member *m = new Member();
  m->displayMember();

  StoreKeeper *sk = new StoreKeeper();
  sk->displayAdsk();

  sk->displayStoreKeeper();

  Report *rp = new Report();
  rp->displayReport();

  Librarian *lib = new Librarian();
  lib->displayLibrarian();

  Payment *pay = new Payment();
  pay->getpayAmount();
  pay->displayPayment();

  Publisher *p = new Publisher();
  p->displayPublisher();

  System *s = new System();
  s->addMember(m);
  s->displaySystemDetails();

  return 0;

}