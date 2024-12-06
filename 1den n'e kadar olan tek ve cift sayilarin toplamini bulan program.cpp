#include <iostream>

using namespace std;

int main()
{
	int sayi;
	int teksayilarintoplami=0;
	int ciftsayilarintoplami=0;
	
	cout<<"bir sayi giriniz"<<endl;
	cin>>sayi;
		
	do{
		if(sayi%2==0)
		{
			ciftsayilarintoplami+=sayi;
		}
		else 
		{
			teksayilarintoplami+=sayi;
		}
		sayi--;
	}while(sayi>0);
	
	cout<<"tek sayilarin toplami="<<teksayilarintoplami<<endl;
	cout<<"cift sayilarin toplami="<<ciftsayilarintoplami;
	return 0;
}
