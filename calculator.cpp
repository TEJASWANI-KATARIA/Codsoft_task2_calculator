//                                 task 2 
//                               CALCULATOR

#include<iostream> 
#include<process.h>
#include<math.h>
using namespace std;
class calculator
{
	private :
		float operand1,operand2;
		char operation;
		float result;
	public:
		void get()
		{
			cout<<"\n\nENTER TWO NUMBERS :\n1: ";
			cin>>operand1;
			cout<<"2: ";
			cin>>operand2;
			cout<<"\nenter the operation you want to perform : ";
			cin>>operation;			
		}
		void calculate()
		{
			switch (operation)
			{
				case'+':result= operand1+operand2;
						cout<<operand1 <<" + "<<operand2<<" = "<<result;
						break;
				case'-':result= operand1-operand2;
						cout<<operand1 <<" - "<<operand2<<" = "<<result;
						break;
				case'*':result= operand1*operand2;
						cout<<operand1 <<" * "<<operand2<<" = "<<result;
						break;
				case'/':result= operand1/operand2;
						cout<<operand1 <<" / "<<operand2<<" = "<<result;
						break;
				case'%':result= int(operand1) % int (operand2);
						cout<<operand1 <<" % "<<operand2<<" = "<<result;
						break;
				case'^':result= pow(operand1,operand2);
						cout<<operand1 <<" ^ "<<operand2<<" = "<<result;
						break;
				default:cout<<"oops ...there is no such a operation !! sorry";
						break;	
			}
		} 	
};
int main ()
{
	calculator A ;
	int choice;
	cout<<"                  CALCUCATOR                \n";
	cout<<"--------Press 1 to continue and 0 to exit--------\n";
	cin>>choice;
	while(choice==1)
	{
		A.get();
		A.calculate();
		cout<<"\n\n--------Press 1 to continue and 0 to exit--------\n";
		cin>>choice;		
	}

	return 0;	
}
