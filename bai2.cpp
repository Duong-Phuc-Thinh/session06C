#include <stdio.h>

int main(){
	int i, n, so ,demchan = 0, demle= 0;
	printf("nhap vao 5 so nguyen:   \n");
	for(i=1; i<=5; ++i){
		printf("so thu %d: ",i);
		scanf("%d",&so);
		
	if(so % 2== 0){
		demchan ++;
	}else{
		demle ++;
	}
}
	printf("so luong so chan la: %d\n ", demchan);
	printf("so luong so le la: %d\n ", demle);
		return 0;
}
	
