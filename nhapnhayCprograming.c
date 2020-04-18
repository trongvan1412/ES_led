#include <REGX51.H>

void main(){
	int i,j;
	int lap;
	
	while(1){
		
		//den vang
		P2_0 = 0x00;
		for(i=0;i<255;i++)
			for(j=0;j<255;j++);
		P2_0 = 0xFF;

		
		//den trang
		P1_6 = 0x00;
		for(i=0;i<255;i++)
				for(j=0;j<255;j++) ;
		P1_6 = 0xFF;
		
		//den do
		P3_0 = 0x00;
		for(i=0;i<255;i++)
				for(j=0;j<255;j++);
		P3_0 = 0xFF;
	}
	
}