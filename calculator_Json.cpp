{
  "code" : " #include<iostream>
#include<math.h>
using namespace std;

int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
float x,y,z;
float fact (float);
void basic();
void sin();
void MATRIX();
void MATRIX2();
void DETERMINENT();
void QUAD();
void convert();
void table();
void prime();
void Febo();
void armst();
void facto();
void addition(float a,float b);
void subtraction (float c,float d);
void division (float e,float f);
void multiplication (float g,float h);
void addition ();
void multiplication ();
int A[3][3];
int B[3][3];
int multi[3][3];
int elementadd[3][3];
int elementmulti[3][3];




int main ()
{ int num;
   cout<<" Welcome to our Scientific Calculator programme  "<<endl<<endl<<"\t";
   cout<<" Please chose from below operations :: "<<endl<<endl;
  cout<<" Press 1 to do the Basic claculations "<<endl;
  cout<<" Press 2 to find value of sinx "<<endl;
  cout<<" Press 3 to find value of cosx "<<endl;
  cout<<" press 4 to find value of tanx "<<endl;
  cout<<" Press 5 to find value of logx "<<endl;
  cout<<" Press 6 for finding value of a^x (exponential function) "<<endl;
  cout<<" press 7 for finding value of square root of x (x^1/2) "<<endl<<endl;
  cout<<" Press 8 for Summation of two Matrix of order 3x3 "<<endl<<endl;
  cout<<" Press 9 for multiplication of two Matrix of order 3x3 "<<endl<<endl;
 // cout<<" Enter 10 to find the Determinent of Matrix "<<endl;
  cout<<" Enter 11 for solving a quadratic equation and finding its root "<<endl;
  cout<<" ENter 12 for conversions "<<endl;
  cout<<" Enter 13 to print the table of a number upto the number you want "<<endl;
  cout<<" Enter 14 to Check whether a number is prime or not "<<endl;
  cout<<" Enter 15 to print Febonaci series upto n terms "<<endl;
  cout<<" Enter 16 to Check whether a number is  armstrong or not "<<endl;
  cout<<" Enter 17 to get factorial of a number "<<endl;
  cin>>num;
  switch (num)
   {
      case 1:{
        basic ();
       break ;}

      case 2:
      {sin();
      break ;}
      case 3:
      { 
 cout<<" Enter the value of x in degree "<<endl;
 cin>>x;
 double y=x*3.14/180;  
  cout<<"Cosine of an angle is :"<<cos(y);  

      break;
      } 
      case 4:
      { cout<<" Enter the value of x in degree "<<endl;
        cin>>x;
        double y=x*3.14/180;  
        cout<<"Cosine of an angle is :"<<tan(y);  
        break; }
        case 5:
      { cout<<" Enter the value of x  "<<endl;
         cin>>x;
         double y=x;
      cout<<" the value of natural log"<<x<<" is "<<log(y); 
       break ;} 
      case 6:
      {cout<<" Enter the value of base "<<endl;
          cin>>x;
          cout<<" Enter the value of Exponent "<<endl;
          cin>>y;
          cout<<" The value of "<<x<<"^"<<y<<" is :"<<pow(x,y);  
          break;
        }
        case 7:
        { cout<<" Enter the value of X "<<endl;
         cin>>x;
         cout<<" The value of square root of x is : "<<sqrt(x);break ;
         }
         case 8:{ MATRIX(); break ;}
         case 9:  { MATRIX2();break ; }
         case 10:{DETERMINENT();break ;}
         case 11:{QUAD();break ;}
         case 12 :{ convert();break ;}
         case 13:{table();break ;}
         case 14:{ prime();break ;}
         case 15 :{ Febo();break ;}
         case 16 :{ armst(); break;}
         case 17 :{ facto();break;}

  }
    
}

void basic ()
{ 

 

    cout <<"enter a=";
    cin>>x;
    cout<<"enter b=";
    cin>>y;
    cout<<"enter 1=addition 2=subtraction 3=division 4=multiplication"<<endl;
    cin>>z;
    if(z==1)
    { addition(x,y);}
    else 
    if(z==2)
    {subtraction(x,y);}
    else if(z==3)
    {division (x,y);}
    else if(z==4)
    {multiplication (x,y);}
    else
    cout<<"enter valid number"<<endl;
    
    
}
void addition(float a,float  b)
{float m;
m=a+b;
cout<<"ans="<<m;
}
void subtraction (float c, float d)
{float n;
n=c-d;
cout<<"ans="<<n;
}
void division (float e,float f)
{float o;
o=e/f;
cout<<"ans="<<o;
}
void multiplication (float g, float h)
{float p;
p=g*h;
cout<<"ans="<<p;

}

void sin ()
 { float a, b, f, e, x, y;
  
  
  float num[10];
  float digi=0;
  cout<<" Enter value of x in degree"<<endl;
  cin>>y;
  x=y*(3.14/180);

 for(int i= 0;i<10;i++)
   { 
     a=pow(-1,i);
     b=(2*i)+1;
     f=fact(b);
     e=pow(x,b);
    num[i]=(a/f)*e;
        digi=digi+num[i];
}
cout<<" The approx value of sin"<<y<<" is = "<<digi;
}


float fact(float b)
 { int g=1;
  for(int i=1;i<=b;++i)
    { 
    
    g*=i;
    }

return (g);
}

void MATRIX()
   {
      cout<<"Enter the elements of matrix A"<<endl;
    
    
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
        {
           cout<<" Enter element  "<<"A"<<i+1<<j+1<<endl;
           cin>>A[i][j];
        }
    
    }
    
    cout<<" The Matrix A is "<<endl;
    
    for(int i=0;i<3;i++)
    { cout<<"\t";
       for(int j=0;j<3;j++)
        {
           cout<<A[i][j]<<"\t";
           
        }
        cout<<"\n";
    
    }
    
    
    
    
    
    
    cout<<"Enter the elements of matrix A"<<endl;
    
    
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
        {
           cout<<" Enter element  "<<"B"<<i+1<<j+1<<endl;
           cin>>B[i][j];
        }
    
    }
    
    cout<<" The Matrix B is "<<endl;
    
    for(int i=0;i<3;i++)
    { cout<<"\t";
       for(int j=0;j<3;j++)
        {
           cout<<B[i][j]<<"\t";
           
        }
        cout<<"\n";
    
    }
    
    cout<<" The summation of Matrix is "<<endl;
     for(int i=0;i<3;i++)
    { 
       for(int j=0;j<3;j++)
        {
           
           elementadd[i][j]=A[i][j]+B[i][j];
        }
        }
     for(int i=0;i<3;i++)
    { cout<<"\t";
       for(int j=0;j<3;j++)
        {
           cout<<elementadd[i][j]<<"\t";
            }
        cout<<"\n";
    }
    }

    void MATRIX2()
    {
      int first[3][3];
    int second[3][3];
    int result[3][3];
   cout << endl << "Input Matrix a" << "\n\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter a" << i + 1 << j + 1 << " :\t ";
            cin >> first[i][j];
        }
    }
    cout << endl << "Input Matrix b" << "\n\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter b " << i + 1 << j + 1 << " :\t ";
            cin >> second[i][j];
        }
    }
    cout << "Entered Matrix a and b" << "\n\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << first[i][j] << " ";
        }
        cout << "\t";
        for (int j = 0; j < 3; ++j) {
            cout << second[i][j] << " ";
        }
        cout << endl;
    }
     for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int sum = 0;
            for (int k = 0; k < 3; ++k) {
                sum += first[i][k] * second[k][j];
            }
            result[i][j] = sum;
        }
    }
    cout << endl << "Resultant Matrix " << "\n\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << " " << result[i][j];
        }
        cout << endl;
    }
 }

void DETERMINENT()
{
}
void QUAD()
{
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
}
}
void convert()
{  int K;
   cout<<" Press the following for respectivr conversion "<<endl;
   cout<<" Press 1 for converting degree celcius to fehrenhite "<<endl;
   cout<<" Press 2 for conversion of Joule to electron volt "<<endl;
cin>>K;
 switch (K)
 { case 1:
 {     float fahrenheit, celsius;
    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "The temperature in Celsius    : " << celsius << endl;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
}
 case 2:
 { long joule,evolt;
   cout<<" Enter the value in joules "<<endl;
   cin>>joule;
   evolt=(joule/1.6)*pow(10,-19);
  cout<<" The value in electrone volt is : "<<evolt;
 }
 }

}

void table()
{
   int a,b,c,i,e;
cout<<"Enter number you want table of"<<endl;
cin>>b;
cout<<"Enter number upto which you want table"<<endl;
cin>>e;
      a=1;
    while(a<=e)
    { 
    c=a*b;
    cout<<a<<"*"<<b<<"="<<c<<endl;
    a++;
    
         }

}
void prime ()
{
   int x,j;
 float r;
    cout<<"Enter number you want to check :";
    cin>>x; 
    for(int i = 2; i<x;i++)
    { r=x%i;
    if(r==0)
    {cout<<x<<":"<<"is not prime"<<endl;
    break;}
    }
    if(r!=0)
    { cout<<x<<":"<<"is prime"<<endl;}
    
}
void Febo()
{
int x1,x2,c,n;
   cout<<"Enter upto the term you want febonacci series"<<endl;
cin>>n;

x1=0;
x2=1;

int i=0;
 
  do{
        cout<<x1<<",";
        c=x2;
        x2=x1+x2;
        x1=c;
        i++;
}while(i!=n);

}
 void armst()
 {
  int c,d;
   int k=0;
   int p=0;
 int digi[15];
 int num[15];
int a;
  int arm[15];

  cout<<" How much digit you want to check "<<endl;
  
  cin>>a;
  d=a;

  for(int i=0;i<a;i++)
  { cout<<" Enter the "<<i+1<<"th "<<" digit "<<endl;
    cin>>digi[i];

}
cout<<" Your number is ";
  for(int j=0;j!=a;j++)
   {cout<<digi[j];
  }   
   cout<<endl;
  for(int i=0;i<d;i++)
   { c=pow(10,a);
       num[i]=digi[i]*c;
     a--;
}
  for(int i=0;i<d;i++)
{
    k=k+num[i];
    
}
k=k/10;

for(int i=0;i<d;i++)
{ 
  arm[i]=digi[i]*digi[i]*digi[i];


}
for(int i=0;i<d;i++)
{
  p=p+arm[i];
}

 if(p==k)
 
{ cout<<" The number is armstrog number "<<endl;
}
 else 
 cout<<" Not armstrog ";

 }

 void facto ()
 {long b,c,d,f;
long e=1;
  
    cout<<"Enter number you want factorial of"<<endl;
    cin>>c;
    for(int i=1;i<=c;++i)
    { 
    e*=i;
    cout<<c+1-i<<"*";
    }
    cout<<"= "<<e<<endl;
    cout<<"The factorial of "<<c<<" is "<<e;
}
  "
}