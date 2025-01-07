#include <iostream>
#include <conio.h>
using namespace std;

void drawlevel1(int& singlebullet, int& columnbullet, int& rowbullet, int& vsinglebullet, int& columnlvl1enemy, int& rowlvl1enemy, int& lvl1enemyhealth, int& rowhero, int& columnhero, int& playerhealth, char screen[][300]) {

	for (int r = 0; r < 40; r++) {
		for (int c = 0; c < 150; c++) {

			screen[r][c] = ' ';
		}
	}

	int rowground = 39;
	int columnground = 0;
	for (int i = 0; i < 150; i++) {
		screen[rowground][columnground] = '=';
		columnground++;
	}

	int rowselm1 = 35;
	int columnselm1 = 30;
	for (int i = 0; i < 15; i++) {
		screen[rowselm1][columnselm1] = '=';
		columnselm1++;
	}
	int rowselm2 = 32;
	int columnselm2 = 57;
	for (int i = 0; i < 15; i++) {
		screen[rowselm2][columnselm2] = '=';
		columnselm2++;
	}


	for (int i = 33; i < 39; i++) {
		screen[i][71] = '+';
	}



	int rowselm3 = 29;
	int columnselm3 = 85;
	for (int i = 0; i < 15; i++) {
		screen[rowselm3][columnselm3] = '=';
		columnselm3++;
	}

	for (int i = 28; i > 8; i--) {
		screen[i][99] = '+';
	}



	int rowselm4 = 22;
	int columnselm4 = 50;
	for (int i = 0; i < 15; i++) {
		screen[rowselm4][columnselm4] = '=';
		columnselm4++;
	}
	int rowselm5 = 20;
	int columnselm5 = 38;
	for (int i = 0; i < 18; i++) {
		screen[rowselm5][columnselm5] = '=';
		columnselm5--;
	}

	screen[20][20] = '=';

	for (int i = 19; i >= 0; i--) {
		screen[i][20] = '+';

	}


	int rowselm = 17;
	for (int i = 0; i < 10; i++) {
		screen[rowselm][30] = 204;
		screen[rowselm][30] = 185;
		screen[rowselm][30] = 205;
		screen[rowselm][30] = 205;
		rowselm--;
	}
	int rowsellm = 18;
	for (int i = 0; i < 10; i++) {
		screen[rowsellm - 1][35] = 204;
		screen[rowsellm - 1][35] = 205;
		screen[rowsellm - 1][35] = 205;
		screen[rowsellm - 1][35] = 185;
		rowsellm--;
	}

	int rselm = 17;
	int cselm = 31;
	for (int i = 0; i < 10; i++) {
		screen[rselm][cselm + 1] = 205;
		rselm--;
	}

	int rselm3 = 17;
	int cselm3 = 33;
	for (int i = 0; i < 10; i++) {
		screen[rselm3][cselm3 + 1] = 205;
		rselm3--;

	}

	int rselm4 = 17;
	int cselm4 = 32;
	for (int i = 0; i < 10; i++) {
		screen[rselm4][cselm4 + 1] = 205;
		rselm4--;

	}

	int rselm5 = 17;
	int cselm5 = 30;
	for (int i = 0; i < 10; i++) {
		screen[rselm5][cselm5 + 1] = 205;
		rselm5--;
	}


	int c = 37;
	for (int i = 0; i < 120; i++) {
		screen[9][c] = '=';
		c++;
	}

	int rowdoor = 9;
	int columndoor = 138;
	screen[rowdoor][columndoor] = '=';
	screen[rowdoor][columndoor + 10] = '=';
	for (int i = 0; i < 6; i++) {
		screen[rowdoor - 1][columndoor] = 186;
		screen[rowdoor - 1][columndoor + 10] = 186;
		rowdoor--;
	}
	rowdoor -= 1;
	screen[rowdoor][columndoor] = 201;
	//screen[rowdoor][columndoor + 10] = 187;
	for (int i = 0; i < 10; i++) {
		screen[rowdoor][columndoor + 1] = 205;
		columndoor++;
	}
	screen[5][141] = 248;
	screen[2][148] = 187;

	int rselm6 = 17;
	int cselm6 = 29;
	for (int i = 0; i < 10; i++) {
		screen[rselm6][cselm6] = 204;
		rselm6--;
	}


	screen[0][1] = 'L';
	screen[0][2] = 'e';
	screen[0][3] = 'v';
	screen[0][4] = 'e';
	screen[0][5] = 'L';
	screen[0][6] = '1';

	screen[0][9] = 'P';
	screen[0][10] = 'l';
	screen[0][11] = 'a';
	screen[0][12] = 'y';
	screen[0][13] = 'e';
	screen[0][14] = 'r';
	screen[0][15] = ':';


	for (int i = 0; i < playerhealth; i++) {
		screen[0][16 + i] = 'X';

	}



	screen[0][23] = 'P';
	screen[0][24] = 'l';
	screen[0][25] = 'a';
	screen[0][26] = 'y';
	screen[0][27] = 'e';
	screen[0][28] = 'r';
	screen[0][29] = ':';


	for (int i = 0; i < lvl1enemyhealth; i++) {
		screen[0][30 + i] = 'X';

	}


	if (singlebullet == 1) {

		screen[rowbullet][columnbullet] = '-';
		for (int i = 0; i < 6; i++) {
			vsinglebullet += 1;
			columnbullet += 1;
			if (i > columnlvl1enemy - 6 && i < columnlvl1enemy + 6 && rowbullet > rowlvl1enemy && rowbullet < rowlvl1enemy + 7) {
				vsinglebullet = 0;
				singlebullet = 0;
				columnbullet = columnhero + 6;
				lvl1enemyhealth--;
				break;

			}
		}
		//Enemy1
		if (lvl1enemyhealth > 0) {

			if (columnbullet > columnlvl1enemy - 6 && columnbullet < columnlvl1enemy + 6 && rowbullet > rowlvl1enemy && rowbullet < rowlvl1enemy + 7) {
				vsinglebullet = 0;
				singlebullet = 0;
				columnbullet = columnhero + 6;
				lvl1enemyhealth--;

			}
		}



	}

	if (vsinglebullet > 100) {
		vsinglebullet = 0;
		singlebullet = 0;
	}




	if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
		playerhealth = 0;
	}


}

void drawlevel2(int& rowlvl2enemy2, int& columnlvl2enemy2, int& lvl2enemy2health, int& rowbullet, int& columnbullet, int& lvl2enemy1health, int& rowlvl2enemy1, int& columnlvl2enemy1, int& vsinglebullet, int& singlebullet, char screen[][300], int rowhero, int columnhero, int& scrollcolumn, int& columns, int& playerhealth) {
	int columnhero1 = columnhero - 9;
	for (int r = 0; r < 40; r++) {
		for (int c = 0; c < 300; c++) {

			screen[r][c] = ' ';
		}
	}

	int rowground = 39;
	int columnground = 0;
	for (int i = 0; i < 100; i++) {
		screen[rowground][columnground] = '=';
		columnground++;
	}

	int rowground2 = 12;
	int columnground2 = 70;
	for (int i = 0; i < 110; i++) {
		screen[rowground2][columnground2] = '=';
		columnground2++;
	}

	int columnground3 = 170;
	for (int i = 0; i < 120; i++) {
		screen[rowground][columnground3] = '=';
		columnground3++;
	}
	screen[12][195] = '=';
	screen[12][196] = '=';
	screen[12][197] = '=';

	for (int i = 11; i >= 0; i--) {
		screen[i][197] = '+';
	}


	int rowground4 = 24;
	int columnground4 = 160;
	for (int i = 0; i < 115; i++) {
		screen[rowground4][columnground4] = '=';
		columnground4++;
	}

	int lvl2rowselm1 = 35;
	int lvl2columnselm1 = 30;
	for (int i = 0; i < 10; i++) {
		screen[lvl2rowselm1][lvl2columnselm1] = '=';
		lvl2columnselm1++;
	}

	int lvl2rowselm2 = 17;
	int lvl2columnselm2 = 40;
	for (int i = 0; i < 10; i++) {
		screen[lvl2rowselm2][lvl2columnselm2] = '=';
		lvl2columnselm2++;
	}

	int rowdoor = 30;
	int columndoor = 170;

	for (int i = 0; i < 9; i++) {
		screen[rowdoor][columndoor] = 186;
		rowdoor++;
	}

	int rowdoor2 = 30;
	screen[rowdoor2][columndoor] = 201;

	for (int i = 0; i < 10; i++) {
		screen[rowdoor2][columndoor + 1] = 205;
		columndoor++;
	}

	screen[rowdoor2][columndoor] = 187;

	int columndoor2 = 180;
	for (int i = 0; i < 8; i++) {
		screen[rowdoor2 + 1][columndoor2] = 186;
		rowdoor2++;
	}

	screen[34][178] = 248;

	screen[24][290] = '=';
	screen[24][291] = '=';
	screen[24][292] = '=';

	for (int i = 23; i >= 0; i--) {
		screen[i][292] = '+';
	}


	int rowlaser = 23;
	int columnlaser = 160;
	for (int i = rowlaser; i >= 13; i--) {
		screen[i][columnlaser] = '+';
	}

	screen[39][160] = '=';
	screen[39][161] = '=';
	screen[39][162] = '=';
	screen[39][163] = '=';
	screen[39][164] = '=';
	screen[39][165] = '=';
	screen[39][166] = '=';
	screen[39][167] = '=';
	screen[39][168] = '=';
	screen[39][169] = '=';





	int rowlaser2 = 38;
	int columnlase2 = 160;
	for (int i = rowlaser2; i >= 24; i--) {
		screen[i][columnlaser] = '+';
	}


	screen[0][columnhero1] = 'L';
	screen[0][columnhero1 + 1] = 'e';
	screen[0][columnhero1 + 2] = 'v';
	screen[0][columnhero1 + 3] = 'e';
	screen[0][columnhero1 + 4] = 'L';
	screen[0][columnhero1 + 5] = ':';

	screen[0][columnhero1 + 6] = '2';

	screen[0][columnhero1 + 9] = 'P';
	screen[0][columnhero1 + 10] = 'l';
	screen[0][columnhero1 + 11] = 'a';
	screen[0][columnhero1 + 12] = 'y';
	screen[0][columnhero1 + 13] = 'e';
	screen[0][columnhero1 + 14] = 'r';
	screen[0][columnhero1 + 15] = ':';

	for (int i = 0; i < playerhealth; i++) {
		screen[0][columnhero1 + 16 + i] = 'X';

	}

	screen[0][columnhero1 + 23] = 'e';
	screen[0][columnhero1 + 24] = 'n';
	screen[0][columnhero1 + 25] = 'e';
	screen[0][columnhero1 + 26] = 'm';
	screen[0][columnhero1 + 27] = 'y';
	screen[0][columnhero1 + 28] = '1';
	screen[0][columnhero1 + 29] = ':';


	for (int i = 0; i < lvl2enemy1health; i++) {
		screen[0][columnhero1 + 30 + i] = 'X';

	}


	screen[0][columnhero1 + 37] = 'e';
	screen[0][columnhero1 + 38] = 'n';
	screen[0][columnhero1 + 39] = 'e';
	screen[0][columnhero1 + 40] = 'm';
	screen[0][columnhero1 + 41] = 'y';
	screen[0][columnhero1 + 42] = '2';
	screen[0][columnhero1 + 43] = ':';


	for (int i = 0; i < lvl2enemy2health; i++) {
		screen[0][columnhero1 + 44 + i] = 'X';

	}



	if (singlebullet == 1) {

		screen[rowbullet][columnbullet] = '-';
		for (int i = 0; i < 6; i++) {
			vsinglebullet += 1;
			columnbullet += 1;
			if (i > columnlvl2enemy1 - 6 && i < columnlvl2enemy1 + 6 && rowbullet > rowlvl2enemy1 && rowbullet < rowlvl2enemy1 + 7) {
				vsinglebullet = 0;
				singlebullet = 0;
				columnbullet = columnhero + 6;
				lvl2enemy1health--;
				break;

			}
		}
		//vsinglebullet += 1;
		//columnbullet += 1;

		//Enemy 1
		if (lvl2enemy1health > 0) {

			if (columnbullet > columnlvl2enemy1 - 6 && columnbullet < columnlvl2enemy1 + 6 && rowbullet > rowlvl2enemy1 && rowbullet < rowlvl2enemy1 + 7) {
				vsinglebullet = 0;
				singlebullet = 0;
				columnbullet = columnhero + 6;
				lvl2enemy1health--;

			}
		}
		//Enemy 2
		if (lvl2enemy2health > 0) {

			if (columnbullet > columnlvl2enemy2 - 6 && columnbullet < columnlvl2enemy2 + 6 && rowbullet > rowlvl2enemy2 && rowbullet < rowlvl2enemy2 + 7) {
				vsinglebullet = 0;
				singlebullet = 0;
				columnbullet = columnhero + 6;
				lvl2enemy2health--;

			}



		}


	}

	if (vsinglebullet > 100) {
		vsinglebullet = 0;
		singlebullet = 0;
	}


	if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
		playerhealth = 0;
	}

}

void drawlevel3(int& ctofmove2, int& ctofmove1, int& lvl3enemy4health, int& rowlvl3enemy4, int& columnlvl3enemy4, int& lvl3enemy3health, int& rowlvl3enemy3, int& columnlvl3enemy3, int& rowbomb2, int& columnbomb2, int& rowbomb1, int& columnbomb1, int& scroll3, int& lcond, int& bulletdirection, int& columnlvl3enemy2, int& rowlvl3enemy2, int& vsinglebullet, int& rowlvl3enemy1, int& columnlvl3enemy1, int& singlebullet, int& rowbullet, int& columnbullet, int& lvl3enemy2health, int& lvl3enemy1health, int& playerhealth, int& rowhero, int& columnhero, char screen[][300]) {
	for (int r = 0; r < 40; r++) {
		for (int c = 0; c < 300; c++) {
			screen[r][c] = ' ';
		}
	}

	for (int i = 0; i < 300; i++) {
		screen[39][i] = '=';
	}


	int columnground1 = 20;
	int rowground1 = 9;

	for (int i = 0; i < 250; i++) {
		screen[rowground1][columnground1] = '=';
		columnground1++;
	}


	//int columnver1 = 140;
	//int rowver1 = 38;
	//for (int i = 0; i < 4; i++) {
	//	screen[rowver1][columnver1] = 186;
	//	rowver1--;
	//}
	//
	//int columnver2 = 160;
	//int rowver2 = 38;
	//for (int i = 0; i < 4; i++) {
	//	screen[rowver2][columnver2] = 186;
	//	rowver2--;
	//}


	//int columnhero1 = columnhero - 65;
	int columnhero1 = scroll3;


	screen[0][columnhero1] = 'L';
	screen[0][columnhero1 + 1] = 'e';
	screen[0][columnhero1 + 2] = 'v';
	screen[0][columnhero1 + 3] = 'e';
	screen[0][columnhero1 + 4] = 'L';
	screen[0][columnhero1 + 5] = ':';

	screen[0][columnhero1 + 6] = '2';

	screen[0][columnhero1 + 9] = 'P';
	screen[0][columnhero1 + 10] = 'l';
	screen[0][columnhero1 + 11] = 'a';
	screen[0][columnhero1 + 12] = 'y';
	screen[0][columnhero1 + 13] = 'e';
	screen[0][columnhero1 + 14] = 'r';
	screen[0][columnhero1 + 15] = ':';

	for (int i = 0; i < playerhealth; i++) {
		screen[0][columnhero1 + 16 + i] = 'X';

	}

	screen[0][columnhero1 + 23] = 'e';
	screen[0][columnhero1 + 24] = 'n';
	screen[0][columnhero1 + 25] = 'e';
	screen[0][columnhero1 + 26] = 'm';
	screen[0][columnhero1 + 27] = 'y';
	screen[0][columnhero1 + 28] = '1';
	screen[0][columnhero1 + 29] = ':';


	for (int i = 0; i < lvl3enemy1health; i++) {
		screen[0][columnhero1 + 30 + i] = 'X';

	}


	screen[0][columnhero1 + 37] = 'e';
	screen[0][columnhero1 + 38] = 'n';
	screen[0][columnhero1 + 39] = 'e';
	screen[0][columnhero1 + 40] = 'm';
	screen[0][columnhero1 + 41] = 'y';
	screen[0][columnhero1 + 42] = '2';
	screen[0][columnhero1 + 43] = ':';


	for (int i = 0; i < lvl3enemy2health; i++) {
		screen[0][columnhero1 + 44 + i] = 'X';

	}



	screen[0][columnhero1 + 51] = 'e';
	screen[0][columnhero1 + 52] = 'n';
	screen[0][columnhero1 + 53] = 'e';
	screen[0][columnhero1 + 54] = 'm';
	screen[0][columnhero1 + 55] = 'y';
	screen[0][columnhero1 + 56] = '3';
	screen[0][columnhero1 + 57] = ':';


	for (int i = 0; i < lvl3enemy3health; i++) {
		screen[0][columnhero1 + 58 + i] = 'X';

	}



	screen[0][columnhero1 + 65] = 'e';
	screen[0][columnhero1 + 66] = 'n';
	screen[0][columnhero1 + 67] = 'e';
	screen[0][columnhero1 + 68] = 'm';
	screen[0][columnhero1 + 69] = 'y';
	screen[0][columnhero1 + 70] = '4';
	screen[0][columnhero1 + 71] = ':';


	for (int i = 0; i < lvl3enemy4health; i++) {
		screen[0][columnhero1 + 72 + i] = 'X';

	}



	int rowdoor = 1;
	int columndoor = 143;
	for (int i = 0; i < 16; i++) {
		screen[rowdoor][columndoor] = 205;
		columndoor++;
	}

	screen[rowdoor][columndoor] = 187;
	for (int i = 0; i < 7; i++) {
		screen[rowdoor + 1][columndoor] = 186;
		rowdoor++;
	}


	int rowdoor1 = 1;
	int columndoor1 = 143;

	screen[rowdoor1][columndoor1] = 201;
	for (int i = 0; i < 7; i++) {
		screen[rowdoor1 + 1][columndoor1] = 186;
		rowdoor1++;
	}


	if (bulletdirection == 1) {
		if (singlebullet == 1) {

			screen[rowbullet][columnbullet] = '-';
			for (int i = 0; i < 6; i++) {
				vsinglebullet += 1;
				columnbullet += 1;
				if (i > columnlvl3enemy1 - 6 && i < columnlvl3enemy1 + 6 && rowbullet > rowlvl3enemy1 && rowbullet < rowlvl3enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl3enemy1health--;
					break;

				}
			}
			//vsinglebullet += 1;
			//columnbullet += 1;

			//Enemy 1
			if (lvl3enemy1health > 0) {

				if (columnbullet > columnlvl3enemy1 - 6 && columnbullet < columnlvl3enemy1 + 6 && rowbullet > rowlvl3enemy1 && rowbullet < rowlvl3enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl3enemy1health--;

				}
			}
			//Enemy 2
			if (lvl3enemy2health > 0) {

				if (columnbullet > columnlvl3enemy2 - 6 && columnbullet < columnlvl3enemy2 + 6 && rowbullet > rowlvl3enemy2 && rowbullet < rowlvl3enemy2 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl3enemy2health--;

				}



			}
			//Enemy3
			if (lvl3enemy3health > 0) {

				if (columnbullet > columnlvl3enemy3 - 6 && columnbullet < columnlvl3enemy3 + 6 && rowbullet > rowlvl3enemy3 && rowbullet < rowlvl3enemy3 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl3enemy3health--;

				}



			}

			//Enemy4
			if (lvl3enemy4health > 0) {

				if (columnbullet > columnlvl3enemy4 - 6 && columnbullet < columnlvl3enemy4 + 6 && rowbullet > rowlvl3enemy4 && rowbullet < rowlvl3enemy4 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl3enemy4health--;

				}



			}


		}

		if (vsinglebullet > 100) {
			vsinglebullet = 0;
			singlebullet = 0;
		}

		if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
			playerhealth = 0;
		}

	}

	if (bulletdirection == 2) {
		if (singlebullet == 1) {

			screen[rowbullet][columnbullet] = '-';
			for (int i = 0; i < 6; i++) {
				vsinglebullet += 1;
				columnbullet -= 1;
				if (i > columnlvl3enemy1 - 6 && i < columnlvl3enemy1 + 6 && rowbullet > rowlvl3enemy1 && rowbullet < rowlvl3enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl3enemy1health--;
					break;

				}
			}
			//vsinglebullet += 1;
			//columnbullet += 1;

			//Enemy 1
			if (lvl3enemy1health > 0) {

				if (columnbullet > columnlvl3enemy1 - 6 && columnbullet < columnlvl3enemy1 + 6 && rowbullet > rowlvl3enemy1 && rowbullet < rowlvl3enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero - 6;
					lvl3enemy1health--;

				}
			}
			//Enemy 2
			if (lvl3enemy2health > 0) {

				if (columnbullet > columnlvl3enemy2 - 6 && columnbullet < columnlvl3enemy2 + 6 && rowbullet > rowlvl3enemy2 && rowbullet < rowlvl3enemy2 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero - 6;
					lvl3enemy2health--;

				}



			}
			//Enemy3
			if (lvl3enemy3health > 0) {

				if (columnbullet > columnlvl3enemy3 - 6 && columnbullet < columnlvl3enemy3 + 6 && rowbullet > rowlvl3enemy3 && rowbullet < rowlvl3enemy3 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl3enemy3health--;

				}



			}


		}

		if (vsinglebullet > 100) {
			vsinglebullet = 0;
			singlebullet = 0;
		}

		if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
			playerhealth = 0;
		}

	}



	if (bulletdirection == 3) {
		if (singlebullet == 1) {

			screen[rowbullet][columnbullet] = '^';
			for (int i = 0; i < 6; i++) {
				vsinglebullet += 1;
				rowbullet -= 1;
				if (i > columnlvl3enemy1 - 18 && i < columnlvl3enemy1 + 18 && rowbullet > rowlvl3enemy1 && rowbullet < rowlvl3enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero;
					lvl3enemy1health--;
					break;

				}
			}
			//vsinglebullet += 1;
			//columnbullet += 1;

			//Enemy 1
			if (lvl3enemy1health > 0) {

				if (columnbullet > columnlvl3enemy1 - 18 && columnbullet < columnlvl3enemy1 + 18 && rowbullet > rowlvl3enemy1 && rowbullet < rowlvl3enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero;
					lvl3enemy1health--;

				}
			}
			//Enemy 2
			if (lvl3enemy2health > 0) {

				if (columnbullet > columnlvl3enemy2 - 18 && columnbullet < columnlvl3enemy2 + 18 && rowbullet > rowlvl3enemy2 && rowbullet < rowlvl3enemy2 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero;
					lvl3enemy2health--;

				}



			}


		}

		if (vsinglebullet > 20) {
			vsinglebullet = 0;
			singlebullet = 0;
		}


		if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
			playerhealth = 0;
		}



















	}


	if (lcond == 1) {

		if (columnhero < 143) {
			for (int i = 38; i > 9; i--) {
				screen[i][151] = '+';
			}
			lcond = 0;
		}
	}
	else {
		for (int i = 38; i > 9; i--) {
			screen[i][151] = '+';
		}
	}


	if (lcond == 1) {

		if (columnhero > 157) {
			for (int i = 38; i > 9; i--) {
				screen[i][149] = '+';
			}
			lcond = 0;
		}
	}
	else {
		for (int i = 38; i > 9; i--) {
			screen[i][149] = '+';
		}
	}

	if (lvl3enemy1health > 0) {


		screen[rowbomb1][columnbomb1] = 'O';
		if (ctofmove1 >= 15 && ctofmove1 < 20) {
			if (rowbomb1 == 38) {

				columnbomb1 = columnlvl3enemy1 + 15;
			}
		}
		else {
			columnbomb1 = columnlvl3enemy1;

		}
		rowbomb1 += 1;
		if (rowbomb1 == 38) {
			if (columnbomb1 < columnhero + 10 && columnbomb1 > columnhero - 10) {
				playerhealth -= 1;
			}
			rowbomb1 = rowlvl3enemy1 + 7;
		}
	}

	if (lvl3enemy2health > 0) {

		screen[rowbomb2][columnbomb2] = '@';
		if (ctofmove2 >= 15 && ctofmove2 < 20) {
			if (rowbomb2 == 38) {

				columnbomb2 = columnlvl3enemy2 - 15;
			}
		}
		else {
			columnbomb2 = columnlvl3enemy2;

		}
		rowbomb2 += 1;
		if (rowbomb2 == 38) {

			rowbomb2 = rowlvl3enemy2 + 7;
		}

		if (columnbomb2 < columnhero + 10 && columnbomb2 > columnhero - 10 && rowbomb2 > rowhero) {
			playerhealth -= 1;
		}
	}



}

void Drawobstaclelvl3(char screen[][300], int robs1lvl3, int cobs1lvl3, int lvl3dirocbst1, int robs2lvl3, int cobs2lvl3, int lvl3dirocbst2, int robs3lvl3, int cobs3lvl3, int lvl3dirocbst3, int robs4lvl3, int cobs4lvl3, int lvl3dirocbst4) {
	for (int i = 0; i < 12; i++) {
		screen[robs1lvl3][cobs1lvl3] = 'x';
		cobs1lvl3++;
	}

	for (int i = 0; i < 12; i++) {
		screen[robs2lvl3][cobs2lvl3] = 'x';
		cobs2lvl3--;
	}

	for (int i = 0; i < 12; i++) {
		screen[robs3lvl3][cobs3lvl3] = 'x';
		cobs3lvl3++;
	}

	for (int i = 0; i < 12; i++) {
		screen[robs4lvl3][cobs4lvl3] = 'x';
		cobs4lvl3--;
	}
}

void Moveobstacles3(char screen[][300], int& robs1lvl3, int& cobs1lvl3, int& lvl3dirocbst1, int& robs2lvl3, int& cobs2lvl3, int& lvl3dirocbst2, int& robs3lvl3, int& cobs3lvl3, int& lvl3dirocbst3, int& robs4lvl3, int& cobs4lvl3, int& lvl3dirocbst4) {
	if (lvl3dirocbst1 == -1)
	{
		if (cobs1lvl3 == 161)
		{
			lvl3dirocbst1 *= -1;
		}
	}
	else
	{
		if ((cobs1lvl3 + 10) == 296)
		{
			lvl3dirocbst1 *= -1;
		}
	}

	cobs1lvl3 += lvl3dirocbst1;

	if (lvl3dirocbst2 == -1)
	{
		if (cobs2lvl3 == 172)
		{
			lvl3dirocbst2 *= -1;
		}
	}
	else
	{
		if ((cobs2lvl3 + 10) == 296)
		{
			lvl3dirocbst2 *= -1;
		}
	}

	cobs2lvl3 += lvl3dirocbst2;

	if (lvl3dirocbst3 == -1)
	{
		if (cobs3lvl3 == 161)
		{
			lvl3dirocbst3 *= -1;
		}
	}
	else
	{
		if ((cobs3lvl3 + 10) == 296)
		{
			lvl3dirocbst3 *= -1;
		}
	}

	cobs3lvl3 += lvl3dirocbst3;

	if (lvl3dirocbst4 == -1)
	{
		if (cobs4lvl3 == 172)
		{
			lvl3dirocbst4 *= -1;
		}
	}
	else
	{
		if ((cobs4lvl3 + 10) == 296)
		{
			lvl3dirocbst4 *= -1;
		}
	}

	cobs4lvl3 += lvl3dirocbst4;
}

void DrawElevator3(char screen[][300], int rowelevatorlvl3, int columnelevatorlvl3) {

	for (int i = 0; i < 15; i++) {
		screen[rowelevatorlvl3][columnelevatorlvl3] = 'x';
		columnelevatorlvl3++;
	}
}

void MoveElevator3(int& rowelevatorlvl3, int& columnelevatorlvl3, int& directionelevatorlvl3, int columnhero, int& rowhero) {
	int ct = 0;
	int pos1;
	if ((columnelevatorlvl3 + 7) == columnhero) {
		if (directionelevatorlvl3 == 1) {
			rowelevatorlvl3--;
			rowhero--;
			if (rowelevatorlvl3 == 9) {

				directionelevatorlvl3 *= -1;
				ct++;
			}
		}
		//else {
		//	rowhero++;
		//	if (rowelevatorlvl3 == 9) {
		//		
		//		directionelevatorlvl3 *= 1;
		//	}
		//}
		//rowelevatorlvl3 -= directionelevatorlvl3;
	}
	//if (ct == 1) {
	//	
	//}
}

void Drawobstacle2(char screen[][300], int robs1lvl2, int cobs1lvl2, int robs2lvl2, int cobs2lvl2, int robs3lvl2, int cobs3lvl2, int lvl2dirobs3) {

	for (int i = 0; i < 12; i++) {
		screen[robs1lvl2][cobs1lvl2] = 'x';
		cobs1lvl2++;
	}

	cobs1lvl2 += 5;

	//for (int i = 0; i < 12; i++) {
	//	screen[robs2lvl2][cobs2lvl2] = 'x';
	//	cobs2lvl2--;
	//}
	//cobs2lvl2 += 5;

	for (int i = 0; i < 12; i++) {
		screen[robs3lvl2][cobs3lvl2] = 'x';
		cobs3lvl2--;
	}
	cobs3lvl2 += 5;

}
void Obstcalemove2(int& robs1lvl2, int& cobs1lvl2, int& lvl2dirobs1, int& robs2lvl2, int& cobs2lvl2, int& lvl2dirobs2, int& robs3lvl2, int& cobs3lvl2, int& lvl2dirobs3) {
	//if (lvl2dirobs1 == -1)
	//{
	//	if (cobs1lvl2 == 0)
	//	{
	//		lvl2dirobs1 *= -1;
	//	}
	//}
	//else
	//{
	//	if ((cobs1lvl2 + 10) == 149)
	//	{
	//		lvl2dirobs1 *= -1;
	//	}
	//}
	//
	//cobs1lvl2 += lvl2dirobs1;


	//if (lvl2dirobs2 == 1)
	//{
	//	if ((cobs2lvl2) == 298)
	//	{
	//		lvl2dirobs2 *= -1;
	//	}
	//}
	//else
	//{
	//	if ((cobs2lvl2 - 10) == 151)
	//	{
	//		lvl2dirobs2 *= -1;
	//	}
	//}


	//cobs2lvl2 += lvl2dirobs2;
	//
	//if (lvl2dirobs3 == 1)
	//{
	//	if ((cobs3lvl2) == 149)
	//	{
	//		lvl2dirobs3 *= -1;
	//	}
	//}
	//else
	//{
	//	if ((cobs3lvl2 - 10) == 0)
	//	{
	//		lvl2dirobs3 *= -1;
	//	}
	//}
	//
	//cobs3lvl2 += lvl2dirobs3;
}
void DrawElevator(char screen[][300], int rowelevator, int columnelevator, int rowelevator2, int columnelevator2) {
	for (int i = 0; i < 15; i++) {
		screen[rowelevator][columnelevator] = 'x';
		columnelevator++;
	}


	for (int i = 0; i < 15; i++) {
		screen[rowelevator2][columnelevator2] = 'x';
		columnelevator2++;
	}
}
void MoveElevator(int& rowelevator, int& columnelevator, int& directionelevator, int& rowelevator2, int& columnelevator2, int& directionelevator2, int columnhero, int& rowhero) {
	int ct = 0;

	if ((columnelevator + 7) == columnhero) {
		if (directionelevator == 1) {
			rowelevator++;
			//rowhero++;
			if (rowelevator == 24) {
				rowhero = 15;
				directionelevator *= -1;
				ct++;
			}
		}
	}

	if ((columnelevator2 + 7) == columnhero) {
		if (directionelevator2 == 1) {
			if (rowelevator2 < 39) {

				rowelevator2++;
			}


		}
	}

	//if ((columnelevator + 7) == columnhero) {
	//	if (directionelevator == 1) {
	//		if (rowelevator == 12) {
	//			rowelevator++;
	//			rowhero++;
	//			if (rowelevator == 24) {
	//				ct++;
	//				directionelevator *= -1;
	//			}
	//		}
	//	}
	//	//else {
	//	//		rowhero--;
	//	//	if (rowelevator == 24) {
	//	//		directionelevator *= -1;
	//	//	}
	//	//}
	//	//rowelevator -= directionelevator;
	//}

	//if ((columnelevator2 + 7) == columnhero) {
	//	if (directionelevator2 == 1) {
	//		if (rowelevator2 == 24) {
	//			directionelevator2 *= -1;
	//		}
	//	}
	//	else {
	//		if (rowelevator2 == 39) {
	//			directionelevator2 *= -1;
	//		}
	//	}
	//	rowelevator2 -= directionelevator2;
	//}
}

void DrawHero(char screen[][300], int rowhero, int columnhero) {


	screen[rowhero][columnhero] = '.';
	screen[rowhero][columnhero + 1] = '_';
	screen[rowhero][columnhero - 1] = '_';
	screen[rowhero + 1][columnhero] = '"';
	screen[rowhero + 1][columnhero + 1] = '~';
	screen[rowhero + 1][columnhero - 1] = '~';
	screen[rowhero + 1][columnhero - 2] = '(';
	screen[rowhero + 1][columnhero + 2] = ')';
	screen[rowhero + 2][columnhero] = '_';
	screen[rowhero + 2][columnhero + 1] = '0';
	screen[rowhero + 2][columnhero - 1] = '0';
	screen[rowhero + 2][columnhero - 2] = '|';
	screen[rowhero + 2][columnhero + 2] = '|';
	screen[rowhero + 2][columnhero + 3] = ')';
	screen[rowhero + 2][columnhero - 3] = '(';
	screen[rowhero + 3][columnhero] = '=';

	screen[rowhero + 3][columnhero + 1] = '/';
	screen[rowhero + 3][columnhero + 2] = '.';
	screen[rowhero + 4][columnhero + 2] = '/';
	screen[rowhero + 4][columnhero] = '*';

	screen[rowhero + 5][columnhero + 2] = '\\';
	screen[rowhero + 6][columnhero + 2] = '/';
	screen[rowhero + 6][columnhero + 1] = '_';
	screen[rowhero + 6][columnhero - 1] = '_';
	screen[rowhero + 6][columnhero + 3] = '_';
	screen[rowhero + 7][columnhero + 4] = ')';
	screen[rowhero + 7][columnhero + 3] = '_';
	screen[rowhero + 7][columnhero + 2] = '_';
	screen[rowhero + 7][columnhero + 1] = '\\';
	screen[rowhero + 7][columnhero - 1] = '/';
	screen[rowhero + 7][columnhero - 2] = '_';
	screen[rowhero + 7][columnhero - 3] = '_';

	screen[rowhero + 6][columnhero + 3] = '_';

	screen[rowhero + 5][columnhero + 1] = '_';
	screen[rowhero + 5][columnhero] = '_';
	screen[rowhero + 5][columnhero - 1] = '_';

	screen[rowhero + 3][columnhero + 3] = '_';
	screen[rowhero + 4][columnhero + 5] = '\\';
	screen[rowhero + 4][columnhero + 3] = '\\';
	screen[rowhero + 5][columnhero + 5] = '}';
	screen[rowhero + 5][columnhero + 4] = '{';
	screen[rowhero + 3][columnhero + 4] = ',';

	screen[rowhero + 3][columnhero - 1] = '\\';
	screen[rowhero + 3][columnhero - 2] = '.';
	screen[rowhero + 4][columnhero - 2] = '\\';
	screen[rowhero + 5][columnhero - 2] = '/';
	screen[rowhero + 6][columnhero - 2] = '\\';
	screen[rowhero + 6][columnhero - 3] = '_';
	screen[rowhero + 7][columnhero - 4] = '(';
	screen[rowhero + 6][columnhero] = '|';

	screen[rowhero + 3][columnhero - 3] = '_';
	screen[rowhero + 4][columnhero - 3] = '/';
	screen[rowhero + 5][columnhero - 4] = '}';

	screen[rowhero + 4][columnhero - 5] = '/';
	screen[rowhero + 5][columnhero - 5] = '{';
	screen[rowhero + 3][columnhero - 4] = ',';




}

void Drawlvl2enemy1(char screen[][300], int& rowlvl2enemy1, int& columnlvl2enemy1) {



	screen[rowlvl2enemy1][columnlvl2enemy1] = '_';
	screen[rowlvl2enemy1][columnlvl2enemy1 + 1] = 'A';
	screen[rowlvl2enemy1][columnlvl2enemy1 - 1] = 'A';
	screen[rowlvl2enemy1 + 1][columnlvl2enemy1] = '"';
	screen[rowlvl2enemy1 + 1][columnlvl2enemy1 + 1] = '~';
	screen[rowlvl2enemy1 + 1][columnlvl2enemy1 - 1] = '~';
	screen[rowlvl2enemy1 + 1][columnlvl2enemy1 - 2] = '/';
	screen[rowlvl2enemy1 + 1][columnlvl2enemy1 + 2] = '\\';
	screen[rowlvl2enemy1 + 2][columnlvl2enemy1] = '_';
	screen[rowlvl2enemy1 + 2][columnlvl2enemy1 + 1] = 'o';
	screen[rowlvl2enemy1 + 2][columnlvl2enemy1 - 1] = 'o';
	screen[rowlvl2enemy1 + 2][columnlvl2enemy1 - 2] = '|';
	screen[rowlvl2enemy1 + 2][columnlvl2enemy1 + 2] = '|';
	screen[rowlvl2enemy1 + 2][columnlvl2enemy1 + 3] = ' ';
	screen[rowlvl2enemy1 + 2][columnlvl2enemy1 - 3] = ' ';
	screen[rowlvl2enemy1 + 3][columnlvl2enemy1] = '~';
	screen[rowlvl2enemy1 + 3][columnlvl2enemy1 + 1] = '/';
	screen[rowlvl2enemy1 + 3][columnlvl2enemy1 + 2] = '.';
	screen[rowlvl2enemy1 + 4][columnlvl2enemy1 + 3] = '/';
	screen[rowlvl2enemy1 + 4][columnlvl2enemy1] = '*';
	screen[rowlvl2enemy1 + 5][columnlvl2enemy1 + 2] = '|';
	screen[rowlvl2enemy1 + 6][columnlvl2enemy1 + 2] = '/';
	screen[rowlvl2enemy1 + 6][columnlvl2enemy1 + 1] = '_';
	screen[rowlvl2enemy1 + 6][columnlvl2enemy1 - 1] = '_';
	screen[rowlvl2enemy1 + 6][columnlvl2enemy1 + 3] = '_';
	screen[rowlvl2enemy1 + 7][columnlvl2enemy1 + 4] = ')';
	screen[rowlvl2enemy1 + 7][columnlvl2enemy1 + 3] = '_';
	screen[rowlvl2enemy1 + 7][columnlvl2enemy1 + 2] = '_';
	screen[rowlvl2enemy1 + 7][columnlvl2enemy1 + 1] = '\\';
	screen[rowlvl2enemy1 + 7][columnlvl2enemy1 - 1] = '/';
	screen[rowlvl2enemy1 + 7][columnlvl2enemy1 - 2] = '_';
	screen[rowlvl2enemy1 + 7][columnlvl2enemy1 - 3] = '_';
	screen[rowlvl2enemy1 + 6][columnlvl2enemy1 + 3] = '_';
	screen[rowlvl2enemy1 + 5][columnlvl2enemy1 + 1] = '_';
	screen[rowlvl2enemy1 + 5][columnlvl2enemy1] = '_';
	screen[rowlvl2enemy1 + 5][columnlvl2enemy1 - 1] = '_';
	screen[rowlvl2enemy1 + 3][columnlvl2enemy1 + 3] = '_';
	screen[rowlvl2enemy1 + 3][columnlvl2enemy1 + 4] = '/';
	screen[rowlvl2enemy1 + 3][columnlvl2enemy1 + 5] = '_';
	screen[rowlvl2enemy1 + 3][columnlvl2enemy1 + 6] = '/';
	screen[rowlvl2enemy1 + 2][columnlvl2enemy1 + 6] = '}';
	screen[rowlvl2enemy1 + 2][columnlvl2enemy1 + 5] = '{';
	screen[rowlvl2enemy1 + 4][columnlvl2enemy1 + 5] = ' ';
	screen[rowlvl2enemy1 + 4][columnlvl2enemy1 + 4] = ' ';
	screen[rowlvl2enemy1 + 3][columnlvl2enemy1 - 4] = '\\';
	screen[rowlvl2enemy1 + 3][columnlvl2enemy1 - 5] = '_';
	screen[rowlvl2enemy1 + 3][columnlvl2enemy1 - 6] = '\\';
	screen[rowlvl2enemy1 + 2][columnlvl2enemy1 - 6] = '{';
	screen[rowlvl2enemy1 + 2][columnlvl2enemy1 - 5] = '}';
	screen[rowlvl2enemy1 + 4][columnlvl2enemy1 - 5] = ' ';
	screen[rowlvl2enemy1 + 4][columnlvl2enemy1 - 4] = ' ';
	screen[rowlvl2enemy1 + 3][columnlvl2enemy1 - 1] = '\\';
	screen[rowlvl2enemy1 + 3][columnlvl2enemy1 - 2] = '.';
	screen[rowlvl2enemy1 + 4][columnlvl2enemy1 - 3] = '\\';
	screen[rowlvl2enemy1 + 5][columnlvl2enemy1 - 2] = '|';
	screen[rowlvl2enemy1 + 6][columnlvl2enemy1 - 2] = '\\';
	screen[rowlvl2enemy1 + 6][columnlvl2enemy1 - 3] = '_';
	screen[rowlvl2enemy1 + 7][columnlvl2enemy1 - 4] = '(';
	screen[rowlvl2enemy1 + 6][columnlvl2enemy1] = '|';
	screen[rowlvl2enemy1 + 3][columnlvl2enemy1 - 3] = '_';





}

void Drawlvl2enemy2(char screen[][300], int& rowlvl2enemy2, int& columnlvl2enemy2) {



	screen[rowlvl2enemy2][columnlvl2enemy2] = '_';
	screen[rowlvl2enemy2][columnlvl2enemy2 + 1] = 'A';
	screen[rowlvl2enemy2][columnlvl2enemy2 - 1] = 'A';
	screen[rowlvl2enemy2 + 1][columnlvl2enemy2] = '"';
	screen[rowlvl2enemy2 + 1][columnlvl2enemy2 + 1] = '~';
	screen[rowlvl2enemy2 + 1][columnlvl2enemy2 - 1] = '~';
	screen[rowlvl2enemy2 + 1][columnlvl2enemy2 - 2] = '/';
	screen[rowlvl2enemy2 + 1][columnlvl2enemy2 + 2] = '\\';
	screen[rowlvl2enemy2 + 2][columnlvl2enemy2] = '_';
	screen[rowlvl2enemy2 + 2][columnlvl2enemy2 + 1] = 'o';
	screen[rowlvl2enemy2 + 2][columnlvl2enemy2 - 1] = 'o';
	screen[rowlvl2enemy2 + 2][columnlvl2enemy2 - 2] = '|';
	screen[rowlvl2enemy2 + 2][columnlvl2enemy2 + 2] = '|';
	screen[rowlvl2enemy2 + 2][columnlvl2enemy2 + 3] = ' ';
	screen[rowlvl2enemy2 + 2][columnlvl2enemy2 - 3] = ' ';
	screen[rowlvl2enemy2 + 3][columnlvl2enemy2] = '~';
	screen[rowlvl2enemy2 + 3][columnlvl2enemy2 + 1] = '/';
	screen[rowlvl2enemy2 + 3][columnlvl2enemy2 + 2] = '.';
	screen[rowlvl2enemy2 + 4][columnlvl2enemy2 + 3] = '/';
	screen[rowlvl2enemy2 + 4][columnlvl2enemy2] = '*';
	screen[rowlvl2enemy2 + 5][columnlvl2enemy2 + 2] = '|';
	screen[rowlvl2enemy2 + 6][columnlvl2enemy2 + 2] = '/';
	screen[rowlvl2enemy2 + 6][columnlvl2enemy2 + 1] = '_';
	screen[rowlvl2enemy2 + 6][columnlvl2enemy2 - 1] = '_';
	screen[rowlvl2enemy2 + 6][columnlvl2enemy2 + 3] = '_';
	screen[rowlvl2enemy2 + 7][columnlvl2enemy2 + 4] = ')';
	screen[rowlvl2enemy2 + 7][columnlvl2enemy2 + 3] = '_';
	screen[rowlvl2enemy2 + 7][columnlvl2enemy2 + 2] = '_';
	screen[rowlvl2enemy2 + 7][columnlvl2enemy2 + 1] = '\\';
	screen[rowlvl2enemy2 + 7][columnlvl2enemy2 - 1] = '/';
	screen[rowlvl2enemy2 + 7][columnlvl2enemy2 - 2] = '_';
	screen[rowlvl2enemy2 + 7][columnlvl2enemy2 - 3] = '_';
	screen[rowlvl2enemy2 + 6][columnlvl2enemy2 + 3] = '_';
	screen[rowlvl2enemy2 + 5][columnlvl2enemy2 + 1] = '_';
	screen[rowlvl2enemy2 + 5][columnlvl2enemy2] = '_';
	screen[rowlvl2enemy2 + 5][columnlvl2enemy2 - 1] = '_';
	screen[rowlvl2enemy2 + 3][columnlvl2enemy2 + 3] = '_';
	screen[rowlvl2enemy2 + 3][columnlvl2enemy2 + 4] = '/';
	screen[rowlvl2enemy2 + 3][columnlvl2enemy2 + 5] = '_';
	screen[rowlvl2enemy2 + 3][columnlvl2enemy2 + 6] = '/';
	screen[rowlvl2enemy2 + 2][columnlvl2enemy2 + 6] = '}';
	screen[rowlvl2enemy2 + 2][columnlvl2enemy2 + 5] = '{';
	screen[rowlvl2enemy2 + 4][columnlvl2enemy2 + 5] = ' ';
	screen[rowlvl2enemy2 + 4][columnlvl2enemy2 + 4] = ' ';
	screen[rowlvl2enemy2 + 3][columnlvl2enemy2 - 4] = '\\';
	screen[rowlvl2enemy2 + 3][columnlvl2enemy2 - 5] = '_';
	screen[rowlvl2enemy2 + 3][columnlvl2enemy2 - 6] = '\\';
	screen[rowlvl2enemy2 + 2][columnlvl2enemy2 - 6] = '{';
	screen[rowlvl2enemy2 + 2][columnlvl2enemy2 - 5] = '}';
	screen[rowlvl2enemy2 + 4][columnlvl2enemy2 - 5] = ' ';
	screen[rowlvl2enemy2 + 4][columnlvl2enemy2 - 4] = ' ';
	screen[rowlvl2enemy2 + 3][columnlvl2enemy2 - 1] = '\\';
	screen[rowlvl2enemy2 + 3][columnlvl2enemy2 - 2] = '.';
	screen[rowlvl2enemy2 + 4][columnlvl2enemy2 - 3] = '\\';
	screen[rowlvl2enemy2 + 5][columnlvl2enemy2 - 2] = '|';
	screen[rowlvl2enemy2 + 6][columnlvl2enemy2 - 2] = '\\';
	screen[rowlvl2enemy2 + 6][columnlvl2enemy2 - 3] = '_';
	screen[rowlvl2enemy2 + 7][columnlvl2enemy2 - 4] = '(';
	screen[rowlvl2enemy2 + 6][columnlvl2enemy2] = '|';
	screen[rowlvl2enemy2 + 3][columnlvl2enemy2 - 3] = '_';





}

void Drawlvl1enemy(char screen[][300], int& rowlvl1enemy, int& columnlvl1enemy) {



	screen[rowlvl1enemy][columnlvl1enemy] = '_';
	screen[rowlvl1enemy][columnlvl1enemy + 1] = 'A';
	screen[rowlvl1enemy][columnlvl1enemy - 1] = 'A';
	screen[rowlvl1enemy + 1][columnlvl1enemy] = '"';
	screen[rowlvl1enemy + 1][columnlvl1enemy + 1] = '~';
	screen[rowlvl1enemy + 1][columnlvl1enemy - 1] = '~';
	screen[rowlvl1enemy + 1][columnlvl1enemy - 2] = '/';
	screen[rowlvl1enemy + 1][columnlvl1enemy + 2] = '\\';
	screen[rowlvl1enemy + 2][columnlvl1enemy] = '_';
	screen[rowlvl1enemy + 2][columnlvl1enemy + 1] = 'o';
	screen[rowlvl1enemy + 2][columnlvl1enemy - 1] = 'o';
	screen[rowlvl1enemy + 2][columnlvl1enemy - 2] = '|';
	screen[rowlvl1enemy + 2][columnlvl1enemy + 2] = '|';
	screen[rowlvl1enemy + 2][columnlvl1enemy + 3] = ' ';
	screen[rowlvl1enemy + 2][columnlvl1enemy - 3] = ' ';
	screen[rowlvl1enemy + 3][columnlvl1enemy] = '~';
	screen[rowlvl1enemy + 3][columnlvl1enemy + 1] = '/';
	screen[rowlvl1enemy + 3][columnlvl1enemy + 2] = '.';
	screen[rowlvl1enemy + 4][columnlvl1enemy + 3] = '/';
	screen[rowlvl1enemy + 4][columnlvl1enemy] = '*';
	screen[rowlvl1enemy + 5][columnlvl1enemy + 2] = '|';
	screen[rowlvl1enemy + 6][columnlvl1enemy + 2] = '/';
	screen[rowlvl1enemy + 6][columnlvl1enemy + 1] = '_';
	screen[rowlvl1enemy + 6][columnlvl1enemy - 1] = '_';
	screen[rowlvl1enemy + 6][columnlvl1enemy + 3] = '_';
	screen[rowlvl1enemy + 7][columnlvl1enemy + 4] = ')';
	screen[rowlvl1enemy + 7][columnlvl1enemy + 3] = '_';
	screen[rowlvl1enemy + 7][columnlvl1enemy + 2] = '_';
	screen[rowlvl1enemy + 7][columnlvl1enemy + 1] = '\\';
	screen[rowlvl1enemy + 7][columnlvl1enemy - 1] = '/';
	screen[rowlvl1enemy + 7][columnlvl1enemy - 2] = '_';
	screen[rowlvl1enemy + 7][columnlvl1enemy - 3] = '_';
	screen[rowlvl1enemy + 6][columnlvl1enemy + 3] = '_';
	screen[rowlvl1enemy + 5][columnlvl1enemy + 1] = '_';
	screen[rowlvl1enemy + 5][columnlvl1enemy] = '_';
	screen[rowlvl1enemy + 5][columnlvl1enemy - 1] = '_';
	screen[rowlvl1enemy + 3][columnlvl1enemy + 3] = '_';
	screen[rowlvl1enemy + 3][columnlvl1enemy + 4] = '/';
	screen[rowlvl1enemy + 3][columnlvl1enemy + 5] = '_';
	screen[rowlvl1enemy + 3][columnlvl1enemy + 6] = '/';
	screen[rowlvl1enemy + 2][columnlvl1enemy + 6] = '}';
	screen[rowlvl1enemy + 2][columnlvl1enemy + 5] = '{';
	screen[rowlvl1enemy + 4][columnlvl1enemy + 5] = ' ';
	screen[rowlvl1enemy + 4][columnlvl1enemy + 4] = ' ';
	screen[rowlvl1enemy + 3][columnlvl1enemy - 4] = '\\';
	screen[rowlvl1enemy + 3][columnlvl1enemy - 5] = '_';
	screen[rowlvl1enemy + 3][columnlvl1enemy - 6] = '\\';
	screen[rowlvl1enemy + 2][columnlvl1enemy - 6] = '{';
	screen[rowlvl1enemy + 2][columnlvl1enemy - 5] = '}';
	screen[rowlvl1enemy + 4][columnlvl1enemy - 5] = ' ';
	screen[rowlvl1enemy + 4][columnlvl1enemy - 4] = ' ';
	screen[rowlvl1enemy + 3][columnlvl1enemy - 1] = '\\';
	screen[rowlvl1enemy + 3][columnlvl1enemy - 2] = '.';
	screen[rowlvl1enemy + 4][columnlvl1enemy - 3] = '\\';
	screen[rowlvl1enemy + 5][columnlvl1enemy - 2] = '|';
	screen[rowlvl1enemy + 6][columnlvl1enemy - 2] = '\\';
	screen[rowlvl1enemy + 6][columnlvl1enemy - 3] = '_';
	screen[rowlvl1enemy + 7][columnlvl1enemy - 4] = '(';
	screen[rowlvl1enemy + 6][columnlvl1enemy] = '|';
	screen[rowlvl1enemy + 3][columnlvl1enemy - 3] = '_';





}

void Drawlvl3enemy2(char screen[][300], int& rowlvl3enemy1, int& columnlvl3enemy1) {



	screen[rowlvl3enemy1][columnlvl3enemy1] = '_';
	screen[rowlvl3enemy1][columnlvl3enemy1 + 1] = 'A';
	screen[rowlvl3enemy1][columnlvl3enemy1 - 1] = 'A';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1] = '"';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 1] = '~';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 1] = '~';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 2] = '/';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 2] = '\\';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1] = '_';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 1] = 'o';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 1] = 'o';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 2] = '|';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 2] = '|';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 3] = ' ';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 3] = ' ';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1] = '~';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 1] = '/';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 2] = '.';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 3] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1] = '*';
	screen[rowlvl3enemy1 + 5][columnlvl3enemy1 + 2] = '|';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1 + 2] = '/';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1 + 1] = '_';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1 - 1] = '_';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1 + 3] = '_';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 + 4] = ')';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 + 3] = '_';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 + 2] = '_';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 + 1] = '\\';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 - 1] = '/';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 - 2] = '_';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 - 3] = '_';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1 + 3] = '_';
	screen[rowlvl3enemy1 + 5][columnlvl3enemy1 + 1] = '_';
	screen[rowlvl3enemy1 + 5][columnlvl3enemy1] = '_';
	screen[rowlvl3enemy1 + 5][columnlvl3enemy1 - 1] = '_';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 3] = '_';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 5] = '_';




	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 4] = '/';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 5] = '/';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 6] = ')';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 5] = '\\';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 4] = '\\';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 4] = '_';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 5] = '_';

	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 6] = '/';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 7] = '/';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 8] = ')';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 7] = '\\';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 6] = '\\';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 6] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 7] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 8] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 9] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 10] = '_';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 11] = '_';

	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 12] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 13] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 10] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 11] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 8] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 9] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 7] = '^';


	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 14] = '^';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 15] = '^';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 12] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 13] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 11] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 10] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 8] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 9] = '*';

	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 16] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 17] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 14] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 15] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 12] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 13] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 10] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 11] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 9] = '^';




	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 17] = '^';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 18] = '^';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 15] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 16] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 13] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 14] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 8] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 9] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 10] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 11] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 12] = '*';



	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 18] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 17] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 15] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 16] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 13] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 14] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 11] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 12] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 7] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 8] = '^';



	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 18] = '^';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 17] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 16] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 15] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 14] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 13] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 12] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 11] = '\\';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 10] = '\\';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 9] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 8] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 7] = '\\';








	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 4] = '\\';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 5] = '\\';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 6] = '(';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 5] = '/';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 4] = '/';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 4] = '_';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 5] = '_';

	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 6] = '\\';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 7] = '\\';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 8] = '(';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 7] = '/';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 6] = '/';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 6] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 7] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 8] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 9] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 10] = '_';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 11] = '_';

	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 12] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 13] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 11] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 10] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 8] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 9] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 7] = '^';


	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 14] = '^';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 15] = '^';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 12] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 13] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 11] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 10] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 8] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 9] = '*';


	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 16] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 17] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 14] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 15] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 12] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 13] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 11] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 10] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 9] = '^';




	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 17] = '^';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 18] = '^';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 16] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 15] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 14] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 13] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 12] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 11] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 10] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 9] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 8] = '*';








	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 18] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 17] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 16] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 15] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 14] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 13] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 12] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 11] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 7] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 8] = '^';



	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 18] = '^';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 17] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 16] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 15] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 14] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 13] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 12] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 11] = '/';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 10] = '/';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 9] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 8] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 7] = '/';







	//screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 6] = ' ';
	//screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 5] = ' ';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 5] = ' ';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 4] = ' ';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 4] = '\\';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 5] = '_';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 6] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 5] = ' ';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 4] = ' ';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 1] = '\\';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 2] = '.';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 3] = '\\';
	screen[rowlvl3enemy1 + 5][columnlvl3enemy1 - 2] = '|';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1 - 2] = '\\';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1 - 3] = '_';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 - 4] = '(';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1] = '|';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 3] = '_';





}

void Drawlvl3enemy1(char screen[][300], int& rowlvl3enemy2, int& columnlvl3enemy2) {



	screen[rowlvl3enemy2][columnlvl3enemy2] = '_';
	screen[rowlvl3enemy2][columnlvl3enemy2 + 1] = 'A';
	screen[rowlvl3enemy2][columnlvl3enemy2 - 1] = 'A';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2] = '"';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 + 1] = '~';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 - 1] = '~';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 - 2] = '/';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 + 2] = '\\';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2] = '_';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 + 1] = 'o';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 - 1] = 'o';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 - 2] = '|';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 + 2] = '|';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 + 3] = ' ';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 - 3] = ' ';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2] = '~';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 1] = '/';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 2] = '.';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 3] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2] = '*';
	screen[rowlvl3enemy2 + 5][columnlvl3enemy2 + 2] = '|';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2 + 2] = '/';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2 + 1] = '_';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2 - 1] = '_';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2 + 3] = '_';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 + 4] = ')';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 + 3] = '_';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 + 2] = '_';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 + 1] = '\\';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 - 1] = '/';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 - 2] = '_';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 - 3] = '_';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2 + 3] = '_';
	screen[rowlvl3enemy2 + 5][columnlvl3enemy2 + 1] = '_';
	screen[rowlvl3enemy2 + 5][columnlvl3enemy2] = '_';
	screen[rowlvl3enemy2 + 5][columnlvl3enemy2 - 1] = '_';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 3] = '_';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 5] = '_';




	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 4] = '/';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 + 5] = '/';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 + 6] = ')';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 + 5] = '\\';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 + 4] = '\\';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 4] = '_';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 5] = '_';

	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 6] = '/';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 + 7] = '/';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 + 8] = ')';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 + 7] = '\\';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 + 6] = '\\';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 6] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 7] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 8] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 9] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 10] = '_';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 11] = '_';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 + 12] = '^';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 + 13] = '^';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 + 14] = '^';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 + 15] = '^';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 + 16] = '^';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 + 17] = '^';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 + 17] = '^';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 + 18] = '^';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 18] = '^';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 17] = '^';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 18] = '^';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 17] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 16] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 15] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 14] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 13] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 12] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 11] = '\\';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 10] = '\\';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 9] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 8] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 7] = '\\';








	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 4] = '\\';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 - 5] = '\\';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 - 6] = '(';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 - 5] = '/';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 - 4] = '/';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 4] = '_';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 5] = '_';

	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 6] = '\\';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 - 7] = '\\';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 - 8] = '(';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 - 7] = '/';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 - 6] = '/';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 6] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 7] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 8] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 9] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 10] = '_';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 11] = '_';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 - 12] = '^';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 - 13] = '^';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 - 14] = '^';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 - 15] = '^';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 - 16] = '^';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 - 17] = '^';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 - 17] = '^';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 - 18] = '^';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 18] = '^';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 17] = '^';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 18] = '^';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 17] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 16] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 15] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 14] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 13] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 12] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 11] = '/';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 10] = '/';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 9] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 8] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 7] = '/';







	//screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 6] = ' ';
	//screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 5] = ' ';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 5] = ' ';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 4] = ' ';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 4] = '\\';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 5] = '_';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 6] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 5] = ' ';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 4] = ' ';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 1] = '\\';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 2] = '.';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 3] = '\\';
	screen[rowlvl3enemy2 + 5][columnlvl3enemy2 - 2] = '|';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2 - 2] = '\\';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2 - 3] = '_';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 - 4] = '(';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2] = '|';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 3] = '_';





}

void Drawlvl3enemy3(char screen[][300], int& rowlvl3enemy3, int& columnlvl3enemy3) {



	screen[rowlvl3enemy3][columnlvl3enemy3] = '_';
	screen[rowlvl3enemy3][columnlvl3enemy3 + 1] = 'A';
	screen[rowlvl3enemy3][columnlvl3enemy3 - 1] = 'A';
	screen[rowlvl3enemy3 + 1][columnlvl3enemy3] = '"';
	screen[rowlvl3enemy3 + 1][columnlvl3enemy3 + 1] = '~';
	screen[rowlvl3enemy3 + 1][columnlvl3enemy3 - 1] = '~';
	screen[rowlvl3enemy3 + 1][columnlvl3enemy3 - 2] = '/';
	screen[rowlvl3enemy3 + 1][columnlvl3enemy3 + 2] = '\\';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3] = '_';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 + 1] = 'o';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 - 1] = 'o';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 - 2] = '|';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 + 2] = '|';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 + 3] = ' ';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 - 3] = ' ';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3] = '~';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 + 1] = '/';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 + 2] = '.';
	screen[rowlvl3enemy3 + 4][columnlvl3enemy3 + 3] = '/';
	screen[rowlvl3enemy3 + 4][columnlvl3enemy3] = '*';
	screen[rowlvl3enemy3 + 5][columnlvl3enemy3 + 2] = '|';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3 + 2] = '/';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3 + 1] = '_';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3 - 1] = '_';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3 + 3] = '_';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 + 4] = ')';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 + 3] = '_';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 + 2] = '_';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 + 1] = '\\';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 - 1] = '/';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 - 2] = '_';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 - 3] = '_';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3 + 3] = '_';
	screen[rowlvl3enemy3 + 5][columnlvl3enemy3 + 1] = '_';
	screen[rowlvl3enemy3 + 5][columnlvl3enemy3] = '_';
	screen[rowlvl3enemy3 + 5][columnlvl3enemy3 - 1] = '_';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 + 3] = '_';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 + 4] = '/';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 + 5] = '_';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 + 6] = '/';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 + 6] = '}';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 + 5] = '{';
	screen[rowlvl3enemy3 + 4][columnlvl3enemy3 + 5] = ' ';
	screen[rowlvl3enemy3 + 4][columnlvl3enemy3 + 4] = ' ';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 - 4] = '\\';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 - 5] = '_';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 - 6] = '\\';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 - 6] = '{';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 - 5] = '}';
	screen[rowlvl3enemy3 + 4][columnlvl3enemy3 - 5] = ' ';
	screen[rowlvl3enemy3 + 4][columnlvl3enemy3 - 4] = ' ';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 - 1] = '\\';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 - 2] = '.';
	screen[rowlvl3enemy3 + 4][columnlvl3enemy3 - 3] = '\\';
	screen[rowlvl3enemy3 + 5][columnlvl3enemy3 - 2] = '|';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3 - 2] = '\\';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3 - 3] = '_';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 - 4] = '(';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3] = '|';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 - 3] = '_';





}

void Drawlvl3enemy4(char screen[][300], int& rowlvl3enemy4, int& columnlvl3enemy4) {



	screen[rowlvl3enemy4][columnlvl3enemy4] = '_';
	screen[rowlvl3enemy4][columnlvl3enemy4 + 1] = 'A';
	screen[rowlvl3enemy4][columnlvl3enemy4 - 1] = 'A';
	screen[rowlvl3enemy4 + 1][columnlvl3enemy4] = '"';
	screen[rowlvl3enemy4 + 1][columnlvl3enemy4 + 1] = '~';
	screen[rowlvl3enemy4 + 1][columnlvl3enemy4 - 1] = '~';
	screen[rowlvl3enemy4 + 1][columnlvl3enemy4 - 2] = '/';
	screen[rowlvl3enemy4 + 1][columnlvl3enemy4 + 2] = '\\';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4] = '_';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 + 1] = 'o';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 - 1] = 'o';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 - 2] = '|';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 + 2] = '|';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 + 3] = ' ';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 - 3] = ' ';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4] = '~';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 + 1] = '/';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 + 2] = '.';
	screen[rowlvl3enemy4 + 4][columnlvl3enemy4 + 3] = '/';
	screen[rowlvl3enemy4 + 4][columnlvl3enemy4] = '*';
	screen[rowlvl3enemy4 + 5][columnlvl3enemy4 + 2] = '|';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4 + 2] = '/';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4 + 1] = '_';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4 - 1] = '_';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4 + 3] = '_';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 + 4] = ')';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 + 3] = '_';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 + 2] = '_';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 + 1] = '\\';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 - 1] = '/';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 - 2] = '_';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 - 3] = '_';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4 + 3] = '_';
	screen[rowlvl3enemy4 + 5][columnlvl3enemy4 + 1] = '_';
	screen[rowlvl3enemy4 + 5][columnlvl3enemy4] = '_';
	screen[rowlvl3enemy4 + 5][columnlvl3enemy4 - 1] = '_';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 + 3] = '_';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 + 4] = '/';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 + 5] = '_';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 + 6] = '/';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 + 6] = '}';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 + 5] = '{';
	screen[rowlvl3enemy4 + 4][columnlvl3enemy4 + 5] = ' ';
	screen[rowlvl3enemy4 + 4][columnlvl3enemy4 + 4] = ' ';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 - 4] = '\\';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 - 5] = '_';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 - 6] = '\\';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 - 6] = '{';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 - 5] = '}';
	screen[rowlvl3enemy4 + 4][columnlvl3enemy4 - 5] = ' ';
	screen[rowlvl3enemy4 + 4][columnlvl3enemy4 - 4] = ' ';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 - 1] = '\\';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 - 2] = '.';
	screen[rowlvl3enemy4 + 4][columnlvl3enemy4 - 3] = '\\';
	screen[rowlvl3enemy4 + 5][columnlvl3enemy4 - 2] = '|';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4 - 2] = '\\';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4 - 3] = '_';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 - 4] = '(';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4] = '|';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 - 3] = '_';





}


void Moveenemy1(int& rowlvl1enemy, int& columnlvl1enemy, int& rowhero, int& columnhero, int& directionenemy1, char screen[][300], int& playerhealth) {

	if (directionenemy1 == 1) {
		if (columnlvl1enemy == 40) {
			directionenemy1 *= -1;
		}
	}
	else {
		if (columnlvl1enemy == 120) {
			directionenemy1 *= -1;
		}
	}
	columnlvl1enemy -= directionenemy1;

	if (columnhero == columnlvl1enemy && rowhero < 10) {
		playerhealth--;
	}
}


void Moveenemy(int& rowlvl2enemy, int& columnlvl2enemy, int& rowhero, int& columnhero, char screen[][300], int& playerhealth, int& directionenemy1lvl2) {
	int ct = 0;

	if (columnhero >= 80) {
		if (directionenemy1lvl2 == 1) {
			if (columnlvl2enemy == 80) {
				directionenemy1lvl2 *= -1;
			}
		}
		else {
			if (columnlvl2enemy == 175) {
				directionenemy1lvl2 *= -1;
			}
		}
		columnlvl2enemy -= directionenemy1lvl2;
	}

	if (columnhero == columnlvl2enemy) {
		playerhealth--;
	}

}

void Moveenemy2(int& rowlvl2enemy2, int& columnlvl2enemy2, int& rowhero, int& columnhero, char screen[][300], int& playerhealth, int& directionenemy2lvl2) {
	int ct = 0;

	if (columnhero >= 180 && rowhero == rowlvl2enemy2) {
		if (directionenemy2lvl2 == 1) {
			if (columnlvl2enemy2 == 180) {
				directionenemy2lvl2 *= -1;
			}
		}
		else {
			if (columnlvl2enemy2 == 250) {
				directionenemy2lvl2 *= -1;
			}
		}
		columnlvl2enemy2 -= directionenemy2lvl2;
	}

	if (columnhero == columnlvl2enemy2) {
		playerhealth--;
	}

}

void Moveenemy3(int& rowlvl3enemy3, int& columnlvl3enemy3, int& rowhero, int& columnhero, int& directionenemy3lvl3, char screen[][300], int& playerhealth) {

	if (columnhero >= 15 && rowlvl3enemy3 == rowhero) {
		if (directionenemy3lvl3 == 1) {
			if (columnlvl3enemy3 == 15) {
				directionenemy3lvl3 *= -1;
			}
		}
		else {
			if (columnlvl3enemy3 == 135) {
				directionenemy3lvl3 *= -1;
			}
		}
		columnlvl3enemy3 -= directionenemy3lvl3;
	}

	if (columnhero == columnlvl3enemy3) {
		playerhealth--;
	}

}

void Moveenemy4(int& rowlvl3enemy4, int& columnlvl2enemy4, int& rowhero, int& columnhero, int& directionenemy4lvl3, char screen[][300], int& playerhealth) {

	if (columnhero <= 285 && rowlvl3enemy4 == rowhero) {
		if (directionenemy4lvl3 == -1) {
			if (columnlvl2enemy4 == 265) {
				directionenemy4lvl3 *= -1;
			}
		}
		else {
			if (columnlvl2enemy4 == 170) {
				directionenemy4lvl3 *= -1;
			}
		}
		columnlvl2enemy4 -= directionenemy4lvl3;
	}

	if (columnhero == columnlvl2enemy4) {
		playerhealth--;
	}

}

void MoveHero1(int& ctofjump, int& airborne, int& lvl1enemyhealth, int& lvl2enemy1health, int& lvl2enemy2health, int& singlebullet, int& rowbullet, int& columnbullet, int& playerhealth, int& rowhero, int& columnhero, int& rvrsjump, int& TOGGLEGRAVITY, int& ctofgravity, char UserMove, int& rows, int& columns, int& JUMP, int& JUMPRIGHT, int& JUMPLEFT, char screen[][300], int& level) {

	//LEVEL 1 ONLY!!!!!!

	int ct1 = 0;
	int ct2 = 0;
	int ctj = 0;

	if (UserMove == 'c') {

		if (level == 1) {
			playerhealth = 5;
			lvl1enemyhealth = 5;
			lvl2enemy1health = 5;
			lvl2enemy2health = 5;
			level = 1;
			rowhero = 31;
			columnhero = 12;
			rows = 40;
			columns = 150;
		}
		else if (level == 2) {
			playerhealth = 5;
			lvl2enemy1health = 5;
			lvl2enemy2health = 5;
			rowhero = 31;
			columnhero = 12;

		}

	}


	if (UserMove == 'R') {

		playerhealth = 5;
		lvl1enemyhealth = 5;
		lvl2enemy1health = 5;
		lvl2enemy2health = 5;
		level = 1;
		rowhero = 31;
		columnhero = 12;
		rows = 40;
		columns = 150;

	}

	if (UserMove == 'l') {

		if (singlebullet == 0) {

			columnbullet = columnhero + 6;
			rowbullet = rowhero + 5;
		}
		singlebullet = 1;

	}


	if (UserMove == 'w' && rowhero < 16 && rowhero > 0 && columnhero > 28 && columnhero < 35) {
		if (rowhero > 0) {
			rowhero--;
			JUMP = 0;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;
			TOGGLEGRAVITY = 0;
		}

	}
	if (UserMove == 'd') {
		if (screen[rowhero][columnhero + 2] == ' ' && screen[rowhero + 1][columnhero + 3] == ' ' && screen[rowhero + 2][columnhero + 4] == ' ' && screen[rowhero + 3][columnhero + 5] == ' ' && screen[rowhero + 4][columnhero + 6] == ' ' && screen[rowhero + 5][columnhero + 6] == ' ' && screen[rowhero + 6][columnhero + 4] == ' ' && screen[rowhero + 7][columnhero + 5] == ' ') {
			if (columnhero < 146) {
				columnhero++;
				ct1++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				ctofgravity = 0;
				rvrsjump = 0;
				TOGGLEGRAVITY = 1;
			}
		}
		else if (JUMP == 1 || JUMPRIGHT == 1 || JUMPLEFT == 1 || airborne == 1) {
			if (columnhero < 146) {
				columnhero++;
				ct1++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				ctofgravity = 0;
				rvrsjump = 0;
				TOGGLEGRAVITY = 1;
			}
		}
	}
	if (UserMove == 'a') {

		if (screen[rowhero][columnhero - 2] == ' ' && screen[rowhero + 1][columnhero - 3] == ' ' && screen[rowhero + 2][columnhero - 4] == ' ' && screen[rowhero + 3][columnhero - 5] == ' ' && screen[rowhero + 4][columnhero - 6] == ' ' && screen[rowhero + 5][columnhero - 6] == ' ' && screen[rowhero + 6][columnhero - 4] == ' ' && screen[rowhero + 7][columnhero - 5] == ' ') {
			if (columnhero > 3) {
				columnhero--;
				ct2++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

			}
		}
		else if (JUMP == 1 || JUMPRIGHT == 1 || JUMPLEFT == 1 || airborne == 1) {
			if (columnhero > 3) {
				columnhero--;
				ct2++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

			}
		}
		else if (level == 1 && rowhero < 20) {
			columnhero--;
			ct2++;
			JUMP = 0;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;
			rvrsjump = 0;
			ctofgravity = 0;
			TOGGLEGRAVITY = 1;
		}
	}
	if (columnhero + 6 >= 138 && rowhero < 6) {
		level = 2;
		rowhero = 31;
		columnhero = 12;
	}
	if (ct1 == 5) {
		rows++;
	}
	if (ct2 == 5) {
		rows--;
	}
}
void MoveHero2(int& lcond, int& airborne, int& lvl1enemyhealth, int& lvl2enemy1health, int& lvl2enemy2health, int& playerhealth, int& rowbullet, int& columnbullet, int& singlebullet, int& rowhero, int& columnhero, int& rvrsjump, int& TOGGLEGRAVITY, int& ctofgravity, char UserMove, int& rows, int& columns, int& JUMP, int& JUMPRIGHT, int& JUMPLEFT, int& scrollcolumn, char screen[][300], int& level, int& C, int& column2, int& F) {

	int ct1 = 0;
	int ct2 = 0;
	int ctj = 0;
	int column = columnhero - 5;
	//int column2 = columnhero + 5;
	int A = 0;


	if (UserMove == 'c') {

		if (level == 1) {
			playerhealth = 5;
			lvl1enemyhealth = 5;
			lvl2enemy1health = 5;
			lvl2enemy2health = 5;
			level = 1;
			rowhero = 31;
			columnhero = 12;
			rows = 40;
			columns = 150;
		}
		else if (level == 2) {
			playerhealth = 5;
			lvl2enemy1health = 5;
			lvl2enemy2health = 5;
			rowhero = 31;
			columnhero = 12;

		}

	}



	if (UserMove == 'R') {

		playerhealth = 5;
		lvl1enemyhealth = 5;
		lvl2enemy1health = 5;
		lvl2enemy2health = 5;
		level = 1;
		rowhero = 31;
		columnhero = 12;
		rows = 40;
		columns = 150;


	}

	if (UserMove == 'l') {

		if (singlebullet == 0) {

			columnbullet = columnhero + 6;
			rowbullet = rowhero + 5;
		}
		singlebullet = 1;

	}

	if (UserMove == 'w' && rowhero < 11 && rowhero > 2) {
		if (rowhero > 0) {
			rowhero--;
			JUMP = 0;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;
			TOGGLEGRAVITY = 0;
		}

	}
	if (UserMove == 'd') {


		if (screen[rowhero][columnhero + 2] == ' ' && screen[rowhero + 1][columnhero + 3] == ' ' && screen[rowhero + 2][columnhero + 4] == ' ' && screen[rowhero + 3][columnhero + 5] == ' ' && screen[rowhero + 4][columnhero + 6] == ' ' && screen[rowhero + 5][columnhero + 6] == ' ' && screen[rowhero + 6][columnhero + 4] == ' ' && screen[rowhero + 7][columnhero + 5] == ' ') {
			if (column2 < 297 && columnhero < 296) {
				columnhero++;
				ct1++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

				//scroll:
				if (columns < 300) {
					columns += 1;
				}

				F++;
			}
		}
		else if (JUMP == 1 || JUMPRIGHT == 1 || JUMPLEFT == 1 || airborne == 1) {
			if (column2 < 297 && columnhero < 296) {
				columnhero++;
				ct1++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

				//scroll:
				if (columns < 300) {
					columns += 1;
				}

				F++;
			}
		}
	}
	if (UserMove == 'a') {

		if (screen[rowhero][columnhero - 2] == ' ' && screen[rowhero + 1][columnhero - 3] == ' ' && screen[rowhero + 2][columnhero - 4] == ' ' && screen[rowhero + 3][columnhero - 5] == ' ' && screen[rowhero + 4][columnhero - 6] == ' ' && screen[rowhero + 5][columnhero - 6] == ' ' && screen[rowhero + 6][columnhero - 4] == ' ' && screen[rowhero + 7][columnhero - 5] == ' ') {
			if (columnhero > 3) {
				columnhero--;
				ct2++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

				if (columns > 149) {
					columns -= 1;
				}
			}

		}
		else if (JUMP == 1 || JUMPRIGHT == 1 || JUMPLEFT == 1 || airborne == 1) {
			if (columnhero > 3) {
				columnhero--;
				ct2++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

				if (columns > 149) {
					columns -= 1;
				}
			}
		}
	}


	if (rowhero == 31 && columnhero == 186) {
		level = 3;
		rowhero = 31;
		columnhero = 150;
		lcond = 1;
	}



	if (ct1 == 5) {
		rows++;

	}
	if (ct2 == 5) {
		rows--;
	}
}

void MoveHero3(int& ctofjump, int& lcond, int& bulletdirection, int& airborne, int& lvl1enemyhealth, int& lvl2enemy1health, int& lvl2enemy2health, int& playerhealth, int& rowbullet, int& columnbullet, int& singlebullet, int& rowhero, int& columnhero, int& rvrsjump, int& TOGGLEGRAVITY, int& ctofgravity, char UserMove, int& rows, int& columns, int& JUMP, int& JUMPRIGHT, int& JUMPLEFT, int& scrollcolumn, char screen[][300], int& level, int& C, int& column2, int& F) {

	int ct1 = 0;
	int ct2 = 0;
	int ctj = 0;
	int column = columnhero - 5;
	//int column2 = columnhero + 5;
	int A = 0;


	if (UserMove == 'c') {

		if (level == 3) {
			playerhealth = 5;
			rowhero = 31;
			columnhero = 150;
			lcond = 1;
			//JUMPRIGHT = 0;
			//JUMPLEFT = 0;
			//ctofjump = 40;
		}

	}



	if (UserMove == 'R') {

		playerhealth = 5;
		lvl1enemyhealth = 5;
		lvl2enemy1health = 5;
		lvl2enemy2health = 5;
		level = 1;
		rowhero = 31;
		columnhero = 12;
		rows = 40;
		columns = 150;


	}

	if (UserMove == 'u') {

		if (singlebullet == 0) {

			columnbullet = columnhero;
			rowbullet = rowhero - 1;
		}
		singlebullet = 1;
		bulletdirection = 3;

	}


	if (UserMove == 'g') {

		if (singlebullet == 0) {

			columnbullet = columnhero - 6;
			rowbullet = rowhero + 5;
		}
		singlebullet = 1;
		bulletdirection = 2;

	}


	if (UserMove == 'l') {

		if (singlebullet == 0) {

			columnbullet = columnhero + 6;
			rowbullet = rowhero + 5;
		}
		singlebullet = 1;
		bulletdirection = 1;

	}

	if (UserMove == 'w' && rowhero < 11 && rowhero > 2) {
		if (rowhero > 0) {
			rowhero--;
			JUMP = 0;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;
			TOGGLEGRAVITY = 0;
		}

	}
	if (UserMove == 'd') {

		if (screen[rowhero][columnhero + 2] == ' ' && screen[rowhero + 1][columnhero + 3] == ' ' && screen[rowhero + 2][columnhero + 4] == ' ' && screen[rowhero + 3][columnhero + 5] == ' ' && screen[rowhero + 4][columnhero + 6] == ' ' && screen[rowhero + 5][columnhero + 6] == ' ' && screen[rowhero + 6][columnhero + 4] == ' ' && screen[rowhero + 7][columnhero + 5] == ' ') {
			if (column2 < 297 && columnhero < 296) {
				if (rvrsjump > 20 || rvrsjump == 0) {
					columnhero++;
					ct1++;
					JUMP = 0;
					JUMPRIGHT = 0;
					JUMPLEFT = 0;
					rvrsjump = 0;
					ctofgravity = 0;
					TOGGLEGRAVITY = 1;

					//scroll:
					if (columns < 300) {
						columns += 1;
					}

					F++;
				}

			}
		}
		else if (JUMP == 1 || JUMPRIGHT == 1 || JUMPLEFT == 1 || airborne == 1) {
			if (column2 < 297 && columnhero < 296) {

				columnhero++;
				ct1++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

				//scroll:
				if (columns < 300) {
					columns += 1;
				}

				F++;


			}
		}
	}
	if (UserMove == 'a') {

		if (screen[rowhero][columnhero - 2] == ' ' && screen[rowhero + 1][columnhero - 3] == ' ' && screen[rowhero + 2][columnhero - 4] == ' ' && screen[rowhero + 3][columnhero - 5] == ' ' && screen[rowhero + 4][columnhero - 6] == ' ' && screen[rowhero + 5][columnhero - 6] == ' ' && screen[rowhero + 6][columnhero - 4] == ' ' && screen[rowhero + 7][columnhero - 5] == ' ') {
			if (columnhero > 3) {
				if (rvrsjump > 20 || rvrsjump == 0) {
					columnhero--;
					ct2++;
					JUMP = 0;
					JUMPRIGHT = 0;
					JUMPLEFT = 0;
					rvrsjump = 0;
					ctofgravity = 0;
					TOGGLEGRAVITY = 1;

					if (columns > 149) {
						columns -= 1;
					}
				}

			}

		}
		else if (JUMP == 1 || JUMPRIGHT == 1 || JUMPLEFT == 1 || airborne == 1) {
			if (columnhero > 3) {

				columnhero--;
				ct2++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

				if (columns > 149) {
					columns -= 1;
				}


			}
		}
	}

	if (ct1 == 5) {
		rows++;

	}
	if (ct2 == 5) {
		rows--;
	}
}

void Screen1(char screen[][300], int rowhero, int columnhero, int& rows, int& columns) {

	system("cls");
	int row = rowhero - 5;
	int row2 = rowhero + 5;
	int column = columnhero - 10;
	int column2 = columnhero + 5;
	int ct = 0;
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < columns; c++) {
			cout << screen[r][c];

		}

		cout << endl;
	}

	cout.flush();
}
void Screen2(char screen[][300], int rowhero, int columnhero, int& rows, int& columns, int& C, int& column2, int& F, int& scrollcolumn) {

	system("cls");

	int column = columnhero - 10;

	for (int r = 0; r < rows; r++) {
		for (int c = column; c < column + 150; c++) {
			cout << screen[r][c];
			if (c < 1) {
				c = 2;
			}
		}
		if (column > 150) {
			column = 150;
		}
		cout << endl;
	}

	cout.flush();
}

void Screen3(int& scroll3, char screen[][300], int rowhero, int columnhero, int& rows, int& columns) {

	if (columnhero > 145 && columnhero < 155) {
		system("cls");

		int column = columnhero - 65;
		scroll3 = columnhero - 65;
		for (int r = 0; r < rows; r++) {
			for (int c = column; c < column + 150; c++) {
				cout << screen[r][c];
				if (c < 1) {
					c = 2;
				}
			}
			if (column > 150) {
				column = 150;
			}
			cout << endl;
		}

		cout.flush();
	}
	else if (columnhero < 145) {
		system("cls");

		int column = columnhero - 10;
		scroll3 = 0;

		for (int r = 0; r < rows; r++) {
			for (int c = 0; c < 152; c++) {
				cout << screen[r][c];
				if (c < 1) {
					c = 2;
				}
			}
			if (column > 150) {
				column = 150;
			}
			cout << endl;
		}

		cout.flush();
	}
	else if (columnhero > 155) {
		system("cls");

		int column = columnhero - 10;
		scroll3 = 150;

		for (int r = 0; r < rows; r++) {
			for (int c = 150; c < 300; c++) {
				cout << screen[r][c];
				if (c < 1) {
					c = 2;
				}
			}
			if (column > 150) {
				column = 150;
			}
			cout << endl;
		}

		cout.flush();
	}

}


void jumpnow(int& playerhealth, int& level, int& rowhero, int& columnhero, int& ctofjump, int& JUMP, int& JUMPRIGHT, int& JUMPLEFT, int& rvrsjump, char screen[][300]) {

	if (JUMP == 1) {
		if (rvrsjump < 8) {
			if (screen[rowhero - 1][columnhero] != '=' && screen[rowhero - 1][columnhero - 1] != '=' && screen[rowhero - 1][columnhero + 1] != '=' && screen[rowhero - 1][columnhero] != 'x' && rowhero - 1 != 0) {
				rowhero -= 1;
				ctofjump++;
			}
		}
		else {
			if (screen[rowhero + 8][columnhero] == ' ' && screen[rowhero + 8][columnhero + 1] == ' ' && screen[rowhero + 8][columnhero + 2] == ' ' && screen[rowhero + 8][columnhero + 3] == ' ' && screen[rowhero + 8][columnhero + 4] == ' ' && screen[rowhero + 8][columnhero] != 'x') {
				rowhero += 1;
				ctofjump++;
			}
		}
		rvrsjump++;
	}

	if (JUMPRIGHT == 1) {
		if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
			playerhealth = 0;
		}
		if (rvrsjump < 8) {
			if (screen[rowhero - 1][columnhero] != '=' && screen[rowhero - 1][columnhero - 1] != '=' && screen[rowhero - 1][columnhero + 1] != '=' && screen[rowhero - 1][columnhero] != 'x' && rowhero - 1 != 0 && screen[rowhero][columnhero + 2] == ' ' && screen[rowhero + 1][columnhero + 3] == ' ' && screen[rowhero + 2][columnhero + 4] == ' ' && screen[rowhero + 3][columnhero + 5] == ' ' && screen[rowhero + 4][columnhero + 6] == ' ' && screen[rowhero + 5][columnhero + 6] == ' ' && screen[rowhero + 6][columnhero + 4] == ' ' && screen[rowhero + 7][columnhero + 5] == ' ') {
				if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
					playerhealth = 0;
				}
				rowhero -= 1;
				columnhero += 2;
				ctofjump++;

			}
		}
		else if (rvrsjump > 8 && rvrsjump < 13) {
			if (screen[rowhero][columnhero + 1] != '=' && screen[rowhero][columnhero + 1] != 'x' && screen[rowhero][columnhero + 2] == ' ' && screen[rowhero + 1][columnhero + 3] == ' ' && screen[rowhero + 2][columnhero + 4] == ' ' && screen[rowhero + 3][columnhero + 5] == ' ' && screen[rowhero + 4][columnhero + 6] == ' ' && screen[rowhero + 5][columnhero + 6] == ' ' && screen[rowhero + 6][columnhero + 4] == ' ' && screen[rowhero + 7][columnhero + 5] == ' ') {

				if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
					playerhealth = 0;
				}
				columnhero++;



			}
		}
		else {
			if (screen[rowhero + 8][columnhero] == ' ' && screen[rowhero + 8][columnhero + 1] == ' ' && screen[rowhero + 8][columnhero + 2] == ' ' && screen[rowhero + 8][columnhero + 3] == ' ' && screen[rowhero + 8][columnhero + 4] == ' ' && screen[rowhero + 8][columnhero] != 'x' && screen[rowhero][columnhero + 2] == ' ' && screen[rowhero + 1][columnhero + 3] == ' ' && screen[rowhero + 2][columnhero + 4] == ' ' && screen[rowhero + 3][columnhero + 5] == ' ' && screen[rowhero + 4][columnhero + 6] == ' ' && screen[rowhero + 5][columnhero + 6] == ' ' && screen[rowhero + 6][columnhero + 4] == ' ' && screen[rowhero + 7][columnhero + 5] == ' ') {

				if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
					playerhealth = 0;
				}
				rowhero += 1;
				columnhero += 2;
				ctofjump++;



			}
		}
		rvrsjump++;
	}

	if (JUMPLEFT == 1) {
		if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
			playerhealth = 0;
		}
		if (rvrsjump < 8) {
			if (screen[rowhero - 1][columnhero] != '=' && screen[rowhero - 1][columnhero - 1] != '=' && screen[rowhero - 1][columnhero + 1] != '=' && screen[rowhero - 1][columnhero] != 'x' && rowhero - 1 != 0 && screen[rowhero][columnhero - 2] == ' ' && screen[rowhero + 1][columnhero - 3] == ' ' && screen[rowhero + 2][columnhero - 4] == ' ' && screen[rowhero + 3][columnhero - 5] == ' ' && screen[rowhero + 4][columnhero - 6] == ' ' && screen[rowhero + 5][columnhero - 6] == ' ' && screen[rowhero + 6][columnhero - 4] == ' ' && screen[rowhero + 7][columnhero - 5] == ' ') {


				if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
					playerhealth = 0;
				}
				rowhero -= 1;
				columnhero -= 2;
				ctofjump++;

			}

		}
		else if (rvrsjump > 8 && rvrsjump < 13) {
			if (screen[rowhero][columnhero - 1] != '=' && screen[rowhero][columnhero - 1] != 'x' && screen[rowhero][columnhero - 2] == ' ' && screen[rowhero + 1][columnhero - 3] == ' ' && screen[rowhero + 2][columnhero - 4] == ' ' && screen[rowhero + 3][columnhero - 5] == ' ' && screen[rowhero + 4][columnhero - 6] == ' ' && screen[rowhero + 5][columnhero - 6] == ' ' && screen[rowhero + 6][columnhero - 4] == ' ' && screen[rowhero + 7][columnhero - 5] == ' ') {
				if (columnhero > 3) {
					if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
						playerhealth = 0;
					}
					columnhero--;

				}
			}

		}
		else {
			if (screen[rowhero + 8][columnhero] == ' ' && screen[rowhero + 8][columnhero - 1] == ' ' && screen[rowhero + 8][columnhero - 2] == ' ' && screen[rowhero + 8][columnhero - 3] == ' ' && screen[rowhero + 8][columnhero - 4] == ' ' && screen[rowhero + 8][columnhero] != 'x' && screen[rowhero][columnhero - 2] == ' ' && screen[rowhero + 1][columnhero - 3] == ' ' && screen[rowhero + 2][columnhero - 4] == ' ' && screen[rowhero + 3][columnhero - 5] == ' ' && screen[rowhero + 4][columnhero - 6] == ' ' && screen[rowhero + 5][columnhero - 6] == ' ' && screen[rowhero + 6][columnhero - 4] == ' ' && screen[rowhero + 7][columnhero - 5] == ' ') {
				if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
					playerhealth = 0;
				}
				rowhero += 1;
				columnhero -= 2;
				ctofjump++;

			}

		}

		rvrsjump++;
	}
}
void jump1(int& rowhero, int& columnhero, char UserMove, char screen[][300], int& ctofjump, int& JUMP, int& JUMPRIGHT, int& JUMPLEFT, int& rvrsjump) {

	if (UserMove == 'j') {
		if (rvrsjump > 20 || rvrsjump == 0) {
			rvrsjump = 0;
			ctofjump = 0;
			JUMP = 1;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;

		}
	}



	if (UserMove == 'k') {
		if (columnhero < 140) {
			if (rvrsjump > 20 || rvrsjump == 0) {
				rvrsjump = 0;
				ctofjump = 0;
				JUMPRIGHT = 1;
				JUMPLEFT = 0;
				JUMP = 0;

			}
		}
	}

	if (UserMove == 'h') {
		if (columnhero > 20) {
			if (rvrsjump > 20 || rvrsjump == 0) {
				rvrsjump = 0;
				ctofjump = 0;
				JUMPLEFT = 1;
				JUMPRIGHT = 0;
				JUMP = 0;

			}
		}
	}

	if (UserMove == 'w') {
		rvrsjump = 0;
		ctofjump = 0;
		JUMPLEFT = 0;
		JUMPRIGHT = 0;
		JUMP = 0;
	}

}
void jump2(int& rowhero, int& columnhero, char UserMove, char screen[][300], int& ctofjump, int& JUMP, int& JUMPRIGHT, int& JUMPLEFT, int& rvrsjump) {

	if (UserMove == 'j') {
		if (rvrsjump > 20 || rvrsjump == 0) {
			rvrsjump = 0;
			ctofjump = 0;
			JUMP = 1;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;

		}
	}



	if (UserMove == 'k') {
		if (rvrsjump > 20 || rvrsjump == 0) {
			rvrsjump = 0;
			ctofjump = 0;
			JUMPRIGHT = 1;
			JUMPLEFT = 0;
			JUMP = 0;

		}
	}

	if (UserMove == 'h') {
		if (rvrsjump > 20 || rvrsjump == 0) {
			rvrsjump = 0;
			ctofjump = 0;
			JUMPLEFT = 1;
			JUMPRIGHT = 0;
			JUMP = 0;

		}
	}

	if (UserMove == 'w') {
		rvrsjump = 0;
		ctofjump = 0;
		JUMPLEFT = 0;
		JUMPRIGHT = 0;
		JUMP = 0;
	}

}

void jump3(int& rowhero, int& columnhero, char UserMove, char screen[][300], int& ctofjump, int& JUMP, int& JUMPRIGHT, int& JUMPLEFT, int& rvrsjump) {

	if (UserMove == 'j') {
		if (rvrsjump > 20 || rvrsjump == 0) {
			rvrsjump = 0;
			ctofjump = 0;
			JUMP = 1;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;

		}
	}



	if (UserMove == 'k') {
		if (rvrsjump > 20 || rvrsjump == 0) {
			rvrsjump = 0;
			ctofjump = 0;
			JUMPRIGHT = 1;
			JUMPLEFT = 0;
			JUMP = 0;

		}
	}

	if (UserMove == 'h') {
		if (rvrsjump > 20 || rvrsjump == 0) {
			rvrsjump = 0;
			ctofjump = 0;
			JUMPLEFT = 1;
			JUMPRIGHT = 0;
			JUMP = 0;

		}
	}

	if (UserMove == 'w') {
		rvrsjump = 0;
		ctofjump = 0;
		JUMPLEFT = 0;
		JUMPRIGHT = 0;
		JUMP = 0;
	}

}

void firebullets(int& vsinglebullet, int& singlebullet, int rowhero, int columnhero, char screen[][300]) {

	if (singlebullet == 1) {
		screen[rowhero + 1][columnhero + 6 + vsinglebullet] = '-';
		vsinglebullet++;
	}

	if (vsinglebullet > 298) {
		vsinglebullet = 0;
		singlebullet = 0;
	}
}

void togglegravity(int& playerhealth, int& airborne, int& rowhero, int& columnhero, int& TOGGLEGRAVITY, int& ctofgravity, char screen[][300]) {
	if (TOGGLEGRAVITY == 1) {
		if (screen[rowhero + 8][columnhero] == ' ' && screen[rowhero + 8][columnhero + 1] == ' ' && screen[rowhero + 8][columnhero + 2] == ' ' && screen[rowhero + 8][columnhero - 1] == ' ' && screen[rowhero + 8][columnhero - 2] == ' ') {

			airborne = 1;
			rowhero += 1;
			ctofgravity++;
		}
		else {
			ctofgravity = 24;
			airborne = 0;
		}
	}

	//if (rowhero - 8 == 'x') {
	//	TOGGLEGRAVITY == 0;
	//}

	if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
		playerhealth = 0;
	}
}



void youlost(char screen[][300]) {


	for (int i = 0; i < 40; i++) {
		for (int j = 0; j < 300; j++) {
			screen[i][j] = ' ';
		}
	}


	screen[20][72] = 'Y';
	screen[20][73] = 'o';
	screen[20][74] = 'u';
	screen[20][75] = ' ';
	screen[20][76] = 'L';
	screen[20][77] = 'o';
	screen[20][78] = 's';
	screen[20][79] = 't';

	screen[22][66] = 'P';
	screen[22][67] = 'r';
	screen[22][68] = 'e';
	screen[22][69] = 's';
	screen[22][70] = 's';
	screen[22][71] = ' ';
	screen[22][72] = '\'';
	screen[22][73] = 'R';
	screen[22][74] = '\'';
	screen[22][75] = ' ';
	screen[22][76] = 'T';
	screen[22][77] = 'o';
	screen[22][78] = ' ';
	screen[22][79] = 'R';
	screen[22][80] = 'e';
	screen[22][81] = 's';
	screen[22][82] = 't';
	screen[22][83] = 'a';
	screen[22][84] = 'r';
	screen[22][85] = 't';

	screen[24][66] = 'P';
	screen[24][67] = 'r';
	screen[24][68] = 'e';
	screen[24][69] = 's';
	screen[24][70] = 's';
	screen[24][71] = ' ';
	screen[24][72] = '\'';
	screen[24][73] = 'C';
	screen[24][74] = '\'';
	screen[24][75] = ' ';
	screen[24][76] = 'T';
	screen[24][77] = 'o';
	screen[24][78] = ' ';
	screen[24][79] = 'R';
	screen[24][80] = 'e';
	screen[24][81] = 's';
	screen[24][82] = 't';
	screen[24][83] = 'a';
	screen[24][84] = 'r';
	screen[24][85] = 't';
	screen[24][85] = ' ';
	screen[24][86] = 'C';
	screen[24][87] = 'h';
	screen[24][88] = 'e';
	screen[24][89] = 'c';
	screen[24][90] = 'k';
	screen[24][91] = 'p';
	screen[24][92] = 'o';
	screen[24][93] = 'i';
	screen[24][94] = 'n';
	screen[24][95] = 't';



}

void youwon(char screen[][300]) {

	for (int i = 0; i < 40; i++) {
		for (int j = 0; j < 300; j++) {
			screen[i][j] = ' ';
		}
	}


	screen[20][72] = 'Y';
	screen[20][73] = 'o';
	screen[20][74] = 'u';
	screen[20][75] = ' ';
	screen[20][76] = 'W';
	screen[20][77] = 'o';
	screen[20][78] = 'n';


	screen[22][66] = 'P';
	screen[22][67] = 'r';
	screen[22][68] = 'e';
	screen[22][69] = 's';
	screen[22][70] = 's';
	screen[22][71] = ' ';
	screen[22][72] = '\'';
	screen[22][73] = 'R';
	screen[22][74] = '\'';
	screen[22][75] = ' ';
	screen[22][76] = 'T';
	screen[22][77] = 'o';
	screen[22][78] = ' ';
	screen[22][79] = 'R';
	screen[22][80] = 'e';
	screen[22][81] = 's';
	screen[22][82] = 't';
	screen[22][83] = 'a';
	screen[22][84] = 'r';
	screen[22][85] = 't';
}

void screenlost(char screen[][300]) {

	system("cls");
	int rows = 39;
	int columns = 149;
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < columns; c++) {
			cout << screen[r][c];

		}

		cout << endl;
	}

	cout.flush();
}

void screenwon(char screen[][300]) {

	system("cls");
	int rows = 39;
	int columns = 149;
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < columns; c++) {
			cout << screen[r][c];

		}

		cout << endl;
	}

	cout.flush();
}


void moveenemy1(char screen[][300], int& rowbomb1, int& columnbomb1, int& rowlvl3enemy1, int& columnlvl3enemy1, int& ctofmove1) {
	if (ctofmove1 >= 0 && ctofmove1 < 15) {
		columnlvl3enemy1 += 1;
		ctofmove1 += 1;
		//if (rowbomb1 == 38) {
		//
		//rowbomb1 = rowlvl3enemy1 + 7;
		//columnbomb1 = columnlvl3enemy1;
		//}
	}
	else if (ctofmove1 >= 15 && ctofmove1 < 18) {
		rowlvl3enemy1 += 1;
		ctofmove1 += 1;
		//if (rowbomb1 == 38) {
		//
		//	rowbomb1 = rowlvl3enemy1 + 7;
		//	columnbomb1 = columnlvl3enemy1;
		//}

	}
	else if (ctofmove1 >= 18 && ctofmove1 < 33) {
		columnlvl3enemy1 -= 1;
		ctofmove1 += 1;
		//if (rowbomb1 == 38) {
		//
		//	rowbomb1 = rowlvl3enemy1 + 7;
		//	columnbomb1 = columnlvl3enemy1;
		//}

	}
	else if (ctofmove1 >= 33 && ctofmove1 < 36) {
		rowlvl3enemy1 -= 1;
		ctofmove1 += 1;
		//if (rowbomb1 == 38) {
		//
		//	rowbomb1 = rowlvl3enemy1 + 7;
		//	columnbomb1 = columnlvl3enemy1;
		//}

	}
	else if (ctofmove1 == 36) {
		ctofmove1 = 0;
		rowlvl3enemy1 = 16;
		columnlvl3enemy1 = 110;
	}
}





void moveenemy2(char screen[][300], int& rowbomb1, int& columnbomb1, int& rowlvl3enemy1, int& columnlvl3enemy1, int& ctofmove1) {
	if (ctofmove1 >= 0 && ctofmove1 < 15) {
		columnlvl3enemy1 -= 1;
		ctofmove1 += 1;
		if (rowbomb1 == 38) {

			rowbomb1 = rowlvl3enemy1 + 7;
			columnbomb1 = columnlvl3enemy1;
		}
	}
	else if (ctofmove1 >= 15 && ctofmove1 < 18) {
		rowlvl3enemy1 -= 1;
		ctofmove1 += 1;
		if (rowbomb1 == 38) {

			rowbomb1 = rowlvl3enemy1 + 7;
			columnbomb1 = columnlvl3enemy1 + 15;
		}

	}
	else if (ctofmove1 >= 18 && ctofmove1 < 33) {
		columnlvl3enemy1 += 1;
		ctofmove1 += 1;
		if (rowbomb1 == 38) {

			rowbomb1 = rowlvl3enemy1 + 7;
			columnbomb1 = columnlvl3enemy1;
		}

	}
	else if (ctofmove1 >= 33 && ctofmove1 < 36) {
		rowlvl3enemy1 += 1;
		ctofmove1 += 1;
		if (rowbomb1 == 38) {

			rowbomb1 = rowlvl3enemy1 + 7;
			columnbomb1 = columnlvl3enemy1;
		}

	}
	else if (ctofmove1 == 36) {
		ctofmove1 = 0;
	}
}






void main() {
	char screen[40][300];
	int lvl1enemyhealth = 5;
	int rowlvl1enemy = 1;
	int columnlvl1enemy = 120;
	int vsinglebullet = 0;
	int singlebullet = 0;
	int playerhealth = 5;
	int lvl2enemy1health = 5;
	int lvl2enemy2health = 5;
	int lvl3enemy1health = 5;
	int lvl3enemy2health = 5;
	int lvl3enemy3health = 5;
	int lvl3enemy4health = 5;
	int rowlvl3enemy2 = 16;
	int columnlvl3enemy2 = 55;
	int scrollcolumn = 0;
	int ctofgravity = 0;
	int TOGGLEGRAVITY = 0;
	int rvrsjump = 0;
	int JUMP = 0;
	int JUMPRIGHT = 0;
	int JUMPLEFT = 0;
	int ctofjump = 0;
	int level = 1;
	int columnhero = 15;
	int rowhero = 30;
	int columnbullet = 0;
	int rowbullet = 0;
	int rowlvl2enemy1 = 4;
	int columnlvl2enemy1 = 175;
	int rowlvl2enemy2 = 16;
	int columnlvl2enemy2 = 250;
	int rowlvl3enemy1 = 16;
	int columnlvl3enemy1 = 110;
	int rowelevator = 12;
	int columnelevator = 180;
	int rowelevator2 = 24;
	int columnelevator2 = 275;
	int rowlvl3enemy3 = 1;
	int columnlvl3enemy3 = 130;
	int rowlvl3enemy4 = 1;
	int columnlvl3enemy4 = 170;
	int directionenemy1 = 1;
	int directionenemy1lvl2 = 1;
	int directionenemy2lvl2 = 1;
	int directionenemy3lvl3 = 1;
	int directionenemy4lvl3 = -1;
	int directionelevator = 1;
	int directionelevator2 = 1;
	int rowelevatorlvl3 = 39;
	int columnelevatorlvl3 = 2;
	int directionelevatorlvl3 = 1;
	int rows = 40;
	int columns = 150;
	int robs1lvl2 = 30;
	int cobs1lvl2 = 3;
	int lvl2dirobs1 = 1;
	int robs2lvl2 = 25;
	int cobs2lvl2 = 394;
	int lvl2dirobs2 = -1;
	int robs3lvl2 = 25;
	int cobs3lvl2 = 40;
	int lvl2dirobs3 = 1;
	int robs1lvl3 = 35;
	int cobs1lvl3 = 165;
	int robs2lvl3 = 29;
	int cobs2lvl3 = 296;
	int robs3lvl3 = 24;
	int cobs3lvl3 = 165;
	int robs4lvl3 = 17;
	int cobs4lvl3 = 296;
	int lvl3dirocbst4 = -1;
	int lvl3dirocbst1 = 1;
	int lvl3dirocbst2 = -1;
	int lvl3dirocbst3 = 1;
	int C = 0;
	int column2 = columnhero + 138;
	int F = 0;
	int airborne = 0;
	int bulletdirection = 0;
	int lcond = 1;
	int scroll3 = 0;
	int rowbomb1 = rowlvl3enemy1 + 7;
	int columnbomb1 = columnlvl3enemy1;
	int rowbomb2 = rowlvl3enemy2 + 7;
	int columnbomb2 = columnlvl3enemy2;
	int ctofmove1 = 0;
	int ctofmove2 = 0;
	int finish = 0;
	char UserMove;

	for (;;) {

		for (; !_kbhit();) {

			if (playerhealth > 0) {

				if (level == 1) {

					drawlevel1(singlebullet, columnbullet, rowbullet, vsinglebullet, columnlvl1enemy, rowlvl1enemy, lvl1enemyhealth, rowhero, columnhero, playerhealth, screen);

					DrawHero(screen, rowhero, columnhero);
					if (lvl1enemyhealth > 0) {

						Drawlvl1enemy(screen, rowlvl1enemy, columnlvl1enemy);
						Moveenemy1(rowlvl1enemy, columnlvl1enemy, rowhero, columnhero, directionenemy1, screen, playerhealth);
					}
					Screen1(screen, rowhero, columnhero, rows, columns); //cout elmatrix llscreen



					if (ctofjump < 40) {
						jumpnow(playerhealth, level, rowhero, columnhero, ctofjump, JUMP, JUMPRIGHT, JUMPLEFT, rvrsjump, screen);
					}
					if (ctofjump == 40) {
						JUMP = 0;
						JUMPRIGHT = 0;
						JUMPLEFT = 0;
					}

					if (ctofgravity < 40) {
						togglegravity(playerhealth, airborne, rowhero, columnhero, TOGGLEGRAVITY, ctofgravity, screen);
					}
					if (ctofgravity == 40) {
						TOGGLEGRAVITY = 0;
					}

				}

				if (level == 2) {
					drawlevel2(rowlvl2enemy2, columnlvl2enemy2, lvl2enemy2health, rowbullet, columnbullet, lvl2enemy1health, rowlvl2enemy1, columnlvl2enemy1, vsinglebullet, singlebullet, screen, rowhero, columnhero, scrollcolumn, columns, playerhealth);
					Drawobstacle2(screen, robs1lvl2, cobs1lvl2, robs2lvl2, cobs2lvl2, robs3lvl2, cobs3lvl2, lvl2dirobs3);
					Obstcalemove2(robs1lvl2, cobs1lvl2, lvl2dirobs1, robs2lvl2, cobs2lvl2, lvl2dirobs2, robs3lvl2, cobs3lvl2, lvl2dirobs3);
					DrawHero(screen, rowhero, columnhero);
					if (lvl2enemy1health > 0) {

						Drawlvl2enemy1(screen, rowlvl2enemy1, columnlvl2enemy1);
						Moveenemy(rowlvl2enemy1, columnlvl2enemy1, rowhero, columnhero, screen, playerhealth, directionenemy1lvl2);

					}
					if (lvl2enemy2health > 0) {

						Drawlvl2enemy2(screen, rowlvl2enemy2, columnlvl2enemy2);
						Moveenemy2(rowlvl2enemy2, columnlvl2enemy2, rowhero, columnhero, screen, playerhealth, directionenemy2lvl2);
					}

					DrawElevator(screen, rowelevator, columnelevator, rowelevator2, columnelevator2);
					MoveElevator(rowelevator, columnelevator, directionelevator, rowelevator2, columnelevator2, directionelevator2, columnhero, rowhero);
					Screen2(screen, rowhero, columnhero, rows, columns, C, column2, F, scrollcolumn); //cout elmatrix llscreen


					//firebullets(vsinglebullet, singlebullet, rowhero, columnhero, screen);
					if (ctofjump < 40) {
						jumpnow(playerhealth, level, rowhero, columnhero, ctofjump, JUMP, JUMPRIGHT, JUMPLEFT, rvrsjump, screen);
					}
					if (ctofjump == 40) {
						JUMP = 0;
						JUMPRIGHT = 0;
						JUMPLEFT = 0;
					}

					if (ctofgravity < 40) {
						togglegravity(playerhealth, airborne, rowhero, columnhero, TOGGLEGRAVITY, ctofgravity, screen);
					}
					if (ctofgravity == 40) {
						TOGGLEGRAVITY = 0;
					}

				}
				if (level == 3) {
					drawlevel3(ctofmove2, ctofmove1, lvl3enemy4health, rowlvl3enemy4, columnlvl3enemy4, lvl3enemy3health, rowlvl3enemy3, columnlvl3enemy3, rowbomb2, columnbomb2, rowbomb1, columnbomb1, scroll3, lcond, bulletdirection, columnlvl3enemy2, rowlvl3enemy2, vsinglebullet, rowlvl3enemy1, columnlvl3enemy1, singlebullet, rowbullet, columnbullet, lvl3enemy2health, lvl3enemy1health, playerhealth, rowhero, columnhero, screen);
					Drawobstaclelvl3(screen, robs1lvl3, cobs1lvl3, lvl3dirocbst1, robs2lvl3, cobs2lvl3, lvl3dirocbst2, robs3lvl3, cobs3lvl3, lvl3dirocbst3, robs4lvl3, cobs4lvl3, lvl3dirocbst4);
					Moveobstacles3(screen, robs1lvl3, cobs1lvl3, lvl3dirocbst1, robs2lvl3, cobs2lvl3, lvl3dirocbst2, robs3lvl3, cobs3lvl3, lvl3dirocbst3, robs4lvl3, cobs4lvl3, lvl3dirocbst4);
					DrawHero(screen, rowhero, columnhero);

					if (lvl3enemy1health > 0) {

						Drawlvl3enemy1(screen, rowlvl3enemy1, columnlvl3enemy1);

						//Moveenemy1(rowlvl1enemy, columnlvl1enemy, rowhero, columnhero, directionenemy1, screen);
					}

					if (lvl3enemy2health > 0) {
						Drawlvl3enemy2(screen, rowlvl3enemy2, columnlvl3enemy2);

					}

					if (lvl3enemy3health > 0) {
						Drawlvl3enemy3(screen, rowlvl3enemy3, columnlvl3enemy3);
						Moveenemy3(rowlvl3enemy3, columnlvl3enemy3, rowhero, columnhero, directionenemy3lvl3, screen, playerhealth);
					}

					if (lvl3enemy4health > 0) {
						Drawlvl3enemy4(screen, rowlvl3enemy4, columnlvl3enemy4);
						Moveenemy4(rowlvl3enemy4, columnlvl3enemy4, rowhero, columnhero, directionenemy4lvl3, screen, playerhealth);
					}

					DrawElevator3(screen, rowelevatorlvl3, columnelevatorlvl3);
					MoveElevator3(rowelevatorlvl3, columnelevatorlvl3, directionelevatorlvl3, columnhero, rowhero);
					if (columnhero < 145) {

						moveenemy1(screen, rowbomb1, columnbomb1, rowlvl3enemy1, columnlvl3enemy1, ctofmove1);
						moveenemy2(screen, rowbomb2, columnbomb2, rowlvl3enemy2, columnlvl3enemy2, ctofmove2);


					}if (finish != 1) {

						Screen3(scroll3, screen, rowhero, columnhero, rows, columns);
					}

					if (ctofjump < 40) {
						jumpnow(playerhealth, level, rowhero, columnhero, ctofjump, JUMP, JUMPRIGHT, JUMPLEFT, rvrsjump, screen);
					}
					if (ctofjump == 40) {
						JUMP = 0;
						JUMPRIGHT = 0;
						JUMPLEFT = 0;
					}

					if (ctofgravity < 40) {
						togglegravity(playerhealth, airborne, rowhero, columnhero, TOGGLEGRAVITY, ctofgravity, screen);
					}
					if (ctofgravity == 40) {
						TOGGLEGRAVITY = 0;
					}

					if (137 <= columnhero && columnhero <= 165 && rowhero < 12) {
						finish = 1;
						if (rowhero == 1) {
							youwon(screen);
							screenwon(screen);
						}
					}
				}

			}
			else {
				youlost(screen);
				screenlost(screen);
			}
		}


		UserMove = _getch();


		DrawHero(screen, rowhero, columnhero);
		if (level == 1) {
			MoveHero1(ctofjump, airborne, lvl1enemyhealth, lvl2enemy1health, lvl2enemy2health, singlebullet, rowbullet, columnbullet, playerhealth, rowhero, columnhero, rvrsjump, TOGGLEGRAVITY, ctofgravity, UserMove, rows, columns, JUMP, JUMPRIGHT, JUMPLEFT, screen, level);
			jump1(rowhero, columnhero, UserMove, screen, ctofjump, JUMP, JUMPRIGHT, JUMPLEFT, rvrsjump);
		}
		if (level == 2) {
			MoveHero2(lcond, airborne, lvl1enemyhealth, lvl2enemy1health, lvl2enemy2health, playerhealth, rowbullet, columnbullet, singlebullet, rowhero, columnhero, rvrsjump, TOGGLEGRAVITY, ctofgravity, UserMove, rows, columns, JUMP, JUMPRIGHT, JUMPLEFT, scrollcolumn, screen, level, C, column2, F);
			jump2(rowhero, columnhero, UserMove, screen, ctofjump, JUMP, JUMPRIGHT, JUMPLEFT, rvrsjump);
		}
		if (level == 3) {
			MoveHero3(ctofjump, lcond, bulletdirection, airborne, lvl1enemyhealth, lvl2enemy1health, lvl2enemy2health, playerhealth, rowbullet, columnbullet, singlebullet, rowhero, columnhero, rvrsjump, TOGGLEGRAVITY, ctofgravity, UserMove, rows, columns, JUMP, JUMPRIGHT, JUMPLEFT, scrollcolumn, screen, level, C, column2, F);
			jump3(rowhero, columnhero, UserMove, screen, ctofjump, JUMP, JUMPRIGHT, JUMPLEFT, rvrsjump);
		}
		//if (finish == 1) {
		//	MoveHero3(ctofjump, lcond, bulletdirection, airborne, lvl1enemyhealth, lvl2enemy1health, lvl2enemy2health, playerhealth, rowbullet, columnbullet, singlebullet, rowhero, columnhero, rvrsjump, TOGGLEGRAVITY, ctofgravity, UserMove, rows, columns, JUMP, JUMPRIGHT, JUMPLEFT, scrollcolumn, screen, level, C, column2, F);
		//
		//}
	}
}