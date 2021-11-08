/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>

using namespace std;



class Distance2;
class Distance1{
	
	private:
		int meter;
		
		public:
			Distance1(){
				meter=0;
			}
			
			Distance1(int m){
				
				meter=m;
			}
			
			void display();
			friend Distance1 addition(Distance1, Distance2);
			friend Distance2 addition(Distance2, Distance1);
};


class Distance2{
	
	private:
		int centimeter;
		
		public:
			Distance2(){
			   centimeter=0;
			}
			
			Distance2(int c){
				
				centimeter=c;
			}
			
			void display();
			friend Distance1 addition(Distance1, Distance2);
			friend Distance2 addition(Distance2, Distance1);
};

void Distance1::display()
{
	
	cout<<"\nDistance in meter is:"<<meter<<endl;
	
}
Distance1 addition(Distance1 x, Distance2 y)
{
	
	Distance1 temp;
	temp=x.meter+y.centimeter/100;
	return temp;
}



void Distance2::display()
{
	cout<<"\nDistance in centimeter is:"<<centimeter<<endl;
	}
Distance2 addition(Distance2 x, Distance1 y)
{
	
	Distance2 temp;
	temp=x.centimeter+y.meter*100;
	return temp;
	
}


	
	
int main()
{
	
	
	int mt;
	cout<<"Enter the meter value";
	cin>>mt;
	Distance1 m1(mt);
	Distance1 m2;
	m1.display();
	
	
	
	int ct;
	
	cout<<"Enter the centimeter value";
	cin>>ct;
		Distance2 c1(ct);
		Distance2 c2;
		c1.display();
	    
	    
	    m2=addition(m1,c1);
	    m2.display();
	    c2=addition(c1,m1);
	    c2.display();
	    
	    
		
}
