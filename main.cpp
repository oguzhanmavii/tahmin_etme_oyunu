#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <time.h>//gerekli k�t�phane tarihi tutar 
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sayi,randomSayi;
	srand(time(NULL));
	int tahmicSayaci=1;
	randomSayi=rand()%1000; // 1 ile 1000 arasindaki rastegele sayiyi belirlemek i�in kullan�lan parametre 
	do{
		
		cout<<"Sayiyi tahmin ediniz :";//ekranda yaz�y� g�sterir ve bir alt sat�ra ge�er
		cin>>sayi;//sayiyi klavyeden girmemizi sa�lar 
	  if(randomSayi>sayi)
		{
			cout<<"tahmin ettiginiz sayidan buyuktur !"<<endl;
			tahmicSayaci++;	 
		}
		
	  else if(randomSayi<sayi)
		{
			cout<<"tahmin ettiginiz sayidan kucuktur !"<<endl;
			tahmicSayaci++;	 
		} 
		else{
		  break;	
		}	  	   
	}	
	while(sayi != rand()%1000);
	cout<<"Tebrikler Dogru sayiyi tahmin ettiniz"<<endl;
	cout<<"Sayiyi Tahmin edene kadar "<<tahmicSayaci<<"kere denediniz"<<endl;
	return 0;
	
}
