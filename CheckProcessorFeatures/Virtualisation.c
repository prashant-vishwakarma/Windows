#include <windows.h>
#include <stdio.h>

int main(){
	if(IsProcessorFeaturePresent(PF_VIRT_FIRMWARE_ENABLED)){
		printf("Virtualization is present.\n");
	}else{
		printf("Virtualization not present.\n");
	}
	return 0;
}
