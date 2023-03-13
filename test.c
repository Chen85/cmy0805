#include <stdio.h>

int Paint_ProgressBar(int iValue, int iMaxVal, int iMinVal);

int main(void)
{
    int a = Paint_ProgressBar(5,3,10)   ;
    printf("a = %d\n",a);
    return 0;
}

//Component drawing function
int Paint_ProgressBar(int iValue, int iMaxVal, int iMinVal)
{
	//Paint value bar
	iValue = (int)((iValue) / (iMaxVal-iMinVal));
	iMaxVal = 0;

    return iValue;
}
