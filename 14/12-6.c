#include <stdtio.h>
#define LEN 30

struct lens
{
	float foclen;
	float fstop;
	char brand[LEN];
} LENS;
int main(void)
{
/*	LENS list[10]=
	{
		{35,2.4,canno},
		{35,2.4,sigama},
		{500,2.0,remarkata},
		{70,2.4,canno},
		{100,4.0,sigama},
		{135,4.5,canno},
		{200,6.0,nikon},
		{225,5.0,canno},
		{300,4.0,canno},
		{600,2.4,canno},
	}
	*/
	LENS bigeye[10];
	//----a
	bigeye[2].foclen=50;
	bigeye[2].fstop=2.0;
	strcpy(bigeye[2].brand,"Remarkatar");
	//----b
	LENS bigeye[10]= { [2]={500,2.0,"Remarkatar"}};
	 
	return 0;
}
