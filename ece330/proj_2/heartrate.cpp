#include <iostream>
#include <string>

using namespace std;

class Heartrates{
    private:
    string firstname;
    string lastname;
    int birth_day;
    int birth_month;
    int birth_year;
    int current_day;
    int current_month;
    int current_year;
    int age;
    double maxHeartRate;
    double targetRate;



    public:
   void Getdata()
   {
        cout<<"Please Enter your first name\n";
        getline (cin, firstname);
        cout<<"\n\n";
        cout<<"Please Enter your last name\n";
        getline (cin, lastname);
        cout<<"\n\n";
        cout<<"Please Enter your date of birth\n";
        cout<<"year:";
        cin >> birth_year;
        cout<<"month:";
        cin>> birth_month;
        cout<<"day:";
        cin >> birth_day;

    cout<<"Data for:"<<firstname<< "  "<<lastname<<endl;
        cout<< "Your date of birth in the format dd/mm/yyyy is:"<<birth_day<<"/"<<birth_month<<"/"<<birth_year<<endl;
        cout<<"\n\n";
    }
   void getAge ()
    {
        cout<<"Enter the current date dd/mm/yyyy \n";
        cout<<"Day: ";
        cin>>current_day;
        cout<<"month:";
        cin>>current_month;
        cout<<"year:";
        cin>> current_year;
    }


   void getMaximumHeartRate()
   {
       maxHeartRate= 220-age;
       cout<<"Your Maximum heartrate is:"<<maxHeartRate<<endl;
   }
   void getTargetHeartRate()
   {
        
        cout<< "Your healthy heart rate should be between "<<(maxHeartRate*0.5)<<" and "<<(maxHeartRate*0.85)<<endl;
    }
};







int main()
{
    Heartrates hRate;
    hRate.Getdata();

    hRate.getAge();
    cin.ignore();
    cin.get();
    hRate.getMaximumHeartRate();

    hRate.getTargetHeartRate();

    return 0;
}