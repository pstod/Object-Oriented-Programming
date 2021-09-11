#include<iostream>
using namespace std ;


        class WeatherReport 
        {
         private: int i,day;float ht,lt,ar,as ; static float avght,avglt,avgar,avgas,j; 
         
        public :WeatherReport()
        {                                         
                  day=99;
                  ht=999;
                  lt=999;
                  ar=-1;
                  as=-1;
        }  


        void getdata(int a) //getting data from user
        { 
                  float e;
                  day=a;
                  cout<<"\n enter maximum temperature";
                 do {cin>>e;
                  checkht(e);}while(ht==999);
       
                  cout<<" \n enter low temperature";
                do{  cin >>e;
                    checklt(e);}while(lt==999);
       
                  cout<<"\n enter amount of rain";
                 do{ cin>>e;
                   checkar(e);}while(ar==-1);
      
                  cout<<"\n enter amount of snow";
                 do{ cin>>e;
                   checkas(e); }while(as==-1);                 
        } 

       
         void displaydata()    //displaying data
       {                        
        cout <<"\n"<<day<<"             "<<ht<<"                "<<lt<<"              "<<ar<<"               "<<as  ;
       }


           void average()        //calculating average
        {
                   
                     if(day!=99)    
                 
         {           j++;
                     avght= avght + ht ;
                     avglt= avglt + lt;
                     avgar= avgar + ar ;
                     avgas= avgas + as ;
         }

        }
        
         void displayaverage ()
   {
     cout <<"\naverage       "<<avght/j<<"                "<<avglt/j<<"              "<<avgar/j<<"               "<<avgas/j  ;     
   }            
 
      void checkht(float e)          //validations
      {
          if(e>=0&&e<=60)
          {ht=e;}
          else
          {
                    cout<< "re enter in range 0-60 \n";
                    
          }
             
      }
      void checklt(float e)          //validations
      {
          if(e>=-50&&e<=40)
          {lt=e;}
          else
          {
                    cout<< "re enter in range -50 to 40 \n";
                    
          }
             
      }
      void checkar(float e)         //validations
      {
      if(e>=0&&e<=100)
          {ar=e;}
          else
          {
                    cout<< "re enter in range 0 to 100 \n";
                    
          }
      }
      void checkas(float e)        //validations
      {
      if(e>=0&&e<=100)
          {as=e;}
          else
          {
                    cout<< "re enter in range 0 to 100 \n";
                    
          }
      }
       
};


float WeatherReport :: avght; 
float WeatherReport :: avglt;
float WeatherReport :: avgar;
float WeatherReport :: avgas;
float WeatherReport :: j=0;


 int main ()
 {  
    WeatherReport w[30];

    int n,i,d;
    cout<<" \n how many days data to be entered";
    cin>>n;
                     
                  for(i=0;i<n;i++)  
                  {
                       
                   
                  cout<<"enter day number";                
                  cin>>d;
                  w[d-1].getdata(d);
                  }

                   cout <<"day  high temperature   low temperature   amount of rain   amount of snow" ;
                  cout <<"\n";
                  for(n=30,i=0;i<n;i++)  
                  {
                   w[i].displaydata();
                   w[i].average();
                  }
                  
                  w[0].displayaverage ();

                  cout <<"\n";
     
 }
    

