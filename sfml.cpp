#include"sfml/Graphics.hpp"
#include<iostream>
#include<fstream>
#include<windows.h>
#include<time.h>
using namespace sf;
using namespace std;
int dice()
{
	int DICE;
	DICE = 1 + rand() % 6;
	return DICE;
}
void win()
{
	ofstream Score;
	bool plyr4 = true;
	bool show = true;
	bool startr1 = false, startr2 = false, startr3 = false, startr4 = false;
	bool startb1 = false, startb2 = false, startb3 = false, startb4 = false;
	bool starty1 = false, starty2 = false, starty3 = false, starty4 = false;
	bool startg1 = false, startg2 = false, startg3 = false, startg4 = false;
	bool intror1 = false, intror2 = false, intror3 = false, intror4 = false;
	bool introb1 = false, introb2 = false, introb3 = false, introb4 = false;
	bool introy1 = false, introy2 = false, introy3 = false, introy4 = false;
	bool introg1 = false, introg2 = false, introg3 = false, introg4 = false;
	char fan = 'a';
	const int allow = 1;
	const int bruh = 290;
	int sumRED1 = 0, sumRED2 = 0, sumRED3 = 0, sumRED4 = 0;
	int sumBLUE1 = 0, sumBLUE2 = 0, sumBLUE3 = 0, sumBLUE4 = 0;
	int sumGREEN1 = 0, sumGREEN2 = 0, sumGREEN3 = 0, sumGREEN4 = 0;
	int sumYELLOW1 = 0, sumYELLOW2 = 0, sumYELLOW3 = 0, sumYELLOW4 = 0;
	int LAL, PEELA, HARA, NEELA, x = 600;
	double xr1 = bruh, yr1 = bruh, xr2 = bruh, yr2 = bruh, xr3 = bruh, yr3 = bruh, xr4 = bruh, yr4 = bruh;
	double xb1 = bruh, yb1 = bruh, xb2 = bruh, yb2 = bruh, xb3 = bruh, yb3 = bruh, xb4 = bruh, yb4 = bruh;
	double xy1 = bruh, yy1 = bruh, xy2 = bruh, yy2 = bruh, xy3 = bruh, yy3 = bruh, xy4 = bruh, yy4 = bruh;
	double xg1 = bruh, yg1 = bruh, xg2 = bruh, yg2 = bruh, xg3 = bruh, yg3 = bruh, xg4 = bruh, yg4 = bruh;
	double REDXXX[58], REDYYY[58], BLUEXXX[58], BLUEYYY[58], GREENXXX[58], GREENYYY[58], YELLOWXXX[58], YELLOWYYY[58], CORRECTORATORG = 0.3, CORRECTORATORR = 0.6, CORRECTORATORY = 0.9, CORRECTORATORB = 1.2;
	//JUST TO MAKE ECODE EASY TO READ
	double WHOLEXXX[8], WHOLEYYY[8];
	WHOLEXXX[0] = 8.5;
	WHOLEXXX[1] = 36;
	WHOLEXXX[2] = 58;
	WHOLEXXX[3] = 84.5;
	WHOLEXXX[4] = 90;
	WHOLEXXX[5] = 58;
	WHOLEXXX[6] = 36;
	WHOLEXXX[7] = 14;

	WHOLEYYY[0] = 36;
	WHOLEYYY[1] = 14;
	WHOLEYYY[2] = 8.5;
	WHOLEYYY[3] = 36;
	WHOLEYYY[4] = 58;
	WHOLEYYY[5] = 85.5;
	WHOLEYYY[6] = 91;
	WHOLEYYY[7] = 58;
	if (allow == 1)
	{
		REDXXX[0] = 8.5 - CORRECTORATORR;
		REDXXX[1] = 14 - CORRECTORATORR;
		REDXXX[2] = 19.5 - CORRECTORATORR;
		REDXXX[3] = 25 - CORRECTORATORR;
		REDXXX[4] = 30.5 - CORRECTORATORR;
		REDXXX[5] = 36 - CORRECTORATORR;
		REDXXX[6] = 36 - CORRECTORATORR;
		REDXXX[7] = 36 - CORRECTORATORR;
		REDXXX[8] = 36 - CORRECTORATORR;
		REDXXX[9] = 36 - CORRECTORATORR;
		REDXXX[10] = 36 - CORRECTORATORR;
		REDXXX[11] = 47 - CORRECTORATORR;
		REDXXX[12] = 58 - CORRECTORATORR;
		REDXXX[13] = 58 - CORRECTORATORR;
		REDXXX[14] = 58 - CORRECTORATORR;
		REDXXX[15] = 58 - CORRECTORATORR;
		REDXXX[16] = 58 - CORRECTORATORR;
		REDXXX[17] = 58 - CORRECTORATORR;
		REDXXX[18] = 68 - CORRECTORATORR;
		REDXXX[19] = 73.5 - CORRECTORATORR;
		REDXXX[20] = 79 - CORRECTORATORR;
		REDXXX[21] = 84.5 - CORRECTORATORR;
		REDXXX[22] = 90 - CORRECTORATORR;
		REDXXX[23] = 95.5 - CORRECTORATORR;
		REDXXX[24] = 95.5 - CORRECTORATORR;
		REDXXX[25] = 95.5 - CORRECTORATORR;
		REDXXX[26] = REDXXX[22];
		REDXXX[27] = REDXXX[21];
		REDXXX[28] = REDXXX[20];
		REDXXX[29] = REDXXX[19];
		REDXXX[30] = REDXXX[18];
		REDXXX[31] = REDXXX[17];
		REDXXX[32] = REDXXX[16];
		REDXXX[33] = REDXXX[15];
		REDXXX[34] = REDXXX[14];
		REDXXX[35] = REDXXX[13];
		REDXXX[36] = REDXXX[12];
		REDXXX[37] = REDXXX[11];
		REDXXX[38] = REDXXX[10];
		REDXXX[39] = REDXXX[9];
		REDXXX[40] = REDXXX[8];
		REDXXX[41] = REDXXX[7];
		REDXXX[42] = REDXXX[6];
		REDXXX[43] = REDXXX[5];
		REDXXX[44] = REDXXX[4];
		REDXXX[45] = REDXXX[3];
		REDXXX[46] = REDXXX[2];
		REDXXX[47] = REDXXX[1];
		REDXXX[48] = REDXXX[0];
		REDXXX[49] = 3 - CORRECTORATORR;
		REDXXX[50] = REDXXX[49];
		REDXXX[51] = REDXXX[0];
		REDXXX[52] = REDXXX[1];
		REDXXX[53] = REDXXX[2];
		REDXXX[54] = REDXXX[3];
		REDXXX[55] = REDXXX[4];
		REDXXX[56] = 37 - CORRECTORATORR;
		REDXXX[57] = 2000;
		REDYYY[0] = 36 - CORRECTORATORR;
		REDYYY[1] = REDYYY[0];
		REDYYY[2] = REDYYY[0];
		REDYYY[3] = REDYYY[0];
		REDYYY[4] = REDYYY[0];
		REDYYY[5] = 30.5 - CORRECTORATORR;
		REDYYY[6] = 25 - CORRECTORATORR;
		REDYYY[7] = 19.5 - CORRECTORATORR;
		REDYYY[8] = 14 - CORRECTORATORR;
		REDYYY[9] = 8.5 - CORRECTORATORR;
		REDYYY[10] = 3 - CORRECTORATORR;
		REDYYY[11] = REDYYY[10];
		REDYYY[12] = REDYYY[10];
		REDYYY[13] = REDYYY[9];
		REDYYY[14] = REDYYY[8];
		REDYYY[15] = REDYYY[7];
		REDYYY[16] = REDYYY[6];
		REDYYY[17] = REDYYY[5];
		REDYYY[18] = REDYYY[4];
		REDYYY[19] = REDYYY[3];
		REDYYY[20] = REDYYY[2];
		REDYYY[21] = REDYYY[1];
		REDYYY[22] = REDYYY[0];
		REDYYY[23] = REDYYY[0];
		REDYYY[24] = REDYYY[0] + 11;
		REDYYY[25] = REDYYY[0] + 22;
		REDYYY[26] = REDYYY[0] + 22;
		REDYYY[27] = REDYYY[0] + 22;
		REDYYY[28] = REDYYY[0] + 22;
		REDYYY[29] = REDYYY[0] + 22;
		REDYYY[30] = REDYYY[0] + 22;
		REDYYY[31] = 69 - CORRECTORATORR;
		REDYYY[32] = 74.5 - CORRECTORATORR;
		REDYYY[33] = 80 - CORRECTORATORR;
		REDYYY[34] = 85.5 - CORRECTORATORR;
		REDYYY[35] = 91 - CORRECTORATORR;
		REDYYY[36] = 96.5 - CORRECTORATORR;
		REDYYY[37] = REDYYY[36];
		REDYYY[38] = REDYYY[36];
		REDYYY[39] = REDYYY[35];
		REDYYY[40] = REDYYY[34];
		REDYYY[41] = REDYYY[33];
		REDYYY[42] = REDYYY[32];
		REDYYY[43] = REDYYY[31];
		REDYYY[44] = REDYYY[30];
		REDYYY[45] = REDYYY[29];
		REDYYY[46] = REDYYY[28];
		REDYYY[47] = REDYYY[27];
		REDYYY[48] = REDYYY[26];
		REDYYY[49] = REDYYY[25];
		REDYYY[50] = REDYYY[24];
		REDYYY[51] = REDYYY[24];
		REDYYY[52] = REDYYY[24];
		REDYYY[53] = REDYYY[24];
		REDYYY[54] = REDYYY[24];
		REDYYY[55] = REDYYY[24];
		REDYYY[56] = REDYYY[24];
		REDYYY[57] = REDYYY[24];
	}
	if (allow == 1)
	{
		BLUEXXX[0] = 58 - CORRECTORATORB;
		BLUEXXX[1] = 58 - CORRECTORATORB;
		BLUEXXX[2] = 58 - CORRECTORATORB;
		BLUEXXX[3] = 58 - CORRECTORATORB;
		BLUEXXX[4] = 58 - CORRECTORATORB;
		BLUEXXX[5] = 68 - CORRECTORATORB;
		BLUEXXX[6] = 73.5 - CORRECTORATORB;
		BLUEXXX[7] = 79 - CORRECTORATORB;
		BLUEXXX[8] = 84.5 - CORRECTORATORB;
		BLUEXXX[9] = 90 - CORRECTORATORB;
		BLUEXXX[10] = 95.5 - CORRECTORATORB;
		BLUEXXX[11] = 95.5 - CORRECTORATORB;
		BLUEXXX[12] = 95.5 - CORRECTORATORB;
		BLUEXXX[13] = 90 - CORRECTORATORB;
		BLUEXXX[14] = 84.5 - CORRECTORATORB;
		BLUEXXX[15] = 79 - CORRECTORATORB;
		BLUEXXX[16] = 73.5 - CORRECTORATORB;
		BLUEXXX[17] = 68 - CORRECTORATORB;
		BLUEXXX[18] = 58 - CORRECTORATORB;
		BLUEXXX[19] = 58 - CORRECTORATORB;
		BLUEXXX[20] = 58 - CORRECTORATORB;
		BLUEXXX[21] = 58 - CORRECTORATORB;
		BLUEXXX[22] = 58 - CORRECTORATORB;
		BLUEXXX[23] = 58 - CORRECTORATORB;
		BLUEXXX[24] = 47 - CORRECTORATORB;
		BLUEXXX[25] = 36 - CORRECTORATORB;
		BLUEXXX[26] = 36 - CORRECTORATORB;
		BLUEXXX[27] = 36 - CORRECTORATORB;
		BLUEXXX[28] = 36 - CORRECTORATORB;
		BLUEXXX[29] = 36 - CORRECTORATORB;
		BLUEXXX[30] = 36 - CORRECTORATORB;
		BLUEXXX[31] = 30.5 - CORRECTORATORB;
		BLUEXXX[32] = 25 - CORRECTORATORB;
		BLUEXXX[33] = 19.5 - CORRECTORATORB;
		BLUEXXX[34] = 14 - CORRECTORATORB;
		BLUEXXX[35] = 8.5 - CORRECTORATORB;
		BLUEXXX[36] = 3 - CORRECTORATORB;
		BLUEXXX[37] = 3 - CORRECTORATORB;
		BLUEXXX[38] = 3 - CORRECTORATORB;
		BLUEXXX[39] = 8.5 - CORRECTORATORB;
		BLUEXXX[40] = 14 - CORRECTORATORB;
		BLUEXXX[41] = 19.5 - CORRECTORATORB;
		BLUEXXX[42] = 25 - CORRECTORATORB;
		BLUEXXX[43] = 30.5 - CORRECTORATORB;
		BLUEXXX[44] = 36 - CORRECTORATORB;
		BLUEXXX[45] = 36 - CORRECTORATORB;
		BLUEXXX[46] = 36 - CORRECTORATORB;
		BLUEXXX[47] = 36 - CORRECTORATORB;
		BLUEXXX[48] = 36 - CORRECTORATORB;
		BLUEXXX[49] = 36 - CORRECTORATORB;
		BLUEXXX[50] = 47 - CORRECTORATORB;
		BLUEXXX[51] = 47 - CORRECTORATORB;
		BLUEXXX[52] = 47 - CORRECTORATORB;
		BLUEXXX[53] = 47 - CORRECTORATORB;
		BLUEXXX[54] = 47 - CORRECTORATORB;
		BLUEXXX[55] = 47 - CORRECTORATORB;
		BLUEXXX[56] = 47 - CORRECTORATORB;
		BLUEXXX[57] = 2000;
		BLUEYYY[0] = 8.5 - CORRECTORATORB;
		BLUEYYY[1] = 14 - CORRECTORATORB;
		BLUEYYY[2] = 19.5 - CORRECTORATORB;
		BLUEYYY[3] = 25 - CORRECTORATORB;
		BLUEYYY[4] = 30.5 - CORRECTORATORB;
		BLUEYYY[5] = 36 - CORRECTORATORB;
		BLUEYYY[6] = 36 - CORRECTORATORB;
		BLUEYYY[7] = 36 - CORRECTORATORB;
		BLUEYYY[8] = 36 - CORRECTORATORB;
		BLUEYYY[9] = 36 - CORRECTORATORB;
		BLUEYYY[10] = 36 - CORRECTORATORB;
		BLUEYYY[11] = 45.5 - CORRECTORATORB;
		BLUEYYY[12] = 56.5 - CORRECTORATORB;
		BLUEYYY[13] = 56.5 - CORRECTORATORB;
		BLUEYYY[14] = 56.5 - CORRECTORATORB;
		BLUEYYY[15] = 56.5 - CORRECTORATORB;
		BLUEYYY[16] = 56.5 - CORRECTORATORB;
		BLUEYYY[17] = 56.5 - CORRECTORATORB;
		BLUEYYY[18] = 69 - CORRECTORATORB;
		BLUEYYY[19] = 74.5 - CORRECTORATORB;
		BLUEYYY[20] = 80 - CORRECTORATORB;
		BLUEYYY[21] = 85.5 - CORRECTORATORB;
		BLUEYYY[22] = 91 - CORRECTORATORB;
		BLUEYYY[23] = 96.5 - CORRECTORATORB;
		BLUEYYY[24] = 96.5 - CORRECTORATORB;
		BLUEYYY[25] = 96.5 - CORRECTORATORB;
		BLUEYYY[26] = 91 - CORRECTORATORB;
		BLUEYYY[27] = 85.5 - CORRECTORATORB;
		BLUEYYY[28] = 80 - CORRECTORATORB;
		BLUEYYY[29] = 74.5 - CORRECTORATORB;
		BLUEYYY[30] = 69 - CORRECTORATORB;
		BLUEYYY[31] = 56.5 - CORRECTORATORB;
		BLUEYYY[32] = 56.5 - CORRECTORATORB;
		BLUEYYY[33] = 56.5 - CORRECTORATORB;
		BLUEYYY[34] = 56.5 - CORRECTORATORB;
		BLUEYYY[35] = 56.5 - CORRECTORATORB;
		BLUEYYY[36] = 56.5 - CORRECTORATORB;
		BLUEYYY[37] = 45.5 - CORRECTORATORB;
		BLUEYYY[38] = 36 - CORRECTORATORB;
		BLUEYYY[39] = 36 - CORRECTORATORB;
		BLUEYYY[40] = 36 - CORRECTORATORB;
		BLUEYYY[41] = 36 - CORRECTORATORB;
		BLUEYYY[42] = 36 - CORRECTORATORB;
		BLUEYYY[43] = 36 - CORRECTORATORB;
		BLUEYYY[44] = 30.5 - CORRECTORATORB;
		BLUEYYY[45] = 25 - CORRECTORATORB;
		BLUEYYY[46] = 19.5 - CORRECTORATORB;
		BLUEYYY[47] = 14 - CORRECTORATORB;
		BLUEYYY[48] = 8.5 - CORRECTORATORB;
		BLUEYYY[49] = 3 - CORRECTORATORB;
		BLUEYYY[50] = 3 - CORRECTORATORB;
		BLUEYYY[51] = 8.5 - CORRECTORATORB;
		BLUEYYY[52] = 14 - CORRECTORATORB;
		BLUEYYY[53] = 19.5 - CORRECTORATORB;
		BLUEYYY[54] = 25 - CORRECTORATORB;
		BLUEYYY[55] = 30.5 - CORRECTORATORB;
		BLUEYYY[56] = 36 - CORRECTORATORB;
		BLUEYYY[57] = 2000;
	}
	if (allow == 1)
	{
		GREENXXX[0] = 36 - CORRECTORATORG;
		GREENXXX[1] = 36 - CORRECTORATORG;
		GREENXXX[2] = 36 - CORRECTORATORG;
		GREENXXX[3] = 36 - CORRECTORATORG;
		GREENXXX[4] = 36 - CORRECTORATORG;
		GREENXXX[5] = 30.5 - CORRECTORATORG;
		GREENXXX[6] = 25 - CORRECTORATORG;
		GREENXXX[7] = 19.5 - CORRECTORATORG;
		GREENXXX[8] = 14 - CORRECTORATORG;
		GREENXXX[9] = 8.5 - CORRECTORATORG;
		GREENXXX[10] = 3 - CORRECTORATORG;
		GREENXXX[11] = 3 - CORRECTORATORG;
		GREENXXX[12] = 3 - CORRECTORATORG;
		GREENXXX[13] = 8.5 - CORRECTORATORG;
		GREENXXX[14] = 14 - CORRECTORATORG;
		GREENXXX[15] = 19.5 - CORRECTORATORG;
		GREENXXX[16] = 25 - CORRECTORATORG;
		GREENXXX[17] = 30.5 - CORRECTORATORG;
		GREENXXX[18] = 36 - CORRECTORATORG;
		GREENXXX[19] = 36 - CORRECTORATORG;
		GREENXXX[20] = 36 - CORRECTORATORG;
		GREENXXX[21] = 36 - CORRECTORATORG;
		GREENXXX[22] = 36 - CORRECTORATORG;
		GREENXXX[23] = 36 - CORRECTORATORG;
		GREENXXX[24] = 47 - CORRECTORATORG;
		GREENXXX[25] = 58 - CORRECTORATORG;
		GREENXXX[26] = 58 - CORRECTORATORG;
		GREENXXX[27] = 58 - CORRECTORATORG;
		GREENXXX[28] = 58 - CORRECTORATORG;
		GREENXXX[29] = 58 - CORRECTORATORG;
		GREENXXX[30] = 58 - CORRECTORATORG;
		GREENXXX[31] = 68 - CORRECTORATORG;
		GREENXXX[32] = 73.5 - CORRECTORATORG;
		GREENXXX[33] = 79 - CORRECTORATORG;
		GREENXXX[34] = 84.5 - CORRECTORATORG;
		GREENXXX[35] = 90 - CORRECTORATORG;
		GREENXXX[36] = 95.5 - CORRECTORATORG;
		GREENXXX[37] = 95.5 - CORRECTORATORG;
		GREENXXX[38] = 95.5 - CORRECTORATORG;
		GREENXXX[39] = 90 - CORRECTORATORG;
		GREENXXX[40] = 84.5 - CORRECTORATORG;
		GREENXXX[41] = 79 - CORRECTORATORG;
		GREENXXX[42] = 73.5 - CORRECTORATORG;
		GREENXXX[43] = 68 - CORRECTORATORG;
		GREENXXX[44] = 58 - CORRECTORATORG;
		GREENXXX[45] = 58 - CORRECTORATORG;
		GREENXXX[46] = 58 - CORRECTORATORG;
		GREENXXX[47] = 58 - CORRECTORATORG;
		GREENXXX[48] = 58 - CORRECTORATORG;
		GREENXXX[49] = 58 - CORRECTORATORG;
		GREENXXX[50] = 47 - CORRECTORATORG;
		GREENXXX[51] = 47 - CORRECTORATORG;
		GREENXXX[52] = 47 - CORRECTORATORG;
		GREENXXX[53] = 47 - CORRECTORATORG;
		GREENXXX[54] = 47 - CORRECTORATORG;
		GREENXXX[55] = 47 - CORRECTORATORG;
		GREENXXX[56] = 47 - CORRECTORATORG;
		GREENXXX[57] = 2000;
		GREENYYY[0] = 91 - CORRECTORATORG;
		GREENYYY[1] = 85.5 - CORRECTORATORG;
		GREENYYY[2] = 80 - CORRECTORATORG;
		GREENYYY[3] = 74.5 - CORRECTORATORG;
		GREENYYY[4] = 69 - CORRECTORATORG;
		GREENYYY[5] = 56.5 - CORRECTORATORG;
		GREENYYY[6] = 56.5 - CORRECTORATORG;
		GREENYYY[7] = 56.5 - CORRECTORATORG;
		GREENYYY[8] = 56.5 - CORRECTORATORG;
		GREENYYY[9] = 56.5 - CORRECTORATORG;
		GREENYYY[10] = 56.5 - CORRECTORATORG;
		GREENYYY[11] = 45.5 - CORRECTORATORG;
		GREENYYY[12] = 36 - CORRECTORATORG;
		GREENYYY[13] = 36 - CORRECTORATORG;
		GREENYYY[14] = 36 - CORRECTORATORG;
		GREENYYY[15] = 36 - CORRECTORATORG;
		GREENYYY[16] = 36 - CORRECTORATORG;
		GREENYYY[17] = 36 - CORRECTORATORG;
		GREENYYY[18] = 30.5 - CORRECTORATORG;
		GREENYYY[19] = 25 - CORRECTORATORG;
		GREENYYY[20] = 19.5 - CORRECTORATORG;
		GREENYYY[21] = 14 - CORRECTORATORG;
		GREENYYY[22] = 8.5 - CORRECTORATORG;
		GREENYYY[23] = 3 - CORRECTORATORG;
		GREENYYY[24] = 3 - CORRECTORATORG;
		GREENYYY[25] = 3 - CORRECTORATORG;
		GREENYYY[26] = 8.5 - CORRECTORATORG;
		GREENYYY[27] = 14 - CORRECTORATORG;
		GREENYYY[28] = 19.5 - CORRECTORATORG;
		GREENYYY[29] = 25 - CORRECTORATORG;
		GREENYYY[30] = 30.5 - CORRECTORATORG;
		GREENYYY[31] = 36 - CORRECTORATORG;
		GREENYYY[32] = 36 - CORRECTORATORG;
		GREENYYY[33] = 36 - CORRECTORATORG;
		GREENYYY[34] = 36 - CORRECTORATORG;
		GREENYYY[35] = 36 - CORRECTORATORG;
		GREENYYY[36] = 36 - CORRECTORATORG;
		GREENYYY[37] = 45.5 - CORRECTORATORG;
		GREENYYY[38] = 56.5 - CORRECTORATORG;
		GREENYYY[39] = 56.5 - CORRECTORATORG;
		GREENYYY[40] = 56.5 - CORRECTORATORG;
		GREENYYY[41] = 56.5 - CORRECTORATORG;
		GREENYYY[42] = 56.5 - CORRECTORATORG;
		GREENYYY[43] = 56.5 - CORRECTORATORG;
		GREENYYY[44] = 69 - CORRECTORATORG;
		GREENYYY[45] = 74.5 - CORRECTORATORG;
		GREENYYY[46] = 80 - CORRECTORATORG;
		GREENYYY[47] = 85.5 - CORRECTORATORG;
		GREENYYY[48] = 91 - CORRECTORATORG;
		GREENYYY[49] = 96.5 - CORRECTORATORG;
		GREENYYY[50] = 96.5 - CORRECTORATORG;
		GREENYYY[51] = 91 - CORRECTORATORG;
		GREENYYY[52] = 85.5 - CORRECTORATORG;
		GREENYYY[53] = 80 - CORRECTORATORG;
		GREENYYY[54] = 74.5 - CORRECTORATORG;
		GREENYYY[55] = 69 - CORRECTORATORG;
		GREENYYY[56] = 56.5 - CORRECTORATORG;
		GREENYYY[57] = 2000 - CORRECTORATORG;
	}
	if (allow == 1)
	{
		YELLOWXXX[0] = 90 - CORRECTORATORY;
		YELLOWXXX[1] = 84.5 - CORRECTORATORY;
		YELLOWXXX[2] = 79 - CORRECTORATORY;
		YELLOWXXX[3] = 73.5 - CORRECTORATORY;
		YELLOWXXX[4] = 68 - CORRECTORATORY;
		YELLOWXXX[5] = 58 - CORRECTORATORY;
		YELLOWXXX[6] = 58 - CORRECTORATORY;
		YELLOWXXX[7] = 58 - CORRECTORATORY;
		YELLOWXXX[8] = 58 - CORRECTORATORY;
		YELLOWXXX[9] = 58 - CORRECTORATORY;
		YELLOWXXX[10] = 58 - CORRECTORATORY;
		YELLOWXXX[11] = 47 - CORRECTORATORY;
		YELLOWXXX[12] = 36 - CORRECTORATORY;
		YELLOWXXX[13] = 36 - CORRECTORATORY;
		YELLOWXXX[14] = 36 - CORRECTORATORY;
		YELLOWXXX[15] = 36 - CORRECTORATORY;
		YELLOWXXX[16] = 36 - CORRECTORATORY;
		YELLOWXXX[17] = 36 - CORRECTORATORY;
		YELLOWXXX[18] = 30.5 - CORRECTORATORY;
		YELLOWXXX[19] = 25 - CORRECTORATORY;
		YELLOWXXX[20] = 19.5 - CORRECTORATORY;
		YELLOWXXX[21] = 14 - CORRECTORATORY;
		YELLOWXXX[22] = 8.5 - CORRECTORATORY;
		YELLOWXXX[23] = 3 - CORRECTORATORY;
		YELLOWXXX[24] = 3 - CORRECTORATORY;
		YELLOWXXX[25] = 3 - CORRECTORATORY;
		YELLOWXXX[26] = YELLOWXXX[22];
		YELLOWXXX[27] = YELLOWXXX[21];
		YELLOWXXX[28] = YELLOWXXX[20];
		YELLOWXXX[29] = YELLOWXXX[19];
		YELLOWXXX[30] = YELLOWXXX[18];
		YELLOWXXX[31] = YELLOWXXX[17];
		YELLOWXXX[32] = YELLOWXXX[16];
		YELLOWXXX[33] = YELLOWXXX[15];
		YELLOWXXX[34] = YELLOWXXX[14];
		YELLOWXXX[35] = YELLOWXXX[13];
		YELLOWXXX[36] = YELLOWXXX[12];
		YELLOWXXX[37] = YELLOWXXX[11];
		YELLOWXXX[38] = YELLOWXXX[10];
		YELLOWXXX[39] = YELLOWXXX[9];
		YELLOWXXX[40] = YELLOWXXX[8];
		YELLOWXXX[41] = YELLOWXXX[7];
		YELLOWXXX[42] = YELLOWXXX[6];
		YELLOWXXX[43] = YELLOWXXX[5];
		YELLOWXXX[44] = YELLOWXXX[4];
		YELLOWXXX[45] = YELLOWXXX[3];
		YELLOWXXX[46] = YELLOWXXX[2];
		YELLOWXXX[47] = YELLOWXXX[1];
		YELLOWXXX[48] = YELLOWXXX[0];
		YELLOWXXX[49] = 3 - CORRECTORATORY;
		YELLOWXXX[50] = YELLOWXXX[49];
		YELLOWXXX[51] = YELLOWXXX[0];
		YELLOWXXX[52] = YELLOWXXX[1];
		YELLOWXXX[53] = YELLOWXXX[2];
		YELLOWXXX[54] = YELLOWXXX[3];
		YELLOWXXX[55] = YELLOWXXX[4];
		YELLOWXXX[56] = 37 - CORRECTORATORY;
		YELLOWXXX[57] = 2000;
		YELLOWYYY[0] = 58 - CORRECTORATORY;
		YELLOWYYY[1] = YELLOWYYY[0];
		YELLOWYYY[2] = YELLOWYYY[0];
		YELLOWYYY[3] = YELLOWYYY[0];
		YELLOWYYY[4] = YELLOWYYY[0];
		YELLOWYYY[5] = 69 - CORRECTORATORY;
		YELLOWYYY[6] = 74.5 - CORRECTORATORY;
		YELLOWYYY[7] = 80 - CORRECTORATORY;
		YELLOWYYY[8] = 85.5 - CORRECTORATORY;
		YELLOWYYY[9] = 91 - CORRECTORATORY;
		YELLOWYYY[10] = 96.5 - CORRECTORATORY;
		YELLOWYYY[11] = YELLOWYYY[10];
		YELLOWYYY[12] = YELLOWYYY[10];
		YELLOWYYY[13] = YELLOWYYY[9];
		YELLOWYYY[14] = YELLOWYYY[8];
		YELLOWYYY[15] = YELLOWYYY[7];
		YELLOWYYY[16] = YELLOWYYY[6];
		YELLOWYYY[17] = YELLOWYYY[5];
		YELLOWYYY[18] = YELLOWYYY[4];
		YELLOWYYY[19] = YELLOWYYY[3];
		YELLOWYYY[20] = YELLOWYYY[2];
		YELLOWYYY[21] = YELLOWYYY[1];
		YELLOWYYY[22] = YELLOWYYY[0];
		YELLOWYYY[23] = YELLOWYYY[0];
		YELLOWYYY[24] = YELLOWYYY[0] - 11;
		YELLOWYYY[25] = YELLOWYYY[0] - 22;
		YELLOWYYY[26] = YELLOWYYY[0] - 22;
		YELLOWYYY[27] = YELLOWYYY[0] - 22;
		YELLOWYYY[28] = YELLOWYYY[0] - 22;
		YELLOWYYY[29] = YELLOWYYY[0] - 22;
		YELLOWYYY[30] = YELLOWYYY[0] - 22;
		YELLOWYYY[31] = 30.5 - CORRECTORATORY;
		YELLOWYYY[32] = 25 - CORRECTORATORY;
		YELLOWYYY[33] = 19.5 - CORRECTORATORY;
		YELLOWYYY[34] = 14 - CORRECTORATORY;
		YELLOWYYY[35] = 8.5 - CORRECTORATORY;
		YELLOWYYY[36] = 3 - CORRECTORATORY;
		YELLOWYYY[37] = YELLOWYYY[36];
		YELLOWYYY[38] = YELLOWYYY[36];
		YELLOWYYY[39] = YELLOWYYY[35];
		YELLOWYYY[40] = YELLOWYYY[34];
		YELLOWYYY[41] = YELLOWYYY[33];
		YELLOWYYY[42] = YELLOWYYY[32];
		YELLOWYYY[43] = YELLOWYYY[31];
		YELLOWYYY[44] = YELLOWYYY[30];
		YELLOWYYY[45] = YELLOWYYY[29];
		YELLOWYYY[46] = YELLOWYYY[28];
		YELLOWYYY[47] = YELLOWYYY[27];
		YELLOWYYY[48] = YELLOWYYY[26];
		YELLOWYYY[49] = YELLOWYYY[25];
		YELLOWYYY[50] = YELLOWYYY[24];
		YELLOWYYY[51] = YELLOWYYY[24];
		YELLOWYYY[52] = YELLOWYYY[24];
		YELLOWYYY[53] = YELLOWYYY[24];
		YELLOWYYY[54] = YELLOWYYY[24];
		YELLOWYYY[55] = YELLOWYYY[24];
		YELLOWYYY[56] = YELLOWYYY[24];
		YELLOWYYY[57] = YELLOWYYY[24];
	}
	Score.open("Score.txt");
	if (!Score.is_open())
	{
		cout << "File not opening!!";
	}
	RenderWindow window2(VideoMode(4.5 * x / 3, 3 * x / 3), "GAME MENU!");
	window2.clear(Color::Black);
	Texture menu;
	menu.loadFromFile("choose.png");
	Sprite choose;
	choose.setTexture(menu);
	choose.setPosition(0, 50);
	choose.setScale(1, 0.9);
	window2.draw(choose);
	window2.display();
	Sleep(3000);
	Event even;
	while (window2.pollEvent(even))
	{
		if (even.type == Event::KeyPressed)
			if (even.key.code == Keyboard::A)
			
				plyr4 = false;
				window2.close();
			
	}
	/*cout << "Are You An Anime Fan ? (y/n) : ";
	cin >> fan;*/
	RenderWindow window(VideoMode(4.5 * x / 3, 3 * x / 3), "LUDO GAME!!");
	window.clear(Color(245, 245, 245));
	Texture board;
	board.loadFromFile("board.png");
	Sprite board1;
	board1.setPosition(0, 0);
	board1.setTexture(board);
	board1.setScale(1, 1);
	Texture r1;
	r1.loadFromFile("r1.png");
	Texture r2;
	r2.loadFromFile("r2.png");
	Texture r3;
	r3.loadFromFile("r3.png");
	Texture r4;
	r4.loadFromFile("r4.png");
	Texture b1;
	b1.loadFromFile("b1.png");
	Texture b2;
	b2.loadFromFile("b2.png");
	Texture b3;
	b3.loadFromFile("b3.png");
	Texture b4;
	b4.loadFromFile("b4.png");
	Texture y1;
	y1.loadFromFile("y1.png");
	Texture y2;
	y2.loadFromFile("y2.png");
	Texture y3;
	y3.loadFromFile("y3.png");
	Texture y4;
	y4.loadFromFile("y4.png");
	Texture g1;
	g1.loadFromFile("g1.png");
	Texture g2;
	g2.loadFromFile("g2.png");
	Texture g3;
	g3.loadFromFile("g3.png");
	Texture g4;
	g4.loadFromFile("g4.png");

	while (window.isOpen())
	{

		Event odd;
		while (window.pollEvent(odd))
		{
			if (odd.type == Event::KeyPressed)
				if (odd.key.code == Keyboard::Escape)
					window.close();
		}
		//BOARD DISPLAY
		{
			window.draw(board1);
		}
		//switch specially for anime fans
		//if (fan == 'y')
		//{
		//	Texture blue;
		//	blue.loadFromFile("blue.png");
		//	Sprite blue1;
		//	blue1.setOrigin(0, 0);
		//	blue1.setPosition(66.6 * x / 100, 0 * x / 100);
		//	blue1.setTexture(blue);
		//	blue1.setScale(0.20, 0.27);
		//	window.draw(blue1);
		//	Texture red;
		//	red.loadFromFile("red.png");
		//	Sprite red1;
		//	red1.setTexture(red);
		//	red1.setScale(0.20, 0.27);
		//	window.draw(red1);
		//	Texture green;
		//	green.loadFromFile("green2.jpg");
		//	Sprite green1;
		//	green1.setOrigin(0, 0);
		//	green1.setPosition(0 * x / 100, 66.6 * x / 100);
		//	green1.setTexture(green);
		//	green1.setScale(0.195, 0.28);
		//	window.draw(green1);
		//	Texture yellow;
		//	yellow.loadFromFile("yellow.png");
		//	Sprite yellow1;
		//	yellow1.setOrigin(0, 0);
		//	yellow1.setPosition(66.6 * x / 100, 66.6 * x / 100);
		//	yellow1.setTexture(yellow);
		//	yellow1.setScale(0.21, 0.30);
		//	window.draw(yellow1);
		//	Texture nezuko;
		//	nezuko.loadFromFile("nezuko.jpg");
		//	Sprite nezuko1;
		//	nezuko1.setOrigin(0, 0);
		//	nezuko1.setPosition(33.3 * x / 100, 33.3 * x / 100);
		//	nezuko1.setTexture(nezuko);
		//	nezuko1.setScale(0.195, 0.22);
		//	window.draw(nezuko1);
		//}
		{
			cout << endl;
			cout << "Color Red turn : \n";
			LAL = dice();
			cout << "He got :";
			cout << LAL << endl;
			int red = 0;
			cout << "Which Goti :";
			cin >> red;
			//RED1 PART
			if (red == 1)
			{
				if (sumRED1 < 56)
				{
					if (LAL == 6 && startr1 == false)
					{
						xr1 = REDXXX[sumRED1] * x / 100;
						yr1 = REDYYY[sumRED1] * x / 100;
						startr1 = true;
					}
					if (startr1 == true)
					{
						if (intror1 == true)
							sumRED1 = sumRED1 + LAL;
						if (!(sumRED1 > 56))
						{
							xr1 = REDXXX[sumRED1] * x / 100;
							yr1 = REDYYY[sumRED1] * x / 100;
							intror1 = true;
						}
						else
						{
							sumRED1 = sumRED1 - LAL;
							xr1 = REDXXX[sumRED1] * x / 100;
							yr1 = REDYYY[sumRED1] * x / 100;
						}
					}
				}
			}
			//RED2 PART
			if (red == 2)
			{
				if (sumRED2 < 56)
				{
					if (LAL == 6 && startr2 == false)
					{
						xr2 = REDXXX[sumRED2] * x / 100;
						yr2 = REDYYY[sumRED2] * x / 100;
						startr2 = true;
					}
					if (startr2 == true)
					{

						if (intror2 == true)
							sumRED2 = sumRED2 + LAL;
						if (!(sumRED2 > 56))
						{
							xr2 = REDXXX[sumRED2] * x / 100;
							yr2 = REDYYY[sumRED2] * x / 100;
							intror2 = true;
						}
						else
						{
							sumRED2 = sumRED2 - LAL;
							xr2 = REDXXX[sumRED2] * x / 100;
							yr2 = REDYYY[sumRED2] * x / 100;
						}
					}
				}
			}
			//RED3 PART
			if (red == 3)
			{
				if (sumRED3 < 56)
				{
					if (LAL == 6 && startr3 == false)
					{
						xr3 = REDXXX[sumRED3] * x / 100;
						yr3 = REDYYY[sumRED3] * x / 100;
						startr3 = true;
					}
					if (startr3 == true)
					{
						if (intror3 == true)
							sumRED3 = sumRED3 + LAL;
						if (!(sumRED3 > 56))
						{
							xr3 = REDXXX[sumRED3] * x / 100;
							yr3 = REDYYY[sumRED3] * x / 100;
							intror3 = true;
						}
						else
						{
							sumRED3 = sumRED3 - LAL;
							xr3 = REDXXX[sumRED3] * x / 100;
							yr3 = REDYYY[sumRED3] * x / 100;

						}
					}
				}
			}
			//RED4 PART
			if (red == 4)
			{
				if (sumRED4 < 56)
				{
					if (LAL == 6 && startr4 == false)
					{
						xr4 = REDXXX[sumRED4] * x / 100;
						yr4 = REDYYY[sumRED4] * x / 100;
						startr4 = true;
					}
					if (startr4 == true)
					{

						if (intror4 == true)
							sumRED4 = sumRED4 + LAL;
						if (!(sumRED4 > 56))
						{
							xr4 = REDXXX[sumRED4] * x / 100;
							yr4 = REDYYY[sumRED4] * x / 100;
							intror4 = true;
						}
						else
						{
							sumRED4 = sumRED4 - LAL;
							xr4 = REDXXX[sumRED4] * x / 100;
							yr4 = REDYYY[sumRED4] * x / 100;

						}
					}
				}
			}
		}
		cout << endl;
		if (plyr4 == true)
		{
			cout << "Color Blue turn : \n";
			NEELA = dice();
			cout << "He GOT :";
			cout << NEELA << endl;
			int blue = 0;
			cout << "Which Goti :";
			cin >> blue;
			//BLUE1 PART
			if (blue == 1)
			{
				if (sumBLUE1 < 56)
				{
					if (NEELA == 6 && startb1 == false)
					{
						xb1 = BLUEXXX[sumBLUE1] * x / 100;
						yb1 = BLUEYYY[sumBLUE1] * x / 100;
						startb1 = true;
					}
					if (startb1 == true)
					{
						if (introb1 == true)
							sumBLUE1 = sumBLUE1 + NEELA;
						if (!(sumBLUE1 > 56))
						{
							xb1 = BLUEXXX[sumBLUE1] * x / 100;
							yb1 = BLUEYYY[sumBLUE1] * x / 100;
							introb1 = true;
						}
						else
						{
							sumBLUE1 = sumBLUE1 - NEELA;
							xb1 = BLUEXXX[sumBLUE1] * x / 100;
							yb1 = BLUEYYY[sumBLUE1] * x / 100;
						}
					}
				}

			}
			//BLUE2 PART
			if (blue == 2)
			{
				if (sumBLUE2 < 56)
				{
					if (NEELA == 6 && startb2 == false)
					{
						xb2 = BLUEXXX[sumBLUE2] * x / 100;
						yb2 = BLUEYYY[sumBLUE2] * x / 100;
						startb2 = true;
					}
					if (startb2 == true)
					{
						if (introb2 == true)
							sumBLUE2 = sumBLUE2 + NEELA;
						if (!(sumBLUE2 > 56))
						{
							xb2 = BLUEXXX[sumBLUE2] * x / 100;
							yb2 = BLUEYYY[sumBLUE2] * x / 100;
							introb2 = true;
						}
						else
						{
							sumBLUE2 = sumBLUE1 - NEELA;
							xb2 = BLUEXXX[sumBLUE2] * x / 100;
							yb2 = BLUEYYY[sumBLUE2] * x / 100;
						}
					}
				}

			}
			//BLUE3 PART
			if (blue == 3)
			{
				if (sumBLUE3 < 56)
				{
					if (NEELA == 6 && startb3 == false)
					{
						xb3 = BLUEXXX[sumBLUE3] * x / 100;
						yb3 = BLUEYYY[sumBLUE3] * x / 100;
						startb3 = true;
					}
					if (startb3 == true)
					{
						if (introb3 == true)
							sumBLUE3 = sumBLUE3 + NEELA;
						if (!(sumBLUE3 > 56))
						{
							xb3 = BLUEXXX[sumBLUE3] * x / 100;
							yb3 = BLUEYYY[sumBLUE3] * x / 100;
							introb3 = true;
						}
						else
						{
							sumBLUE3 = sumBLUE3 - NEELA;
							xb3 = BLUEXXX[sumBLUE3] * x / 100;
							yb3 = BLUEYYY[sumBLUE3] * x / 100;
						}
					}
				}

			}
			//BLUE4 PART
			if (blue == 4)
			{
				if (sumBLUE4 < 56)
				{
					if (NEELA == 6 && startb4 == false)
					{
						xb4 = BLUEXXX[sumBLUE4] * x / 100;
						yb4 = BLUEYYY[sumBLUE4] * x / 100;
						startb4 = true;
					}
					if (startb4 == true)
					{
						if (introb4 == true)
							sumBLUE4 = sumBLUE4 + NEELA;
						if (!(sumBLUE4 > 56))
						{
							xb4 = BLUEXXX[sumBLUE4] * x / 100;
							yb4 = BLUEYYY[sumBLUE4] * x / 100;
							introb4 = true;
						}
						else
						{
							sumBLUE4 = sumBLUE4 - NEELA;
							xb4 = BLUEXXX[sumBLUE4] * x / 100;
							yb4 = BLUEYYY[sumBLUE4] * x / 100;
						}
					}
				}

			}
		}
		cout << endl;
		{
			cout << "Color Yellow turn : \n";
			PEELA = dice();
			cout << "HE GOT :";
			cout << PEELA << endl;
			int yellow = 0;
			cout << "Which Goti :";
			cin >> yellow;
			//YELLOW1 PART
			if (yellow == 1)
			{
				if (sumYELLOW1 < 56)
				{
					if (PEELA == 6 && starty1 == false)
					{
						xy1 = YELLOWXXX[sumYELLOW1] * x / 100;
						yy1 = YELLOWYYY[sumYELLOW1] * x / 100;
						starty1 = true;
					}
					if (starty1 == true)
					{
						if (introy1 == true)
							sumYELLOW1 = sumYELLOW1 + PEELA;
						if (!(sumBLUE1 > 56))
						{
							xy1 = YELLOWXXX[sumYELLOW1] * x / 100;
							yy1 = YELLOWYYY[sumYELLOW1] * x / 100;
							introy1 = true;
						}
						else
						{
							sumYELLOW1 = sumYELLOW1 - PEELA;
							xy1 = YELLOWXXX[sumYELLOW1] * x / 100;
							yy1 = YELLOWYYY[sumYELLOW1] * x / 100;
						}
					}
				}
			}
			//YELLOW2 PART
			if (yellow == 2)
			{
				if (sumYELLOW2 < 56)
				{
					if (PEELA == 6 && starty2 == false)
					{
						xy2 = YELLOWXXX[sumYELLOW2] * x / 100;
						yy2 = YELLOWYYY[sumYELLOW2] * x / 100;
						starty2 = true;
					}
					if (starty2 == true)
					{
						if (introy2 == true)
							sumYELLOW2 = sumYELLOW2 + PEELA;
						if (!(sumYELLOW2 > 56))
						{
							xy2 = YELLOWXXX[sumYELLOW2] * x / 100;
							yy2 = YELLOWYYY[sumYELLOW2] * x / 100;
							introy2 = true;
						}
						else
						{
							sumYELLOW2 = sumYELLOW2 - PEELA;
							xy2 = YELLOWXXX[sumYELLOW2] * x / 100;
							yy2 = YELLOWYYY[sumYELLOW2] * x / 100;
						}
					}
				}
			}
			//YELLOW3 PART
			if (yellow == 3)
			{
				if (sumYELLOW3 < 56)
				{
					if (PEELA == 6 && starty3 == false)
					{
						xy3 = YELLOWXXX[sumYELLOW3] * x / 100;
						yy3 = YELLOWYYY[sumYELLOW3] * x / 100;
						starty3 = true;
					}
					if (starty3 == true)
					{
						if (introy3 == true)
							sumYELLOW3 = sumYELLOW3 + PEELA;
						if (!(sumYELLOW3 > 56))
						{
							xy3 = YELLOWXXX[sumYELLOW3] * x / 100;
							yy3 = YELLOWYYY[sumYELLOW3] * x / 100;
							introy3 = true;
						}
						else
						{
							sumYELLOW3 = sumYELLOW3 - PEELA;
							xy3 = YELLOWXXX[sumYELLOW3] * x / 100;
							yy3 = YELLOWYYY[sumYELLOW3] * x / 100;
						}
					}
				}
			}
			//YELLOW4 PART
			if (yellow == 4)
			{
				if (sumYELLOW4 < 56)
				{
					if (PEELA == 6 && starty4 == false)
					{
						xy4 = YELLOWXXX[sumYELLOW4] * x / 100;
						yy4 = YELLOWYYY[sumYELLOW4] * x / 100;
						starty4 = true;
					}
					if (starty4 == true)
					{
						if (introy4 == true)
							sumYELLOW4 = sumYELLOW4 + PEELA;
						if (!(sumYELLOW4 > 56))
						{
							xy4 = YELLOWXXX[sumYELLOW4] * x / 100;
							yy4 = YELLOWYYY[sumYELLOW4] * x / 100;
							introy4 = true;
						}
						else
						{
							sumYELLOW4 = sumYELLOW4 - PEELA;
							xy4 = YELLOWXXX[sumYELLOW4] * x / 100;
							yy4 = YELLOWYYY[sumYELLOW4] * x / 100;
						}
					}
				}
			}


		}
		cout << endl;
		if (plyr4 == true)
		{
			cout << "Color Green turn : \n";
			HARA = dice();
			cout << "HE GOT :";
			cout << HARA << endl;
			int green = 0;
			cout << "Which Goti :";
			cin >> green;
			//GREEN1 PART
			if (green == 1)
			{
				if (sumGREEN1 < 56)
				{
					if (HARA == 6 && startg1 == false)
					{
						xg1 = GREENXXX[sumGREEN1] * x / 100;
						yg1 = GREENYYY[sumGREEN1] * x / 100;
						startg1 = true;
					}
					if (startg1 == true)
					{
						if (introg1 == true)
							sumGREEN1 = sumGREEN1 + HARA;
						if (!(sumGREEN1 > 56))
						{
							xg1 = GREENXXX[sumGREEN1] * x / 100;
							yg1 = GREENYYY[sumGREEN1] * x / 100;
							introg1 = true;
						}
						else
						{
							sumGREEN1 = sumGREEN1 - HARA;
							xg1 = GREENXXX[sumGREEN1] * x / 100;
							yg1 = GREENYYY[sumGREEN1] * x / 100;
						}
					}
				}
			}
			//GREEN2 PART
			if (green == 2)
			{
				if (sumGREEN1 < 56)
				{
					if (HARA == 6 && startg2 == false)
					{
						xg2 = GREENXXX[sumGREEN2] * x / 100;
						yg2 = GREENYYY[sumGREEN2] * x / 100;
						startg2 = true;
					}
					if (startg2 == true)
					{
						if (introg2 == true)
							sumGREEN2 = sumGREEN2 + HARA;
						if (!(sumGREEN2 > 56))
						{
							xg2 = GREENXXX[sumGREEN2] * x / 100;
							yg2 = GREENYYY[sumGREEN2] * x / 100;
							introg2 = true;
						}
						else
						{
							sumGREEN2 = sumGREEN2 - HARA;
							xg2 = GREENXXX[sumGREEN2] * x / 100;
							yg2 = GREENYYY[sumGREEN2] * x / 100;
						}
					}
				}
			}
			//GREEN3 PART
			if (green == 3)
			{
				if (sumGREEN3 < 56)
				{
					if (HARA == 6 && startg3 == false)
					{
						xg3 = GREENXXX[sumGREEN3] * x / 100;
						yg3 = GREENYYY[sumGREEN3] * x / 100;
						startg3 = true;
					}
					if (startg3 == true)
					{
						if (introg3 == true)
							sumGREEN3 = sumGREEN3 + HARA;
						if (!(sumGREEN3 > 56))
						{
							xg3 = GREENXXX[sumGREEN3] * x / 100;
							yg3 = GREENYYY[sumGREEN3] * x / 100;
							introg3 = true;
						}
						else
						{
							sumGREEN3 = sumGREEN3 - HARA;
							xg3 = GREENXXX[sumGREEN3] * x / 100;
							yg3 = GREENYYY[sumGREEN3] * x / 100;
						}
					}
				}
			}
			//GREEN4 PART
			if (green == 4)
			{
				if (sumGREEN4 < 56)
				{
					if (HARA == 6 && startg4 == false)
					{
						xg4 = GREENXXX[sumGREEN4] * x / 100;
						yg4 = GREENYYY[sumGREEN4] * x / 100;
						startg4 = true;
					}
					if (startg4 == true)
					{
						if (introg4 == true)
							sumGREEN4 = sumGREEN4 + HARA;
						if (!(sumGREEN4 > 56))
						{
							xg4 = GREENXXX[sumGREEN4] * x / 100;
							yg4 = GREENYYY[sumGREEN4] * x / 100;

							introg4 = true;
						}
						else
						{
							sumGREEN4 = sumGREEN4 - HARA;
							xg4 = GREENXXX[sumGREEN4] * x / 100;
							yg4 = GREENYYY[sumGREEN4] * x / 100;

						}
					}
				}
			}
		}

		Sprite red1;
		red1.setTexture(r1);
		red1.setPosition(Vector2f(xr1, yr1));
		red1.setOrigin(Vector2f(69, 69));
		red1.setScale(0.19, 0.15);
		window.draw(red1);

		Sprite red2;
		red2.setTexture(r2);
		red2.setPosition(Vector2f(xr2, yr2));
		red2.setOrigin(Vector2f(0, 0));
		red2.setScale(0.19, 0.15);
		window.draw(red2);

		Sprite red3;
		red3.setTexture(r3);
		red3.setPosition(Vector2f(xr3, yr3));
		red3.setOrigin(Vector2f(0, 0));
		red3.setScale(0.19, 0.15);
		window.draw(red3);

		Sprite red4;
		red4.setTexture(r4);
		red4.setPosition(Vector2f(xr4, yr4));
		red4.setOrigin(Vector2f(0, 0));
		red4.setScale(0.19, 0.15);
		window.draw(red4);

		Sprite blue1;
		blue1.setTexture(b1);
		blue1.setPosition(Vector2f(xb1, yb1));
		blue1.setOrigin(Vector2f(0, 0));
		blue1.setScale(0.19, 0.15);


		Sprite blue2;
		blue2.setTexture(b2);
		blue2.setPosition(Vector2f(xb2, yb2));
		blue2.setOrigin(Vector2f(0, 0));
		blue2.setScale(0.19, 0.15);


		Sprite blue3;
		blue3.setTexture(b3);
		blue3.setPosition(Vector2f(xb3, yb3));
		blue3.setOrigin(Vector2f(0, 0));
		blue3.setScale(0.19, 0.15);


		Sprite blue4;
		blue4.setTexture(b4);
		blue4.setPosition(Vector2f(xb4, yb4));
		blue4.setOrigin(Vector2f(0, 0));
		blue4.setScale(0.19, 0.15);
		if (plyr4 == true)
		{
			window.draw(blue1);
			window.draw(blue2);
			window.draw(blue3);
			window.draw(blue4);
		}

		Sprite yellow1;
		yellow1.setTexture(y1);
		yellow1.setPosition(Vector2f(xy1, yy1));
		yellow1.setOrigin(Vector2f(0, 0));
		yellow1.setScale(0.19, 0.15);
		window.draw(yellow1);

		Sprite yellow2;
		yellow2.setTexture(y2);
		yellow2.setPosition(Vector2f(xy2, yy2));
		yellow2.setOrigin(Vector2f(0, 0));
		yellow2.setScale(0.19, 0.15);
		window.draw(yellow2);

		Sprite yellow3;
		yellow3.setTexture(y3);
		yellow3.setPosition(Vector2f(xy3, yy3));
		yellow3.setOrigin(Vector2f(0, 0));
		yellow3.setScale(0.19, 0.15);
		window.draw(yellow3);

		Sprite yellow4;
		yellow4.setTexture(y4);
		yellow4.setPosition(Vector2f(xy4, yy4));
		yellow4.setOrigin(Vector2f(0, 0));
		yellow4.setScale(0.19, 0.15);
		window.draw(yellow4);

		Sprite green1;
		green1.setTexture(g1);
		green1.setPosition(Vector2f(xg1, yg1));
		green1.setOrigin(Vector2f(0, 0));
		green1.setScale(0.19, 0.15);


		Sprite green2;
		green2.setTexture(g2);
		green2.setPosition(Vector2f(xg2, yg2));
		green2.setOrigin(Vector2f(0, 0));
		green2.setScale(0.19, 0.15);


		Sprite green3;
		green3.setTexture(g3);
		green3.setPosition(Vector2f(xg3, yg3));
		green3.setOrigin(Vector2f(0, 0));
		green3.setScale(0.19, 0.15);


		Sprite green4;
		green4.setTexture(g4);
		green4.setPosition(Vector2f(xg4, yg4));
		green4.setOrigin(Vector2f(0, 0));
		green4.setScale(0.19, 0.15);
		if (plyr4 == true)
		{
			window.draw(green1);
			window.draw(green2);
			window.draw(green3);
			window.draw(green4);
		}

		Rect<float> r11 = red1.getGlobalBounds();
		Rect<float> r12 = red2.getGlobalBounds();
		Rect<float> r13 = red3.getGlobalBounds();
		Rect<float> r14 = red4.getGlobalBounds();

		Rect<float> b11 = blue1.getGlobalBounds();
		Rect<float> b12 = blue2.getGlobalBounds();
		Rect<float> b13 = blue3.getGlobalBounds();
		Rect<float> b14 = blue4.getGlobalBounds();

		Rect<float> y11 = yellow1.getGlobalBounds();
		Rect<float> y12 = yellow2.getGlobalBounds();
		Rect<float> y13 = yellow3.getGlobalBounds();
		Rect<float> y14 = yellow4.getGlobalBounds();

		Rect<float> g11 = green1.getGlobalBounds();
		Rect<float> g12 = green2.getGlobalBounds();
		Rect<float> g13 = green3.getGlobalBounds();
		Rect<float> g14 = green4.getGlobalBounds();

		//Red collsion
		if (r11.intersects(b11) || r12.intersects(b11) || r13.intersects(b11) || r14.intersects(b11) || y11.intersects(b11) || y12.intersects(b11) || y13.intersects(b11) || y14.intersects(b11) || g11.intersects(b11) || g12.intersects(b11) || g13.intersects(b11) || g14.intersects(b11))
		{
			if (!(xb1 == 8.5 && yb1 == 36 || xb1 == 36 && yb1 == 14 || xb1 == 58 && yb1 == 8.5 || xb1 == 84.5 && yb1 == 36 || xb1 == 90 && yb1 == 58 || xb1 == 58 && yb1 == 85.5 || xb1 == 36 && yb1 == 91 || xb1 == 14 && yb1 == 58))
			{
				sumBLUE1 = 0;
				xb1 = 75 * x / 100;
				yb1 = 9 * x / 100;

				Sprite blue1;
				blue1.setTexture(b1);
				blue1.setPosition(Vector2f(xb1, yb1));
				blue1.setOrigin(Vector2f(0, 0));
				blue1.setScale(0.19, 0.15);
				window.draw(blue1);
			}
		}
		if (r11.intersects(b12) || r12.intersects(b12) || r13.intersects(b12) || r14.intersects(b12) || y11.intersects(b12) || y12.intersects(b12) || y13.intersects(b12) || y14.intersects(b12) || g11.intersects(b12) || g12.intersects(b12) || g13.intersects(b12) || g14.intersects(b12))
		{
			if (!(xb2 == 8.5 && yb2 == 36 || xb2 == 36 && yb2 == 14 || xb2 == 58 && yb2 == 8.5 || xb2 == 84.5 && yb2 == 36 || xb2 == 90 && yb2 == 58 || xb2 == 58 && yb2 == 85.5 || xb2 == 36 && yb2 == 91 || xb2 == 14 && yb2 == 58))
			{
				sumBLUE2 = 0;
				xb2 = 87 * x / 100;
				yb2 = 9 * x / 100;

				Sprite blue2;
				blue2.setTexture(b2);
				blue2.setPosition(Vector2f(xb2, yb2));
				blue2.setOrigin(Vector2f(0, 0));
				blue2.setScale(0.19, 0.15);
				window.draw(blue2);
			}
		}
		if (r11.intersects(b13) || r12.intersects(b13) || r13.intersects(b13) || r14.intersects(b13) || y11.intersects(b13) || y12.intersects(b13) || y13.intersects(b13) || y14.intersects(b13) || g11.intersects(b13) || g12.intersects(b13) || g13.intersects(b13) || g14.intersects(b13))
		{
			if (!(xb3 == 8.5 && yb3 == 36 || xb3 == 36 && yb3 == 14 || xb3 == 58 && yb3 == 8.5 || xb3 == 84.5 && yb3 == 36 || xb3 == 90 && yb3 == 58 || xb3 == 58 && yb3 == 85.5 || xb3 == 36 && yb3 == 91 || xb3 == 14 && yb3 == 58))
			{
				sumBLUE3 = 0;
				xb3 = 75 * x / 100;
				yb3 = 20 * x / 100;

				Sprite blue3;
				blue3.setTexture(b3);
				blue3.setPosition(Vector2f(xb3, yb3));
				blue3.setOrigin(Vector2f(0, 0));
				blue3.setScale(0.19, 0.15);
				window.draw(blue3);
			}
		}
		if (r11.intersects(b14) || r12.intersects(b14) || r13.intersects(b14) || r14.intersects(b14) || y11.intersects(b14) || y12.intersects(b14) || y13.intersects(b14) || y14.intersects(b14) || g11.intersects(b14) || g12.intersects(b14) || g13.intersects(b14) || g14.intersects(b14))
		{
			if (!(xb4 == 8.5 * x / 100 && yb4 == 36 * x / 100 || xb4 == 36 * x / 100 && yb4 == 14 * x / 100 || xb4 == 58 * x / 100 && yb4 == 8.5 * x / 100 || xb4 == 84.5 * x / 100 && yb4 == 36 * x / 100 || xb4 == 90 * x / 100 && yb4 == 58 * x / 100 || xb4 == 58 * x / 100 && yb4 == 85.5 * x / 100 || xb4 == 36 * x / 100 && yb4 == 91 * x / 100 || xb4 == 14 * x / 100 && yb4 == 58 * x / 100))
			{
				sumBLUE4 = 0;
				xb4 = 87 * x / 100;
				yb4 = 20 * x / 100;

				Sprite blue4;
				blue4.setTexture(b4);
				blue4.setPosition(Vector2f(xb4, yb4));
				blue4.setOrigin(Vector2f(0, 0));
				blue4.setScale(0.19, 0.15);
				window.draw(blue4);
			}
		}
		if (r11.intersects(y11) || r12.intersects(y11) || r13.intersects(y11) || r14.intersects(y11) || b11.intersects(y11) || b12.intersects(y11) || b13.intersects(y11) || b14.intersects(y11) || g11.intersects(y11) || g12.intersects(y11) || g13.intersects(y11) || g14.intersects(y11))
		{
			if (!(xb1 == 8.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 36 * x / 100 && yb1 == 14 * x / 100 || xb1 == 58 * x / 100 && yb1 == 8.5 * x / 100 || xb1 == 84.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 90 * x / 100 && yb1 == 58 * x / 100 || xb1 == 58 * x / 100 && yb1 == 85.5 * x / 100 || xb1 == 36 * x / 100 && yb1 == 91 * x / 100 || xb1 == 14 * x / 100 && yb1 == 58 * x / 100))
			{
				sumYELLOW1 = 0;
				xy1 = 75 * x / 100;
				yy1 = 75 * x / 100;

				Sprite yellow1;
				yellow1.setTexture(y1);
				yellow1.setPosition(Vector2f(xy1, yy1));
				yellow1.setOrigin(Vector2f(0, 0));
				yellow1.setScale(0.19, 0.15);
				window.draw(yellow1);
			}
		}
		if (r11.intersects(y12) || r12.intersects(y12) || r13.intersects(y12) || r14.intersects(y12) || b11.intersects(y12) || b12.intersects(y12) || b13.intersects(y12) || b14.intersects(y12) || g11.intersects(y12) || g12.intersects(y12) || g13.intersects(y12) || g14.intersects(y12))
		{
			if (!(xb1 == 8.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 36 * x / 100 && yb1 == 14 * x / 100 || xb1 == 58 * x / 100 && yb1 == 8.5 * x / 100 || xb1 == 84.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 90 * x / 100 && yb1 == 58 * x / 100 || xb1 == 58 * x / 100 && yb1 == 85.5 * x / 100 || xb1 == 36 * x / 100 && yb1 == 91 * x / 100 || xb1 == 14 * x / 100 && yb1 == 58 * x / 100))
			{
				sumYELLOW2 = 0;
					xy2 = 87 * x / 100;
					yy2 = 75 * x / 100;

					Sprite yellow2;
					yellow2.setTexture(y2);
					yellow2.setPosition(Vector2f(xy2, yy2));
					yellow2.setOrigin(Vector2f(0, 0));
				yellow2.setScale(0.19, 0.15);
				window.draw(yellow2);
			}
		}
		if (r11.intersects(y13) || r12.intersects(y13) || r13.intersects(y13) || r14.intersects(y13) || b11.intersects(y13) || b12.intersects(y13) || b13.intersects(y13) || b14.intersects(y13) || g11.intersects(y13) || g12.intersects(y13) || g13.intersects(y13) || g14.intersects(y13))
		{
			if (!(xb1 == 8.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 36 * x / 100 && yb1 == 14 * x / 100 || xb1 == 58 * x / 100 && yb1 == 8.5 * x / 100 || xb1 == 84.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 90 * x / 100 && yb1 == 58 * x / 100 || xb1 == 58 * x / 100 && yb1 == 85.5 * x / 100 || xb1 == 36 * x / 100 && yb1 == 91 * x / 100 || xb1 == 14 * x / 100 && yb1 == 58 * x / 100))
			{
				sumYELLOW3 = 0;
					xy3 = 75 * x / 100;
					yy3 = 87 * x / 100;

					Sprite yellow3;
					yellow3.setTexture(y3);
					yellow3.setPosition(Vector2f(xy3, yy3));
					yellow3.setOrigin(Vector2f(0, 0));
				yellow3.setScale(0.19, 0.15);
				window.draw(yellow3);
			}

		}
		if (r11.intersects(y14) || r12.intersects(y14) || r13.intersects(y14) || r14.intersects(y14) || b11.intersects(y14) || b12.intersects(y14) || b13.intersects(y14) || b14.intersects(y14) || g11.intersects(y14) || g12.intersects(y14) || g13.intersects(y14) || g14.intersects(y14))
		{
			if (!(xb1 == 8.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 36 * x / 100 && yb1 == 14 * x / 100 || xb1 == 58 * x / 100 && yb1 == 8.5 * x / 100 || xb1 == 84.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 90 * x / 100 && yb1 == 58 * x / 100 || xb1 == 58 * x / 100 && yb1 == 85.5 * x / 100 || xb1 == 36 * x / 100 && yb1 == 91 * x / 100 || xb1 == 14 * x / 100 && yb1 == 58 * x / 100))
			{
				sumYELLOW4 = 0;
					xy4 = 87 * x / 100;
					yy4 = 87 * x / 100;

					Sprite yellow4;
					yellow4.setTexture(y4);
					yellow4.setPosition(Vector2f(xy4, yy4));
					yellow4.setOrigin(Vector2f(0, 0));
				yellow4.setScale(0.19, 0.15);
				window.draw(yellow4);
			}
		}
		if (b11.intersects(g14) || b12.intersects(g11) || b13.intersects(g11) || b14.intersects(g11) || y11.intersects(g11) || y12.intersects(g11) || y13.intersects(g11) || y14.intersects(g11) || r11.intersects(g11) || r12.intersects(g11) || r13.intersects(g11) || r14.intersects(g11))
		{
			if (!(xb1 == 8.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 36 * x / 100 && yb1 == 14 * x / 100 || xb1 == 58 * x / 100 && yb1 == 8.5 * x / 100 || xb1 == 84.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 90 * x / 100 && yb1 == 58 * x / 100 || xb1 == 58 * x / 100 && yb1 == 85.5 * x / 100 || xb1 == 36 * x / 100 && yb1 == 91 * x / 100 || xb1 == 14 * x / 100 && yb1 == 58 * x / 100))
			{
				sumGREEN1 = 0;
					xg1 = 8 * x / 100;
					yg1 = 75 * x / 100;

					Sprite green1;
					green1.setTexture(g1);
					green1.setPosition(Vector2f(xg1, yg1));
					green1.setOrigin(Vector2f(0, 0));
				green1.setScale(0.19, 0.15);
				window.draw(green1);
			}
		}
		if (b11.intersects(g12) || b12.intersects(g12) || b13.intersects(g12) || b14.intersects(g12) || y11.intersects(g12) || y12.intersects(g12) || y13.intersects(g12) || y14.intersects(g12) || r11.intersects(g12) || r12.intersects(g12) || g13.intersects(g12) || r14.intersects(g12))
		{
			if (!(xb1 == 8.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 36 * x / 100 && yb1 == 14 * x / 100 || xb1 == 58 * x / 100 && yb1 == 8.5 * x / 100 || xb1 == 84.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 90 * x / 100 && yb1 == 58 * x / 100 || xb1 == 58 * x / 100 && yb1 == 85.5 * x / 100 || xb1 == 36 * x / 100 && yb1 == 91 * x / 100 || xb1 == 14 * x / 100 && yb1 == 58 * x / 100))
			{
				sumGREEN2 = 0;
					xg2 = 20 * x / 100;
					yg2 = 75 * x / 100;

					Sprite green2;
					green2.setTexture(g2);
					green2.setPosition(Vector2f(xg2, yg2));
					green2.setOrigin(Vector2f(0, 0));
				green2.setScale(0.19, 0.15);
				window.draw(green2);
			}
		}
		if (b11.intersects(g13) || b12.intersects(g13) || b13.intersects(g13) || b14.intersects(g13) || y11.intersects(g13) || y12.intersects(g13) || y13.intersects(g13) || y14.intersects(g13) || r11.intersects(g13) || r12.intersects(g13) || r13.intersects(g13) || r14.intersects(g13))

		{
			if (!(xb1 == 8.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 36 * x / 100 && yb1 == 14 * x / 100 || xb1 == 58 * x / 100 && yb1 == 8.5 * x / 100 || xb1 == 84.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 90 * x / 100 && yb1 == 58 * x / 100 || xb1 == 58 * x / 100 && yb1 == 85.5 * x / 100 || xb1 == 36 * x / 100 && yb1 == 91 * x / 100 || xb1 == 14 * x / 100 && yb1 == 58 * x / 100))
			{
				sumGREEN3 = 0;
					xg3 = 8 * x / 100;
					yg3 = 87 * x / 100;

					Sprite green3;
					green3.setTexture(g3);
					green3.setPosition(Vector2f(xg3, yg3));
				green3.setOrigin(Vector2f(0, 0));
				green3.setScale(0.19, 0.15);
				window.draw(green3);
			}
		}
		if (b11.intersects(g14) || b12.intersects(g14) || b13.intersects(g14) || b14.intersects(g14) || y11.intersects(g14) || y12.intersects(g14) || y13.intersects(g14) || y14.intersects(g14) || r11.intersects(g14) || r12.intersects(g14) || r13.intersects(g14) || r14.intersects(g14))
		{
			if (!(xb1 == 8.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 36 * x / 100 && yb1 == 14 * x / 100 || xb1 == 58 * x / 100 && yb1 == 8.5 * x / 100 || xb1 == 84.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 90 * x / 100 && yb1 == 58 * x / 100 || xb1 == 58 * x / 100 && yb1 == 85.5 * x / 100 || xb1 == 36 * x / 100 && yb1 == 91 * x / 100 || xb1 == 14 * x / 100 && yb1 == 58 * x / 100))
			{
				sumGREEN4 = 0;
					xg4 = 20 * x / 100;
					yg4 = 87 * x / 100;

					Sprite green4;
					green4.setTexture(g4);
					green4.setPosition(Vector2f(xg4, yg4));
					green4.setOrigin(Vector2f(0, 0));
				green4.setScale(0.19, 0.15);
				window.draw(green4);
			}
		}
		if (b11.intersects(r14) || b12.intersects(r11) || b13.intersects(r11) || b14.intersects(r11) || y11.intersects(r11) || y12.intersects(r11) || y13.intersects(r11) || y14.intersects(r11) || g11.intersects(r11) || g12.intersects(r11) || g13.intersects(r11) || g14.intersects(r11))
		{
			if (!(xb1 == 8.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 36 * x / 100 && yb1 == 14 * x / 100 || xb1 == 58 * x / 100 && yb1 == 8.5 * x / 100 || xb1 == 84.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 90 * x / 100 && yb1 == 58 * x / 100 || xb1 == 58 * x / 100 && yb1 == 85.5 * x / 100 || xb1 == 36 * x / 100 && yb1 == 91 * x / 100 || xb1 == 14 * x / 100 && yb1 == 58 * x / 100))
			{
				sumRED1 = 0;
					xr1 = 8 * x / 100;
					yr1 = 9 * x / 100;

					Sprite red1;
					red1.setTexture(r1);
					red1.setPosition(Vector2f(xr1, yr1));
					red1.setOrigin(Vector2f(0, 0));
				red1.setScale(0.19, 0.15);
				window.draw(red1);
			}
		}
		if (b11.intersects(r12) || b12.intersects(r12) || b13.intersects(r12) || b14.intersects(r12) || y11.intersects(r12) || y12.intersects(r12) || y13.intersects(r12) || y14.intersects(r12) || g11.intersects(r12) || g12.intersects(r12) || g13.intersects(r12) || g14.intersects(r12))
		{
			if (!(xb1 == 8.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 36 * x / 100 && yb1 == 14 * x / 100 || xb1 == 58 * x / 100 && yb1 == 8.5 * x / 100 || xb1 == 84.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 90 * x / 100 && yb1 == 58 * x / 100 || xb1 == 58 * x / 100 && yb1 == 85.5 * x / 100 || xb1 == 36 * x / 100 && yb1 == 91 * x / 100 || xb1 == 14 * x / 100 && yb1 == 58 * x / 100))
			{
				sumRED2 = 0;
					xr2 = 20 * x / 100;
					yr2 = 9 * x / 100;

					Sprite red2;
					red2.setTexture(r2);
					red2.setPosition(Vector2f(xr2, yr2));
					red2.setOrigin(Vector2f(0, 0));
				red2.setScale(0.19, 0.15);
				window.draw(red2);
			}
		}
		if (b11.intersects(r13) || b12.intersects(r13) || b13.intersects(r13) || b14.intersects(r13) || y11.intersects(r13) || y12.intersects(r13) || y13.intersects(r13) || y14.intersects(r13) || g11.intersects(r13) || g12.intersects(r13) || g13.intersects(r13) || g14.intersects(r13))

		{
			if (!(xb1 == 8.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 36 * x / 100 && yb1 == 14 * x / 100 || xb1 == 58 * x / 100 && yb1 == 8.5 * x / 100 || xb1 == 84.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 90 * x / 100 && yb1 == 58 * x / 100 || xb1 == 58 * x / 100 && yb1 == 85.5 * x / 100 || xb1 == 36 * x / 100 && yb1 == 91 * x / 100 || xb1 == 14 * x / 100 && yb1 == 58 * x / 100))
			{
				sumRED3 = 0;
					xr3 = 8 * x / 100;
					yr3 = 20 * x / 100;

					Sprite red3;
					red3.setTexture(r3);
					red3.setPosition(Vector2f(xr3, yr3));
				red3.setOrigin(Vector2f(0, 0));
				red3.setScale(0.19, 0.15);
				window.draw(red3);
			}
		}
		if (b11.intersects(r14) || b12.intersects(r14) || b13.intersects(r14) || b14.intersects(r14) || y11.intersects(r14) || y12.intersects(r14) || y13.intersects(r14) || y14.intersects(r14) || g11.intersects(r14) || g12.intersects(r14) || g13.intersects(r14) || g14.intersects(r14))
		{
			if (!(xb1 == 8.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 36 * x / 100 && yb1 == 14 * x / 100 || xb1 == 58 * x / 100 && yb1 == 8.5 * x / 100 || xb1 == 84.5 * x / 100 && yb1 == 36 * x / 100 || xb1 == 90 * x / 100 && yb1 == 58 * x / 100 || xb1 == 58 * x / 100 && yb1 == 85.5 * x / 100 || xb1 == 36 * x / 100 && yb1 == 91 * x / 100 || xb1 == 14 * x / 100 && yb1 == 58 * x / 100))
			{
				sumRED4 = 0;
					xr4 = 20 * x / 100;
					yr4 = 20 * x / 100;

					Sprite red4;
					red4.setTexture(r4);
					red4.setPosition(Vector2f(xr4, yr4));
					red4.setOrigin(Vector2f(0, 0));
				red4.setScale(0.19, 0.15);
				window.draw(red4);
			}
		}

		window.display();


	}
	while (Score.is_open())
	{
		if (xr1 == REDXXX[57] && yr1 == REDYYY[57] || xr2 == REDXXX[57] && yr2 == REDYYY[57] || xr3 == REDXXX[57] && yr3 == REDYYY[57] || xr4 == REDXXX[57] && yr4 == REDYYY[57])
		{
			Score << "RED score is 1000!!";
		}
		if (xb1 == BLUEXXX[57] && yb1 == BLUEYYY[57] || xb2 == BLUEXXX[57] && yb2 == BLUEYYY[57] || xb3 == BLUEXXX[57] && yb3 == BLUEYYY[57] || xb4 == BLUEXXX[57] && yb4 == BLUEYYY[57])
		{
			Score << "BLUE score is 1000!!";
		}
		if (xy1 == YELLOWXXX[57] && yy1 == YELLOWYYY[57] || xy2 == YELLOWXXX[57] && yy2 == YELLOWYYY[57] || xy3 == YELLOWXXX[57] && yy3 == YELLOWYYY[57] || xy4 == YELLOWXXX[57] && yy4 == YELLOWYYY[57])
		{
			Score << "YELLOW score is 1000!!";
		}
		if (xg1 == GREENXXX[57] && yg1 == GREENYYY[57] || xg2 == GREENXXX[57] && yg2 == GREENYYY[57] || xg3 == GREENXXX[57] && yg3 == GREENYYY[57] || xg4 == GREENXXX[57] && yg4 == GREENYYY[57])
		{
			Score << "GREEN score is 1000!!";
		}
	}
}
int main()
{
	bool show = true, startr = false, startb = false, starty = false, startg = false, intror = false, introb = false, introy = false, introg = false, f1 = false, f2 = false, f3 = false;
	int sumRED = 0, sumBLUE = 0, sumGREEN = 0, sumYELLOW = 0, LAL, PEELA, HARA, NEELA, set = 50, set2 = -70;
	const int allow = 1, timer = 300;
	const int x = 600;
	srand(time(0));
	RenderWindow window(VideoMode(4.5 * x / 3, 3 * x / 3), "GAME MENU!");
	window.clear(Color(245, 245, 245));
	Font instruction;
	instruction.loadFromFile("logo.otf");
	while (window.isOpen())
	{
		Event fuck;
		while (window.pollEvent(fuck))
		{
			if (fuck.type == Event::KeyPressed)
				if (fuck.key.code == Keyboard::Num1)
				{
					//	window.clear(Color(245, 245, 245));
						//switch specially for anime fans
					window.close();
					win();

				}
			if (fuck.type == Event::KeyPressed)
				if (fuck.key.code == Keyboard::Num2)
				{
					window.clear(Color::Black);
					Texture img;
					img.loadFromFile("ruling.png");
					Sprite ruling;
					ruling.setTexture(img);
					ruling.setPosition(100, 0);
					ruling.setScale(1, 0.9);
					window.draw(ruling);
					window.display();
					Sleep(5000);
				}
			if (fuck.type == Event::KeyPressed)
				if (fuck.key.code == Keyboard::Num3)
				{
					window.clear(Color::Black);
					Texture imgC;
					imgC.loadFromFile("credits.png");
					Sprite rulin;
					rulin.setTexture(imgC);
					rulin.setPosition(100, 0);
					rulin.setScale(1, 1.2);
					window.draw(rulin);
					window.display();
					Sleep(5000);
				}
			if (fuck.type == Event::KeyPressed)
				if (fuck.key.code == Keyboard::Num4)
				{
					window.close();
				}
		}
		//Introduction (Main Start)
		if (allow == 1)
		{
			window.clear(Color::Black);
			Text line1;
			line1.setFont(instruction);
			line1.setString("L");
			line1.setPosition(280 + set, 100);
			line1.setFillColor(Color::Red);
			line1.setCharacterSize(120);
			Text line2;
			line2.setFont(instruction);
			line2.setString("U");
			line2.setPosition(320 + set, 100);
			line2.setFillColor(Color::Blue);
			line2.setCharacterSize(120);
			Text line3;
			line3.setFont(instruction);
			line3.setString(" D");
			line3.setPosition(350 + set, 100);
			line3.setFillColor(Color::Yellow);
			line3.setCharacterSize(120);
			Text line4;
			line4.setFont(instruction);
			line4.setString(" 0");
			line4.setPosition(420 + set, 100);
			line4.setFillColor(Color::Green);
			line4.setCharacterSize(120);
			window.draw(line1);
			if (f1 == false)
			{
				Sleep(timer);
				window.display();
				window.clear(Color::Black);
				f1 = true;
			}
			window.draw(line2);
			if (f2 == false)
			{
				Sleep(timer);
				window.display();
				window.clear(Color::Black);
				f2 = true;
			}
			window.draw(line3);
			if (f3 == false)
			{
				Sleep(timer);
				window.display();
				window.clear(Color::Black);
				f3 = true;
			}
			Sleep(timer);
			window.draw(line4);
			window.clear(Color::Black);
			window.draw(line1);
			window.draw(line2);
			window.draw(line3);
			window.draw(line4);
			Font details;
			details.loadFromFile("logo.otf");
			Text firstline;
			firstline.setFont(details);
			firstline.setString("1. Start The Game");
			firstline.setPosition(330 + set2, 270);
			firstline.setFillColor(Color::White);
			firstline.setCharacterSize(40);
			window.draw(firstline);
			Text secondline;
			secondline.setFont(details);
			secondline.setString("2.How To Play");
			secondline.setPosition(350 + set2, 340);
			secondline.setFillColor(Color::White);
			secondline.setCharacterSize(40);
			window.draw(secondline);
			Text thirdline;
			thirdline.setFont(details);
			thirdline.setString("3.Credits");
			thirdline.setPosition(410 + set2, 410);
			thirdline.setFillColor(Color::White);
			thirdline.setCharacterSize(40);
			window.draw(thirdline);
			Text forthline;
			forthline.setFont(details);
			forthline.setString("4.Exit");
			forthline.setPosition(440 + set2, 480);
			forthline.setFillColor(Color::White);
			forthline.setCharacterSize(40);
			window.draw(forthline);
			window.display();
			window.display();
		}
		show = false;
		if (show == false)
			window.display();
	}
}