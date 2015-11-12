#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "company.h"
#include "consortium.h"

int main(void)
{
	Company Billiton;

	strcpy(Billiton.code, "BHP");
	Billiton.sharePrice = 6446.10;
	Billiton.totalShares = 133;
	Billiton.totalAssetValue = 5000000.32;
	Billiton.totalDebts = 45552.20;

	printf("Billiton:\n\t%s\n\t%.2f\n\t%d\n\t%.2f\n\t%.2f\n", Billiton.code, Billiton.sharePrice, Billiton.totalShares, Billiton.totalAssetValue, Billiton.totalDebts);
	
	Consortium BigMiningGroup;
	
	return 0;
}
