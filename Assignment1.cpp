/*
//an online system for head-to-toes school uniform shopping
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <ctime>
using namespace std;

double Additional(double delivery)
{ 
	double deliveryfee,sumtotal;
	deliveryfee=delivery;
	cout<<"Please select type of delivery\n ";
	cout<<"[1] Standard(rm10)\n ";
	cout<<"[2] Express(rm20)\n ";
	cin>>deliveryfee;

	if(deliveryfee==1) 
	{
		 return (10);
	}
	else if(deliveryfee==2) 
	{ 
		return (20);
	}
}

double Payment(double x)
{ 
	return (x*1.1);
}


int main()
{ 
	double df,totalcost,sumtotal;
	string name,address,hpnum,type;
	string boy,girl,cnv;
	string boycolour,girlcolour;
	int size;
	string coat,vest,socks,shoes;
	string shortsleeve,longsleeve,bajumelayu,shortpants,longpants,samping;
	string tudung,bajukurung,kainkemang,girlshort,pinafore,skirt;
	string ct,vt,sns,sc,shs;
	int sumboy=0,sumgirl=0,sumcnv=0,sumsns=0;
	int sumss=0,sumls=0,sumbm=0,sumsp=0,sumlp=0,sumsmp=0;
	int sumtd=0,sumbk=0,sumkm=0,sumgs=0,sumpf=0,sumsk=0;
	int sumct=0,sumvt=0;
	int sumsc=0,sumshs=0;
	int nss1,nss2,nss3,nss4,nss5,nls1,nls2,nls3,nls4,nls5,nbm1,nbm2,nbm3,nbm4,nbm5;
	int nsp1,nsp2,nsp3,nsp4,nsp5,nlp1,nlp2,nlp3,nlp4,nlp5,nsmp1,nsmp2,nsmp3,nsmp4,nsmp5;
	int ntd1,ntd2,ntd3,ntd4,nbk1,nbk2,nbk3,nbk4,nbk5,nkm1,nkm2,nkm3,nkm4,nkm5;
	int ngs1,ngs2,ngs3,ngs4,ngs5,npf1,npf2,npf3,npf4,npf5,nsk1,nsk2,nsk3,nsk4,nsk5;
	int nct1,nct2,nct3,nct4,nvt1,nvt2,nvt3,nvt4;
	int nsc1,nsc2,nsc3,nsc4,nshs1,nshs2,nshs3,nshs4,nshs5,nshs6;
	int ss1,ss2,ss3,ss4,ss5,ls1,ls2,ls3,ls4,ls5,bm1,bm2,bm3,bm4,bm5;
	int sp1,sp2,sp3,sp4,sp5,lp1,lp2,lp3,lp4,lp5,smp1,smp2,smp3,smp4,smp5;
	int td1,td2,td3,td4,bk1,bk2,bk3,bk4,bk5,km1,km2,km3,km4,km5;
	int gs1,gs2,gs3,gs4,gs5,pf1,pf2,pf3,pf4,pf5,sk1,sk2,sk3,sk4,sk5;
	int ct1,ct2,ct3,ct4,vt1,vt2,vt3,vt4;
	int sc1,sc2,sc3,sc4,shs1,shs2,shs3,shs4,shs5,shs6;
	time_t curr_time;
	
	cout<<"Welcome to The School!\n";
	cout<<"Please enter your name.\n";
	getline(cin,name);
	cout<<"Please enter your address.\n";
	getline(cin,address);
	cout<<"Please enter your phone number.\n";
	cin>>hpnum;
	
	MainPage:
	cout<<"\n\nThis is our main page. \n";
	cout<<"Please select the following categories: \n";
	cout<<"[1]Boy's School Uniform"<<endl;
	cout<<"[2]Girl's School Uniform"<<endl;
	cout<<"[3]Coat and Vest"<<endl;
	cout<<"[4]Socks and Shoes"<<endl;
	cout<<"[5]Checklist"<<endl;
	cout<<"Please key in 1 to 5: ";
	cin>>type;
	
	if(type.compare("1")==0)	
	{
		BoyType:
		cout<<"\nPlease select the type of school uniform: \n";
	  	cout<<"[1]Short Sleeve\n";
	 	cout<<"[2]Long Sleeve\n";
	  	cout<<"[3]Baju Melayu\n";
	 	cout<<"[4]Short Pants\n";
		cout<<"[5]Long Pants\n";
		cout<<"[6]Samping\n";
		cout<<"[7]Exit to main page\n";
		cout<<"Please key in 1 to 7: \n";
		cin>>boy;	
		
		if(boy.compare("1")==0)
		{	
			BoyColour1:
			cout<<"\nPlease select the colour: \n";
			cout<<"[1]White\n";
			cout<<"[2]Light Blue\n";
			cout<<"[3]Light Purple\n";
			cout<<"[4]Light Yellow\n";
			cout<<"[5]Light Green\n";
			cout<<"[6]Exit to type page\n";
			cout<<"Please key in 1 to 6: \n";
			cin>>boycolour;
			
			if(boycolour.compare("1")==0|boycolour.compare("2")==0|boycolour.compare("3")==0|boycolour.compare("4")==0|boycolour.compare("5")==0)
			{goto BoyPrice1;}
			
			else if (boycolour.compare("6")==0) 
			{goto BoyType;}
			
			else
			{goto BoyColour1;}
			
				BoyPrice1:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]XS\t\tRM 15\n";
					cout<<"[2]S\t\tRM 16\n";
					cout<<"[3]M\t\tRM 17\n";
					cout<<"[4]L\t\tRM 18\n";
					cout<<"[5]XL\t\tRM 19\n";
		

					{
						cout<<"Please select by key in the number 1,2,3,4,5: \n";
	
						ss1=15;
						ss2=16;
						ss3=17;
						ss4=18;
						ss5=19;
						cin>>shortsleeve;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(shortsleeve.compare("1")==0)
						{
							cin>>nss1;
							sumss+=ss1*nss1;
						}
						else if(shortsleeve.compare("2")==0)
						{
							cin>>nss2;
							sumss+=ss2*nss2;
						}
						else if(shortsleeve.compare("3")==0)
						{
							cin>>nss3;
							sumss+=ss3*nss3;
						}
						else if(shortsleeve.compare("4")==0)
						{
							cin>>nss4;
							sumss+=ss4*nss4;
						}
						else if(shortsleeve.compare("5")==0)
						{
							cin>>nss3;
							sumss+=ss5*nss5;
						}
						else
						{goto BoyPrice1;}	
											
						checklistss:
						cout<<"\nTotal price of Boy's short sleeve purchase = RM " <<sumss<<endl;
					}	
		}
		
		else if(boy.compare("2")==0)
		{
			BoyColour2:
			cout<<"\nPlease select the colour: \n";
			cout<<"[1]White\n";
			cout<<"[2]Light Blue\n";
			cout<<"[3]Light Purple\n";
			cout<<"[4]Light Yellow\n";
			cout<<"[5]Light Green\n";
			cout<<"[6]Exit to type page\n";
			cout<<"Please key in 1 to 6: \n";
			cin>>boycolour;
			
			if(boycolour.compare("1")==0|boycolour.compare("2")==0|boycolour.compare("3")==0|boycolour.compare("4")==0|boycolour.compare("5")==0)
			{goto BoyPrice2;}
			
			else if(boycolour.compare("6")==0)
			{goto BoyType;}
			
			else
			{goto BoyColour2;}
			
				BoyPrice2:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]XS\t\tRM 20\n";
					cout<<"[2]S\t\tRM 21\n";
					cout<<"[3]M\t\tRM 22\n";
					cout<<"[4]L\t\tRM 23\n";
					cout<<"[5]XL\t\tRM 24\n";
		

					{
						cout<<"Please select by key in the number 1,2,3,4,5: \n";
		
						ls1=20;
						ls2=21;
						ls3=22;
						ls4=23;
						ls5=24;
						cin>>longsleeve;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(longsleeve.compare("1")==0)
						{
							cin>>nls1;
							sumls+=ls1*nls1;
						}
						else if(longsleeve.compare("2")==0)
						{
							cin>>nls2;
							sumls+=ls2*nls2;
						}
						else if(longsleeve.compare("3")==0)
						{
							cin>>nls3;
							sumls+=ls3*nls3;
						}
						else if(longsleeve.compare("4")==0)
						{
							cin>>nls4;
							sumls+=ls4*nls4;
						}
						else if(longsleeve.compare("5")==0)
						{
							cin>>nls5;
							sumls+=ls5*nls5;
						}
						else 
						{goto BoyPrice2;}	
									
						checklistls:
						cout<<"\nTotal price of Boy's long sleeve purchase = RM " <<sumls<<endl;
							
					}
					
		}
		
		else if(boy.compare("3")==0)
		{
			BoyColour3:
			cout<<"\nPlease select the colour: \n";
			cout<<"[1]White\n";
			cout<<"[2]Light Blue\n";
			cout<<"[3]Light Purple\n";
			cout<<"[4]Light Yellow\n";
			cout<<"[5]Light Green\n";
			cout<<"[6]Exit to type page\n";
			cout<<"Please key in 1 to 6: \n";
			cin>>boycolour;
			
			if(boycolour.compare("1")==0|boycolour.compare("2")==0|boycolour.compare("3")==0|boycolour.compare("4")==0|boycolour.compare("5")==0)
			{goto BoyPrice3;}

			else if(boycolour.compare("1")==0)
			{goto BoyType;}
						
			else
			{goto BoyColour3;}
			
				BoyPrice3:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]XS\t\tRM 32\n";
					cout<<"[2]S\t\tRM 33\n";
					cout<<"[3]M\t\tRM 34\n";
					cout<<"[4]L\t\tRM 35\n";
					cout<<"[5]XL\t\tRM 36\n";
		

					{
						cout<<"Please select by key in the number 1,2,3,4,5: \n";
		
						bm1=32;
						bm2=33;
						bm3=34;
						bm4=35;
						bm5=36;
						cin>>bajumelayu;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(bajumelayu.compare("1")==0)
						{
							cin>>nbm1;
							sumbm+=bm1*nbm1;
						}
						else if(bajumelayu.compare("2")==0)
						{	
							cin>>nbm2;
							sumbm=bm2*nbm2;
						}
						else if(bajumelayu.compare("3")==0)
						{
							cin>>nbm3;
							sumbm+=bm3*nbm3;
						}
						else if(bajumelayu.compare("4")==0)
						{
							cin>>nbm4;
							sumbm+=bm4*nbm4;
						}
						else if(bajumelayu.compare("5")==0)
						{
							cin>>nbm5;
							sumbm+=bm5*nbm5;
						}
						
						else 
						{goto BoyPrice3;}	
									
						checklistbm:
						cout<<"\nTotal price of Boy's Baju Melayu purchase = RM " <<sumbm<<endl;
						
					}
					
		}
	
		else if(boy.compare("4")==0)
		{
			BoyColour4:
			cout<<"\nPlease select the colour: \n";
			cout<<"[1]White\n";
			cout<<"[2]Dark Blue\n";
			cout<<"[3]Army Green\n";
			cout<<"[4]Brown\n";
			cout<<"[5]Black\n";
			cout<<"[6]Exit to type page\n";
			cout<<"Please key in 1 to 6: \n";
			cin>>boycolour;

			if(boycolour.compare("1")==0|boycolour.compare("2")==0|boycolour.compare("3")==0|boycolour.compare("4")==0|boycolour.compare("5")==0)
			{goto BoyPrice4;}
			
			else if(boycolour.compare("6")==0)
			{goto BoyType;}
			
			else
			{goto BoyColour4;}
			
				BoyPrice4:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]XS\t\tRM 18\n";
					cout<<"[2]S\t\tRM 19\n";
					cout<<"[3]M\t\tRM 20\n";
					cout<<"[4]L\t\tRM 21\n";
					cout<<"[5]XL\t\tRM 22\n";
		

					{
						cout<<"Please select by key in the number 1,2,3,4,5: \n";
		
						sp1=18;
						sp2=19;
						sp3=20;
						sp4=21;
						sp5=22;
						cin>>shortpants;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(shortpants.compare("1")==0)
						{
							cin>>nsp1;
							sumsp+=sp1*nsp1;
						}
						else if(shortpants.compare("2")==0)
						{
							cin>>nsp2;
							sumsp+=sp2*nsp2;
						}
						else if(shortpants.compare("3")==0)
						{
							cin>>nsp3;
							sumsp+=sp3*nsp3;
						}
						else if(shortpants.compare("4")==0)
						{
							cin>>nsp4;
							sumsp+=sp4*nsp4;
						}
						else if(shortpants.compare("5")==0)
						{
							cin>>nsp5;
							sumsp+=sp5*nsp5;
						}
						
						else 
						{goto BoyPrice4;}		
									
						checklistsp:
						cout<<"\nTotal price of Boy's Short Pants purchase = RM " <<sumsp<<endl;
							
					}
					
		}
		
		else if(boy.compare("5")==0)
		{
			BoyColour5:
			cout<<"\nPlease select the colour: \n";
			cout<<"[1]White\n";
			cout<<"[2]Dark Blue\n";
			cout<<"[3]Army Green\n";
			cout<<"[4]Brown\n";
			cout<<"[5]Black\n";
			cout<<"[6]Exit to type page\n";
			cout<<"Please key in 1 to 6: \n";
			cin>>boycolour;
			
			if(boycolour.compare("1")==0|boycolour.compare("2")==0|boycolour.compare("3")==0|boycolour.compare("4")==0|boycolour.compare("5")==0)
			{
				goto BoyPrice5;
			}
			
			if(boycolour.compare("6")==0)
			{goto BoyType;}
			
			else
			{goto BoyColour5;}
			
				BoyPrice5:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]XS\t\tRM 22\n";
					cout<<"[2]S\t\tRM 23\n";
					cout<<"[3]M\t\tRM 24\n";
					cout<<"[4]L\t\tRM 25\n";
					cout<<"[5]XL\t\tRM 26\n";
		

					{
						cout<<"Please select by key in the number 1,2,3,4,5: \n";
		
						lp1=22;
						lp2=23;
						lp3=24;
						lp4=25;
						lp5=26;
						cin>>longpants;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(longpants.compare("1")==0)
						{	
							cin>>nlp1;
							sumlp+=lp1*nlp1;
						}
						else if(longpants.compare("2")==0)
						{
							cin>>nlp2;
							sumlp+=lp2*nlp2;
						}
						else if(longpants.compare("3")==0)
						{
							cin>>nlp3;
							sumlp+=lp3*nlp3;
						}
						else if(longpants.compare("4")==0)
						{
							cin>>nlp4;
							sumlp+=lp4*nlp4;
						}
						else if(longpants.compare("5")==0)
						{
							cin>>nlp5;
							sumlp+=lp5*nlp5;
						}
						
						else
						{goto BoyPrice5;}		
									
						checklistlp:
						cout<<"\nTotal price of Boy's Long Pants purchase = RM " <<sumlp<<endl;
						
					}
					
		}
		
		else if(boy.compare("6")==0)
		{
			BoyColour6:
			cout<<"\nPlease select the colour: \n";
			cout<<"[1]White\n";
			cout<<"[2]Dark Blue\n";
			cout<<"[3]Army Green\n";
			cout<<"[4]Brown\n";
			cout<<"[5]Black\n";
			cout<<"[6]Exit to type page\n";
			cout<<"Please key in 1 to 6: \n";
			cin>>boycolour;
			
			if(boycolour.compare("1")==0|boycolour.compare("2")==0|boycolour.compare("3")==0|boycolour.compare("4")==0|boycolour.compare("5")==0)
			{goto BoyPrice6;}
			
			if(boycolour.compare("6")==0)
			{goto BoyType;}
			
			else
			{goto BoyColour6;}
					
				BoyPrice6:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]XS\t\tRM 12\n";
					cout<<"[2]S\t\tRM 13\n";
					cout<<"[3]M\t\tRM 14\n";
					cout<<"[4]L\t\tRM 15\n";
					cout<<"[5]XL\t\tRM 16\n";
		
					{
						cout<<"Please select by key in the number 1,2,3,4,5: \n";
				
						smp1=12;
						smp2=13;
						smp3=14;
						smp4=15;
						smp5=16;
						cin>>samping;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(samping.compare("1")==0)
						{
							cin>>nsmp1;
							sumsmp+=smp1*nsmp1;
						}
						else if(samping.compare("2")==0)
						{
							cin>>nsmp2;
							sumsmp+=smp2*nsmp2;
						}
						else if(samping.compare("3")==0)
						{
							cin>>nsmp3;
							sumsmp+=smp3*nsmp3;
						}
						else if(samping.compare("4")==0)
						{
							cin>>nsmp4;
							sumsmp+=smp4*nsmp4;
						}
						else if(samping.compare("5")==0)
						{
							cin>>nsmp5;
							sumsmp+=smp5*nsmp5;
						}
						
						else 
						{goto BoyPrice6;}		
									
						checklistsmp:
						cout<<"\nTotal price of Boy's Samping purchase = RM " <<sumsmp<<endl;
							
					}
		}
		
		else if(boy.compare("7")==0)
		{goto MainPage;}
		
		else
		{goto BoyType;}	
		
		sumboy=(sumss+sumls+sumbm+sumsp+sumlp+sumsmp);
		cout<<"\nTotal price of Boy's School Uniform is "<<sumboy<<endl;
		goto MainPage;		
	}	
	
	else if(type.compare("2")==0)
	{
		GirlType:
		cout<<"\nPlease select the type of school uniform: \n";
	  	cout<<"[1] Tudung \n";
	 	cout<<"[2] Baju Kurung \n";
	  	cout<<"[3] Kain Kemang\n";
	 	cout<<"[4] Short Sleeve Shirt\n";
		cout<<"[5] Pinafore\n";
		cout<<"[6] Skirts\n";
		cout<<"[7] Exit to main page\n";
		cout<<"Please key in 1 to 7: \n";
		cin>>girl;	
		
		if(girl.compare("1")==0)
		{
			GirlColour1:
			cout<<"\nPlease select the colour: \n";
			cout<<"[1]White\n";
			cout<<"[2]Light Blue\n";
			cout<<"[3]Dark Blue\n";
			cout<<"[4]Dark Purple\n";
			cout<<"[5]Black\n";
			cout<<"[6]Exit to type page\n";
			cout<<"Please key in 1 to 6: \n";
			cin>>girlcolour;
			
			if(girlcolour.compare("1")==0|girlcolour.compare("2")==0|girlcolour.compare("3")==0|girlcolour.compare("4")==0|girlcolour.compare("5")==0)
			{goto GirlPrice1;}	
			
			else if(girl.compare("6")==0)
			{goto GirlType;}
			
			else
			{goto GirlColour1;}
			
				GirlPrice1:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]S\t\tRM 12\n";
					cout<<"[2]M\t\tRM 13\n";
					cout<<"[3]L\t\tRM 14\n";
					cout<<"[4]XL\t\tRM 15\n";
		
					
					{
						cout<<"Please select by key in the number 1,2,3,4: \n";
				
						td1=12;
						td2=13;
						td3=14;
						td4=15;
						cin>>tudung;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(tudung.compare("1")==0)
						{
							cin>>ntd1;
							sumtd+=td1*ntd1;
						}
						else if(tudung.compare("2")==0)
						{
							cin>>ntd2;
							sumtd+=td2*ntd2;
						}
						else if(tudung.compare("3")==0)
						{
							cin>>ntd3;
							sumtd+=td3*ntd3;
						}
						else if(tudung.compare("4")==0)
						{
							cin>>ntd4;
							sumtd+=td4*ntd4;
						}
					
						else 
						{goto GirlPrice1;}	
											
						checklisttd:
							cout<<"\nTotal price of Girl's Tudung purchase = RM " <<sumtd<<endl;
					}
					
		}
		
		else if(girl.compare("2")==0)
		{
			GirlColour2:
			cout<<"\nPlease select the colour: \n";
			cout<<"[1]White\n";
			cout<<"[2]Light Blue\n";
			cout<<"[3]Light Purple\n";
			cout<<"[4]Light Yellow\n";
			cout<<"[5]Light Green\n";
			cout<<"[6]Exit to type page\n";
			cout<<"Please key in 1 to 6: \n";
			cin>>girlcolour;
			
			if(girlcolour.compare("1")==0|girlcolour.compare("2")==0|girlcolour.compare("3")==0|girlcolour.compare("4")==0|girlcolour.compare("5")==0)
			{goto GirlPrice2;}
			
			else if(girlcolour.compare("6")==0)
			{goto GirlType;}
			
			else
			{goto GirlColour2;}
			
				GirlPrice2:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]XS\t\tRM 22\n";
					cout<<"[2]S\t\tRM 23\n";
					cout<<"[3]M\t\tRM 24\n";
					cout<<"[4]L\t\tRM 25\n";
					cout<<"[5]XL\t\tRM 26\n";
		
					
					{
						cout<<"Please select by key in the number 1,2,3,4,5: \n";

						bk1=22;
						bk2=23;
						bk3=24;
						bk4=25;
						bk5=26;
						cin>>bajukurung;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(bajukurung.compare("1")==0)
						{
							cin>>nbk1;
							sumbk+=bk1*nbk1;
						}
						else if(bajukurung.compare("2")==0)
						{
							cin>>nbk2;
							sumbk+=bk2*nbk2;
						}
						else if(bajukurung.compare("3")==0)
						{
							cin>>nbk3;
							sumbk+=bk3*nbk3;
						}
						else if(bajukurung.compare("4")==0)
						{
							cin>>nbk4;
							sumbk+=bk4*nbk4;
						}
						else if(bajukurung.compare("5")==0)
						{
							cin>>nbk5;
							sumbk+=bk5*nbk5;
						}
					
						else 
						{goto GirlPrice2;}	
									
						checklistbk:
						cout<<"\nTotal price of Girl's Baju Kurung purchase = RM " <<sumbk<<endl;
							
					}
					
		}
		
		else if(girl.compare("3")==0)
		{
			GirlColour3:
			cout<<"\nPlease select the colour: \n";
			cout<<"[1]White\n";
			cout<<"[2]Dark Blue\n";
			cout<<"[3]Army Green\n";
			cout<<"[4]Brown\n";
			cout<<"[5]Black\n";
			cout<<"[6]Exit to type page\n";
			cout<<"Please key in 1 to 6: \n";
			cin>>girlcolour;
			
			if(girlcolour.compare("1")==0|girlcolour.compare("2")==0|girlcolour.compare("3")==0|girlcolour.compare("4")==0|girlcolour.compare("5")==0)
			{goto GirlPrice3;}
			
			else if(girlcolour.compare("6")==0)
			{goto GirlType;}
			
			else
			{goto GirlColour3;}
			
				GirlPrice3:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]XS\t\tRM 22\n";
					cout<<"[2]S\t\tRM 23\n";
					cout<<"[3]M\t\tRM 24\n";
					cout<<"[4]L\t\tRM 25\n";
					cout<<"[5]XL\t\tRM 26\n";
		
					
					{
						cout<<"Please select by key in the number 1,2,3,4,5: \n";
		
						km1=22;
						km2=23;
						km3=24;
						km4=25;
						km5=26;
						cin>>kainkemang;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(kainkemang.compare("1")==0)
						{	
							cin>>nkm1;
							sumkm+=km1*nkm1;
						}
						else if(kainkemang.compare("2")==0)
						{
							cin>>nkm2;
							sumkm+=km2*nkm2;
						}
						else if(kainkemang.compare("3")==0)
						{
							cin>>nkm3;
							sumkm+=km3*nkm3;
						}
						else if(kainkemang.compare("4")==0)
						{
							cin>>nkm4;
							sumkm+=km4*nkm4;
						}
						else if(kainkemang.compare("5")==0)
						{
							cin>>nkm5;
							sumkm+=km5*nkm5;
						}
					
						else
						{goto GirlPrice3;}	
									
						checklistkm:
						cout<<"\nTotal price of Girl's Kain Kemang purchase = RM " <<sumkm<<endl;
							
					}
					
		}
		
		else if(girl.compare("4")==0)
		{
			GirlColour4:
			cout<<"\nPlease select the colour: \n";
			cout<<"[1]White\n";
			cout<<"[2]Light Blue\n";
			cout<<"[3]Light Purple\n";
			cout<<"[4]Light Yellow\n";
			cout<<"[5]Light Green\n";
			cout<<"[6]Exit to type page\n";
			cout<<"Please key in 1 to 6: \n";
			cin>>girlcolour;
			
			if(girlcolour.compare("1")==0|girlcolour.compare("2")==0|girlcolour.compare("3")==0|girlcolour.compare("4")==0|girlcolour.compare("5")==0)
			{goto GirlPrice4;}

			else if(girlcolour.compare("6")==0)
			{goto GirlType;}
			
			else
			{goto GirlColour4;}
			
				GirlPrice4:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]XS\t\tRM 16\n";
					cout<<"[2]S\t\tRM 17\n";
					cout<<"[3]M\t\tRM 18\n";
					cout<<"[4]L\t\tRM 19\n";
					cout<<"[5]XL\t\tRM 20\n";
		
					
					{
						cout<<"Please select by key in the number 1,2,3,4,5: \n";
	
						gs1=16;
						gs2=17;
						gs3=18;
						gs4=19;
						gs5=20;
						cin>>girlshort;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(girlshort.compare("1")==0)
						{	
							cin>>ngs1;
							sumgs+=gs1*ngs1;
						}
						
						else if(girlshort.compare("2")==0)
						{
							cin>>ngs2;
							sumgs+=gs2*ngs2;
						}
						else if(girlshort.compare("3")==0)
						{
							cin>>ngs3;
							sumgs+=gs3*ngs3;
						}
						else if(girlshort.compare("4")==0)
						{
							cin>>ngs4;
							sumgs+=gs4*ngs4;
						}
						else if(girlshort.compare("5")==0)
						{
							cin>>ngs5;
							sumgs+=gs5*ngs5;
						}
					
						else 
						{goto GirlPrice4;}		
									
						checklistgs:
						cout<<"\nTotal price of Girl's Short Sleeve Shirt purchase = RM " <<sumgs<<endl;
							
					}
					
		}
		
		else if(girl.compare("5")==0)
		{
			GirlColour5:
			cout<<"\nPlease select the colour: \n";
			cout<<"[1]Dark Blue(primary school)\n";
			cout<<"[2]Light Blue(secondary school)\n";
			cout<<"[3]Exit to type page\n";
			cout<<"Please key in 1 to 3: \n";
			cin>>girlcolour;
			
			if(girlcolour.compare("1")==0|girlcolour.compare("2")==0)
			{goto GirlPrice5;}
			
			else if(girlcolour.compare("3")==0)
			{goto GirlType;}
			
			else
			{goto GirlColour5;}
			
				GirlPrice5:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]XS\t\tRM 30\n";
					cout<<"[2]S\t\tRM 31\n";
					cout<<"[3]M\t\tRM 32\n";
					cout<<"[4]L\t\tRM 33\n";
					cout<<"[5]XL\t\tRM 34\n";
		
					
					{
						cout<<"Please select by key in the number 1,2,3,4,5: \n";
		
						pf1=30;
						pf2=31;
						pf3=32;
						pf4=33;
						pf5=34;
						cin>>pinafore;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(pinafore.compare("1")==0)
						{
							cin>>npf1;
							sumpf+=pf1*npf1;
						}
						else if(pinafore.compare("2")==0)
						{
							cin>>npf2;
							sumpf+=pf2*npf2;
						}
						else if(pinafore.compare("3")==0)
						{
							cin>>npf3;
							sumpf+=pf3*npf3;
						}
						else if(pinafore.compare("4")==0)
						{
							cin>>npf4;
							sumpf+=pf4*npf4;
						}
						else if(pinafore.compare("5")==0)
						{
							cin>>npf5;
							sumpf+=pf5*npf5;
						}
						
						else 
						{goto GirlPrice5;}		
									
						checklistpf:
						cout<<"\nTotal price of Girl's Pinafore purchase = RM " <<sumpf<<endl;
							
					}
					
		}
		
		else if(girl.compare("6")==0)
		{
			GirlColour6:
			cout<<"\nPlease select the colour: \n";
			cout<<"[1] Light Blue\n";
			cout<<"[2] Dark Blue \n";
			cout<<"[3] Dark Brown \n";
			cout<<"[4] Beige \n";
			cout<<"[5] Black\n";
			cout<<"[6]Exit to type page\n";
			cout<<"Please key in 1 to 6: \n";
			cin>>girlcolour;
			
			if(girlcolour.compare("1")==0|girlcolour.compare("2")==0|girlcolour.compare("3")==0|girlcolour.compare("4")==0|girlcolour.compare("5")==0)
			{goto GirlPrice6;}
			
			else if(girlcolour.compare("6")==0)
			{goto GirlType;}
			
			else
			{goto GirlColour6;}
					
				GirlPrice6:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]XS\t\tRM 22\n";
					cout<<"[2]S\t\tRM 23\n";
					cout<<"[3]M\t\tRM 24\n";
					cout<<"[4]L\t\tRM 25\n";
					cout<<"[5]XL\t\tRM 26\n";
		
					
					{
						cout<<"Please select by key in the number 1,2,3,4,5: \n";
	
						sk1=22;
						sk2=23;
						sk3=24;
						sk4=25;
						sk5=26;
						cin>>skirt;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(skirt.compare("1")==0)
						{	
							cin>>nsk1;
							sumsk+=sk1*nsk1;
						}
						else if(skirt.compare("2")==0)
						{
							cin>>nsk2;
							sumsk+=sk2*nsk2;
						}
						else if(skirt.compare("3")==0)
						{
							cin>>nsk3;
							sumsk+=sk3*nsk3;
						}
						else if(skirt.compare("4")==0)
						{
							cin>>nsk4;
							sumsk+=sk4*nsk4;
						}
						else if(skirt.compare("5")==0)
						{
							cin>>nsk5;
							sumsk+=sk5*nsk5;
						}
						
						else 
						{goto GirlPrice6;}		
									
						checklistsk:
						cout<<"\nTotal price of Girl's Skirt purchase = RM " <<sumsk<<endl;
							
					}	
		}
		else if(girl.compare("7")==0)
		{goto MainPage;}
		
		else 
		{
			cout<<"\nPlease select a number from 1 to 6. \n";
			goto GirlType;
		}	
		
		sumgirl=sumtd+sumbk+sumkm+sumgs+sumpf+sumsk;
		cout<<"\nTotal price of Girl's School Uniform is "<<sumgirl<<endl;
		goto MainPage;		

	}
	
	else if(type.compare("3")==0)
	{
		CnVType:
		cout<<"\nPlease select the type of school uniform: \n";
	  	cout<<"[1] Coat \n";
	 	cout<<"[2] Vest \n";
	 	cout<<"[3] Exit to main page\n";
		cout<<"Please key in 1 to 3: \n";
		cin>>cnv;	
		if(cnv.compare("1")==0)
		{
			CoatColour:
			cout<<"\nPlease select the colour: \n";
			cout<<"[1]Black\n";
			cout<<"[2]Maroon\n";
			cout<<"[3]Dark Blue\n";
			cout<<"[4]Exit to type page\n";
			cout<<"Please key in 1 to 4: \n";
			cin>>coat;
			if(coat.compare("1")==0|coat.compare("2")==0|coat.compare("3")==0)
			{goto CoatPrice;}
				
			else if(coat.compare("4")==0)
			{goto CnVType;}
			
			else
			{goto CoatColour;}
			
				CoatPrice:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]S\t\tRM 60\n";
					cout<<"[2]M\t\tRM 65\n";
					cout<<"[3]L\t\tRM 70\n";
					cout<<"[4]XL\t\tRM 75\n";
		
					
					{
						cout<<"Please select by key in the number 1,2,3,4: \n";
	
						ct1=60;
						ct2=65;
						ct3=70;
						ct4=75;
						cin>>ct;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(ct.compare("1")==0)
						{		
							cin>>nct1;
							sumct+=ct1*nct1;
						}
						else if(ct.compare("2")==0)
						{
							cin>>nct2;
							sumct+=ct2*nct2;
						}
						else if(ct.compare("3")==0)
						{
							cin>>nct3;
							sumct+=ct3*nct3;
						}
						else if(ct.compare("4")==0)
						{
							cin>>nct4;
							sumct+=ct4*nct4;
						}
						else 
						{goto CoatPrice;}	
											
						checklistct:
							cout<<"\nTotal price of Coat purchase = RM " <<sumct<<endl;
						
					}
					
		}
		
		else if(cnv.compare("2")==0)
		{
			VestColour:
			cout<<"\nPlease select the colour: \n";
			cout<<"[1]Black\n";
			cout<<"[2]Maroon\n";
			cout<<"[3]Dark Blue\n";
			cout<<"[4]Exit to type page\n";
			cout<<"Please key in 1 to 4: \n";
			cin>>vest;
			if(vest.compare("1")==0|vest.compare("2")==0|vest.compare("3")==0)
			{goto VestPrice;}
			
			else if(vest.compare("3")==0)
			{goto CnVType;}
			
			{goto VestColour;}
			
				VestPrice:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]S\t\tRM 26\n";
					cout<<"[2]M\t\tRM 28\n";
					cout<<"[3]L\t\tRM 30\n";
					cout<<"[4]XL\t\tRM 32\n";
					
					
					{
						cout<<"Please select by key in the number 1,2,3,4: \n";
	
						vt1=26;
						vt2=28;
						vt3=30;
						vt4=32;
						cin>>vt;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(vt.compare("1")==0)
						{
							cin>>nvt1;
							sumvt+=vt1*nvt1;
						}
						else if(vt.compare("2")==0)
						{
							cin>>nvt2;
							sumvt+=vt2*nvt2;
						}
						else if(ct.compare("3")==0)
						{
							cin>>nvt3;
							sumvt+=vt3*nvt3;
						}
						else if(ct.compare("4")==0)
						{
							cin>>nvt4;
							sumvt+=vt4*nvt4;
						}
					
						else 
						{goto VestPrice;}	
									
						checklistvt:
						cout<<"\nTotal price of Vest purchase = RM " <<sumvt<<endl;
						
					}
		}
		
		else if(ct.compare("3")==0){goto MainPage;}
		
		else 
		{
			cout<<"\nPlease select a number from 1 to 3. \n";
			goto CnVType;
		}	
		
		sumcnv=(sumct+sumvt);
		cout<<"\nTotal price of Coat and Vest is "<<sumcnv<<endl;
		goto MainPage;	

	}
	
	else if(type.compare("4")==0)
	{
		SnSType:
			cout<<"\nPlease select the following type: \n";
			cout<<"[1] Socks \n";
			cout<<"[2] Shoes \n";
			cout<<"[3] Exit to main page\n";
			cout<<"Please key in 1 to 3: \n";
			cin>>sns;	
					
			if(sns.compare("1")==0)
			{
				SocksColour:
				cout<<"\nPlease select the colour: \n";
				cout<<"[1]Black\n";
				cout<<"[2]White\n";
				cout<<"[3]Exit to type page\n";
				cout<<"Please key in 1 to 3: \n";
				cin>>socks;
						
				if(socks.compare("1")==0|socks.compare("2")==0)
				{goto SocksPrice;}	
				
				else if(socks.compare("3")==0)
				{goto SnSType;}
				
				else
				{goto SocksColour;}
		
				SocksPrice:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"\tSize\t\tPrice\n";
					cout<<"[1]S  12-13.5\t\tRM 4\n";
					cout<<"[2]M  14-15.5\t\tRM 5\n";
					cout<<"[3]L  16-17.5\t\tRM 6\n";
					cout<<"[4]XL 18-19.5\t\tRM 7\n";
					
				
				{
					cout<<"Please select by key in the number 1,2,3,4: \n";
			
					sc1=4;
					sc2=5;
					sc3=6;
					sc4=7;
					cin>>sc;
					cout<<"\nWhat is the quantity you wish to buy? \n";
					if(sc.compare("1")==0)
					{
						cin>>nsc1;
						sumsc+=sc1*nsc1;
					}
					else if(sc.compare("2")==0)
					{
						cin>>nsc2;
						sumsc+=sc2*nsc2;
					}
					else if(sc.compare("3")==0)
					{
						cin>>nsc3;
						sumsc+=sc3*nsc3;
					}
					else if(sc.compare("4")==0)
					{
						cin>>nsc4;
						sumsc+=sc4*nsc4;
					}

					else 
					{goto SocksPrice;}	
											
					checklistsc:
						cout<<"\nTotal price of Socks purchase = RM " <<sumsc<<endl;
						
				}
					
			}
		
			else if(sns.compare("2")==0)
			{
				ShoesColour:
				cout<<"\nPlease select the colour: \n";
				cout<<"[1]Black\n";
				cout<<"[2]White\n";
				cout<<"[3]Exit to type page\n";
				cout<<"Please key in 1 to 3: \n";
				cin>>shoes;
				
				if(shoes.compare("1")==0|shoes.compare("2")==0)
				{goto ShoesPrice;}
				
				else if(shoes.compare("3")==0)
				{goto SnSType;}
				
				else
				{goto ShoesColour;}
				
				ShoesPrice:
					cout<<"\nBelow are the size and price list: \n";
					cout<<"Size\t\tPrice\n";
					cout<<"[1]5\t\tRM 26\n";
					cout<<"[2]6\t\tRM 28\n";
					cout<<"[3]7\t\tRM 30\n";
					cout<<"[4]8\t\tRM 32\n";
					cout<<"[5]9\t\tRM 34\n";
					cout<<"[6]10\t\tRM 36\n";

				
					{
						cout<<"Please select by key in the number 1,2,3,4: \n";
						
						shs1=26;
						shs2=28;
						shs3=30;
						shs4=32;
						shs5=34;
						shs6=36;
						cin>>shs;
						cout<<"\nWhat is the quantity you wish to buy? \n";
						if(shs.compare("1")==0)
						{
							cin>>nshs1;
							sumshs+=shs1*nshs1;
						}
						else if(shs.compare("2")==0)
						{
							cin>>nshs2;
							sumshs+=shs2*nshs2;
						}
						else if(shs.compare("3")==0)
						{
							cin>>nshs3;
							sumshs+=shs3*nshs3;
						}
						else if(shs.compare("4")==0)
						{
							cin>>nshs4;
							sumshs+=shs4*nshs4;
						}
						else if(shs.compare("5")==0)
						{
							cin>>nshs5;
							sumshs+=shs5*nshs5;
						}
						else if(shs.compare("6")==0)
						{
							cin>>nshs6;
							sumshs+=shs6*nshs6;
						}

						else 
						{goto ShoesPrice;}	
									
						checklistshs:
							cout<<"\nTotal price of Shoes purchase = RM " <<sumshs<<endl;
							
					}
					

			}
			else if(shs.compare("3")==0)
			{goto MainPage;}
			sumsns=sumsc+sumshs;
			cout<<"\nTotal price of Socks and Shoes is "<<sumsns<<endl;
			goto MainPage;
	}
	
	else if(type.compare("5")==0)
	{
		sumtotal = sumboy + sumgirl + sumcnv + sumsns;
		if (sumtotal!=0)
		{
			df=Additional(4);
		}
		else if(sumtotal==0)
		{
			df=0;
		}
		cout<<"total  price: "<<sumtotal<<endl;
		cout<<"delivery fee: "<<df<<endl;
		cout<<"tax implied (10%): "<<0.10*(sumtotal+df)<<endl;
		totalcost = Payment(sumtotal+df);
		cout <<"Total cost: "<<totalcost;
	}
	
	
	else 
	{goto MainPage;	}
	
	curr_time = time(NULL);
	char *tm = ctime(&curr_time);

 	ofstream file;			
  	file.open ("receipt.txt");
  	file<<"***********************"<<endl;
  	file << "	   The School	"<<endl;
  	file<<		   tm		<<endl;
  	file<<"**********************"<<endl;
  	file << "Name: "<<name<<endl;
  	file<<"Address: "<<address<<endl;
  	file<<"Phone number: "<<hpnum<<endl;
  	file<<"**********************\n";
  	file<<"Categories		"<<"Cost(RM)"<<endl;
  	file<<"Boy's School Uniform 	"<<	sumboy<<endl;
  	file<<"Girl's School Uniform 	"<<	sumgirl<<endl;
  	file<<"Coat and Vest 		"<<		sumcnv<<endl;
  	file<<"Socks and Shoes 	"<<	sumsns<<endl;
  	file<<"**********************\n";
  	file << "Total Price: RM "<<setprecision(2)<<fixed<<sumtotal<<endl;
  	file << "Delivery Fee: RM "<<setprecision(2)<<fixed<<df<<endl;
  	file <<"Tax Implied (10%): RM "<<setprecision(2)<<fixed<<Payment(sumtotal +df)-(sumtotal +df)<<endl;
  	file <<"Total Cost: RM "<<setprecision(2)<<fixed<<totalcost<<endl;
  	file<<"************\n";
  	file <<"Thank you for shopping at The School!"<<endl;
  	file<<"For further inquries, please contact us at 03-889887886"<<endl;
  	file <<"Exchange are allowed within 3 days with receipt.\n";
  	file <<"Strictly no cash refund.\n";
	file.close();	
	return 0;
}*/													

