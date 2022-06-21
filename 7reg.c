#include <REGX51.H>
void delayms(unsigned int t )
{
	unsigned int i,j;
for( i=0;i<t;i++){
	for(j = 0;j<125;j++);
}
}
void main()
{
	int i;
	char matrix[]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};
	while(1)
	{
		for(i=0;i<10;i++){
			P0=matrix[i];
			delayms(300);
		}
	}
	
}
