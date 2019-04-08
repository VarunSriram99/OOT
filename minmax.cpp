

    #include<iostream>
    #include<stdlib.h>

    using namespace std;

    class MinMax
    {
        public:
        int max;
        int min;

        int i;

        public:

        //finds maximum element in the array

        void find_Max(int a[],int n)
        {
            int max=a[0];
            for(i=0;i<n;i++)
            {
                if(a[i]>max)
                {
                    max=a[i];
                }
            }
            cout<<"\n\tMaximum Value : "<<max;
        }

        //finds minimum element in the array
        
        void find_Min(int a[],int n)
        {
            int min=a[0];
            for(i=0;i<n;i++)
            {
                if(a[i]<min)
                {
                    min=a[i];
                }
            }
            cout<<"\n\tMinimum Value : "<<min;
        }

    };

    int main()
    {
        MinMax* MM;

        int i,a[20];
        int n;
        int ch;

        cout<<"\n\tEnter the number of elements you wish to enter : ";
        cin>>n;

        cout<<"\n\tEnter the elements : ";
        for(i=0;i<n;i++)
        {
            cout<<"\n\t";
            cin>>a[i];
        }


        do
        {
            cout<<"\n\t1.Maximum element of an array";
            cout<<"\n\t2.Minimum element of an array";
            cout<<"\n\t3.Exit";

            cout<<"\n\n\tEnter your choice (1-3) : ";
            cin>>ch;
            switch(ch)
            {
                case 1:
                {
                    MM = new MinMax;
                    MM->find_Max(a,n);
                    delete MM;
                }break;

                case 2:
                {
                    MM = new MinMax;
                    MM->find_Min(a,n);
                    delete MM;
                }break;

                case 3:
                {
                    exit(0);
                }

                default:
                cout<<"\n\tInvalid Choice";
            }
        }while(ch!=3);
    }