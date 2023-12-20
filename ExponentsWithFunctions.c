#include <stdio.h>
#include <math.h>


int nTimesCalled =0;

float fnPow(float nXval,float nPow)
{
    float nRet;
    nRet = pow(nXval,nPow);

    nTimesCalled++;

    return nRet;
}

int main()
{
    float nUserVal,nExpnt , nPwrVal;

    printf("Enter number and its exponent \n");
    scanf("%f %f", &nUserVal,&nExpnt);

    nPwrVal = fnPow(nUserVal,nExpnt);
    nPwrVal = fnPow(nUserVal,nExpnt);
    nPwrVal = fnPow(nUserVal,nExpnt);
    nPwrVal = fnPow(nUserVal,nExpnt);

    printf("%f raised to %f is equal to %f", nUserVal,nExpnt , nPwrVal);

    printf("\nThe function is called %d times",nTimesCalled);

    getch();
    return 0;
}

