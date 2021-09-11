   #include<iostream>
   using namespace std;

   class complex
   {
       private:
		  float r;
		  float i;
		  
       
      public: 
       
       complex()
       {
		  float r,i;
		  cout<<"enter the real and imaginary part ";
		  cin>>r>>i;
		  
		  (*this).r=r;
		  (*this).i=i;
       }
       
       
       complex(float r,float i)
       {
		  (*this).r=r;
		  (*this).i=i;
       
       }
        
       complex operator * (complex d)
       {
		  complex e(0,0);
		  
		  e.r=(r*d.r)-(i*d.i);
		  e.i=(r*d.i)+(i*d.r);
		  
		  return e;
       }

      complex operator /(complex d)
       {
		complex e(0,0);
		       
          e.r= ((r*d.r)+(i*d.i))/((d.r*d.r)+(d.i*d.i))   ;       
          e.i=((i*d.r)-(r*d.i))/((d.r*d.r)+(d.i*d.i)) ;
          return e;
       }

	void show()
	{
        

	     cout <<"real part"<<r<<endl;
	     cout<<"imaginary part"<<i<<endl;
	     cout<<endl;
        
        	
	}

		friend complex operator+(complex a,complex b);
		friend complex operator-(complex a,complex b);







   };

	complex operator +(complex a,complex b)
	{
            
	    complex d(0,0);
 	    d.r=a.r+b.r;
	    d.i=a.i+b.i;
    	    return d;	


 	}

	complex operator -(complex a,complex b)
       {

         complex d(0,0);
	    d.r=a.r-b.r;
	    d.i=a.i-b.i;
	    return d;


	}




      int main()
      {
      int x;float a1,b1,a2,b2,r;
      
                complex c1;  
			 complex c2;
			 complex c3(0,0);
      do{
			 
			 cout<<"1)multiplication"<<endl;
			 cout<<"2)division"<<endl;
			 cout<<"3)addition"<<endl;
			 cout<<"4)substraction"<<endl;
			 cout<<"5)exit"<<endl;
			 
			 cout<<"enter number corresponding to above menu"<<endl;
			 cin>>x;
      switch(x)
      {
      
      
      case 1:
    			 c3=c1*c2;
			 cout<<"multiplication result"<<endl;
			 c3.show();
                break;

      case 2 : 
			 c3=c1/c2;
			 cout<<"division result"<<endl;
			 c3.show();
                break;

      case 3 : 
			 c3=c1+c2;
			 cout<<"addition result"<<endl;
			 c3.show();
                break;
      
      case 4 :
			 
			 c3=c1-c2;
			 cout<<"substraction result"<<endl;
			 c3.show();
			 break;
      
      
      case 5:   break;
      
      }
      }while(x!=5);
      

     
     
     }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
