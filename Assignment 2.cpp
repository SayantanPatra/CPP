#include <iostream>
using namespace std;

class polynomial
{
    int A[10]={0};
    int n;
    public:
    polynomial()
    {
        A[10]={0};
        n=10;
    }
    polynomial(const polynomial &obj)
    {
        for(int i=0;i<obj.n;i++)
        {
            this->A[i]=obj.A[i];
        }
        this->n=obj.n;
    }
    void Setcoefficient(int* degree,int* coefficient,int n)
    {
        for(int i=0;i<n;i++)
        {
            A[degree[i]]=coefficient[i];
        }
    }
    
    void operator+(polynomial obj);
    void operator-(polynomial obj);
    void operator*(polynomial obj);
    void operator=(polynomial obj);
    void print()
    {
        for(int i=0;i<n;i++)
        {
            if(A[i])
            {
                cout<<A[i]<<"X"<<i<<" ";
            }
        }
        cout<<endl;
    }
    
};

void polynomial::operator+(polynomial obj)
{
    for(int i=0;i<obj.n;i++)
    {
        this->A[i]+=obj.A[i];
    }
    if(this->n<obj.n)
        this->n=obj.n;
    return;
}
void polynomial::operator-(polynomial obj)
{
    for(int i=0;i<obj.n;i++)
    {
        this->A[i]-=obj.A[i];
    }
    if(this->n<obj.n)
        this->n=obj.n;
    return;
}
void polynomial::operator*(polynomial obj)
{
    for(int i=0;i<obj.n;i++)
    {
        this->A[i]*=obj.A[i];
    }
    if(this->n<obj.n)
        this->n=obj.n;
    return;
}
void polynomial::operator=(polynomial obj)
{
    for(int i=0;i<obj.n;i++)
        {
            this->A[i]=obj.A[i];
        }
        this->n=obj.n;
}



int main() 
{
	int a,choice;
	polynomial d1,d2;
	int coefficient[10]={0},degree[10]={0};

	cin>>a;
    for(int i=0;i<a;i++)
	    cin>>degree[i];
	for(int i=0;i<a;i++)
	    cin>>coefficient[i];
	d1.Setcoefficient(degree,coefficient,a);
	cin>>a;
    for(int i=0;i<a;i++)
	    cin>>degree[i];
	for(int i=0;i<a;i++)
	    cin>>coefficient[i];
	d2.Setcoefficient(degree,coefficient,a);
	cin>>choice;
	switch(choice){
        case 1:
        {
            d1+d2;
    		d1.print();
            break;
        }
        case 2 :
        {
            d1-d2;
    		d1.print();
            break;
        }
        case 3 :
        {
            d1*d2;
    		d1.print();
            break;
        }
        case 4 :
        {
            d1=d2;
    		d1.print();
            break;
        }
	}
}
