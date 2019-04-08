

    #include<iostream>
    using namespace std;

    class Swap
    {
        public:
        int temp;
        int first,second;

        public:

        //Call by value

        void swap_value(int first,int second)
        {
            temp=first;
            first=second;
            second=temp;   

            cout<<"\n\tswapped\n";
            cout<<"\n\t\tFirst Number = " <<first;
            cout<<"\n\t\tSecond Number = "<<second;
            cout<<endl;
        }

        //Call by reference

        void swap_reference(int &first,int &second)
        {
            temp=first;
            first=second;
            second=temp;   

            cout<<"\n\tswapped\n";
            cout<<"\n\t\tFirst Number = " <<first;
            cout<<"\n\t\tSecond Number = "<<second;
            cout<<endl;
        }

        //Call by address

        void swap_address(int *first,int *second)
        {
            temp=*first;
            *first=*second;
            *second=temp;   

            cout<<"\n\tswapped\n";
            cout<<"\n\t\tFirst Number = " <<*first;
            cout<<"\n\t\tSecond Number = "<<*second;
            cout<<endl;
        }

        //Display numbers before swapping

        void display(int first,int second)
        {
            cout<<"\n\tBefore Swapping\n";
            cout<<"\n\t\tFirst Number = "<<first;
            cout<<"\n\t\tSecond Number = "<<second;
            cout<<endl;
        }

    };

    int main()
    {
        Swap method;

        int ch;
        int first,second;

        cout<<"\n\tEnter the first number : ";
        cin>>first;

        cout<<"\n\tEnter the second number : ";
        cin>>second;

        cout<<"\n\tEnter choice";
        cout<<"\n\t1.Call by value";
        cout<<"\n\t2.Call by reference";
        cout<<"\n\t3.Call by address";
        cout<<"\n\n\tEnter your choice (1-4) : ";
        cin>>ch;

        switch(ch)
        {
            case 1:
            {
                method.display(first,second);
                method.swap_value(first,second);
            }break;

            case 2:
            {
                method.display(first,second);
                method.swap_reference(first,second);
            }break;

            case 3:
            {
                method.display(first,second);
                method.swap_address(&first,&second);
            }break;

            default:
            cout<<"\n\tInvalid Choice!";
        }
}