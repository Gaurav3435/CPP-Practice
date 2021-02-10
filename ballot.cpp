#include<iostream>
#include<string.h>

using namespace std;

class candidate
{
    private:
        string candidate_name;
        int candinate_no;
        int vote_cout=0;

    public:

        void set_candidate_no(int candid_no,string name)
        {
            candidate_name=name;
            candinate_no=candid_no;
        }
        void increment_vote()
        {
            vote_cout++;
        }
        void display()
        {
            cout<<"with id "<<candinate_no<<" with name "<<candidate_name<<" has vote equal to "<<vote_cout<<endl;

        }

};


int main()
{
    candidate c1,c2,c3,c4,c5;

    int vote=0,spoiler=0;

    int count1,count2,count3,count4,count5;
    c1.set_candidate_no(1,"Gaurav1");
    c2.set_candidate_no(2,"Gaurav2");
    c3.set_candidate_no(3,"Gaurav3");
    c4.set_candidate_no(4,"Gaurav4");
    c5.set_candidate_no(5,"Gaurav5");

    cout<<"Type 100 to break out!!!"<<endl;
    while(vote!=100)
    {
        cout<<"Enter the vote :  ";
        cin>>vote;
        if(vote==1){
            c1.increment_vote();
        }
        else if(vote==2)
        {
            c2.increment_vote();
        }
        else if(vote==3)
        {
            c3.increment_vote();
        }
        else if(vote==4)
        {
            c4.increment_vote();
        }
        else if(vote==5)
        {
            c5.increment_vote();
        }
        else
        {
            cout<<"Invalid Vote Count: "<<spoiler<<endl;
            spoiler++;
        }

    }
    cout<<" "<<endl;
    cout<<"Candidate : ";
    c1.display();
    cout<<"Candidate : ";
    c2.display();
    cout<<"Candidate : ";
    c3.display();
    cout<<"Candidate : ";
    c4.display();
    cout<<"Candidate : ";
    c5.display();


    return 0;
}
