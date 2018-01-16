#include <iostream>
#include <string>
using namespace std;

class unggas{
	public:
		void terbangnya(string kecepatanterbang);
		string terbang;
		string warnaParuh;
		
		 
};

int main(){
	unggas burungGagak,pinguin,ayam,bebek;
	
	cout<<"JENIS HEWAN UNGGAS:"<<endl;
    burungGagak.warnaParuh ="BURUNG GAGAK= PARUH HITAM  :";
	pinguin.warnaParuh ="PINGUIN= PARUH KUNING :" ; 
	ayam.warnaParuh  ="AYAM= PARUH KUNING :" ;
	bebek.warnaParuh  ="BEBEK= PARUH COKLAT :" ;
	
	cout <<( burungGagak. warnaParuh);
	burungGagak.terbangnya ("10-100KM/JAM=CEPAT ");
	
	cout <<(pinguin.warnaParuh);
	pinguin.terbangnya("0KM/JAM=TIDAK BISA TERBANG");
	
	cout << (ayam.warnaParuh);
	ayam.terbangnya("5-50KM/JAM=CEPAT DAN JARAK PENDEK ");
	
	cout << (bebek.warnaParuh);
	bebek.terbangnya("1KM/JAM=LAMBAT ");
	
	}


	
void unggas::terbangnya(string kecepatanterbang ) {
		cout << "kecepatan terbang :" << kecepatanterbang <<"||"<<endl;
		

}
