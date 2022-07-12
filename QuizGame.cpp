#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
void welcome();
int knowledge();
int intelligence();
int maths();
int islam();
int sports();
int main()
{

	welcome();
	HANDLE  COLOR;
	int k = 10;
	COLOR = GetStdHandle(STD_OUTPUT_HANDLE);
	string f_name, l_name;
	cout << "\n\t\t\t\t\t   Enter Your first Name: ";
	cin >> f_name;
	cout << "\n\t\t\t\t\t   Enter Your last Name: ";
	cin >> l_name;
	char choice;
	cout << "\n\t\t\t\t\t   PRESS 'S' TO START THE GAME\n";
	cout << "\n\t\t\t\t\t   PRESS 'Q' TO QUIT THE GAME\n";
	cout << "\n\t\t\t\t\t   ENTER YOUR CHOICE: ";
	cin >> choice;

	if (choice == 'Q' || choice == 'q'){
		system("cls");
		SetConsoleTextAttribute(COLOR, k);
		cout << "\n\t\t\t\t======================================================\n";
		cout << "\t\t\t\t   THANKYOU " << f_name << " " << l_name << " FOR PLAYING THE GAME \n";
		cout << "\t\t\t\t                    EXIT SUCCESSFULLY ";
		cout << "\n\t\t\t\t======================================================\n";
		SetConsoleTextAttribute(COLOR, 0);
	}
	else if (choice == 'S' || choice == 's'){
		int quiz;
		system("cls");
		do{
			cout << "\t\t\t\t\tWHICH QUIZ YOU WANT TO PLAY: \n";
			cout << "\t\t\t\t       <1> GENERAL KNOWLEDGE\n";
			cout << "\t\t\t\t       <2> INTELLIGENCE\n";
			cout << "\t\t\t\t       <3> SPORTS\n";
			cout << "\t\t\t\t       <4> MATHS\n";
			cout << "\t\t\t\t       <5> ISLAMIC\n";
			cout << "\t\t\t\t       <0> EXIT\n";
			cout << "YOUR CHOICE: ";
			cin >> quiz;
			if (quiz == 1){ knowledge(); }
			else if (quiz == 2){ intelligence(); }
			else if (quiz == 3){ sports(); }
			else if (quiz == 4){ maths(); }
			else if (quiz == 5){ islam(); }
			else if (quiz == 0){
				system("cls");
				SetConsoleTextAttribute(COLOR, k);
				cout << "\n\t\t\t\t======================================================\n";
				cout << "\t\t\t\t   THANKYOU " << f_name << " " << l_name << " FOR PLAYING THE GAME \n";
				cout << "\t\t\t\t                    EXIT SUCCESSFULLY ";
				cout << "\n\t\t\t\t======================================================\n";
				SetConsoleTextAttribute(COLOR, 0);
			}
			else{ cout << "wrong choice please select correct"; }
		} while (quiz != 0);
	}
	else{
		cout << "wrong choice please select the right choice\n";
	}


	system("pause");

}

//********************* ===========>>>>  WELCOME   <<<<============= *****************************//

void welcome() {
	HANDLE  COLOR;
	int k = 10;
	COLOR = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(COLOR, k);
	cout << "\n\t\t\t\t==================================================\n";
	SetConsoleTextAttribute(COLOR, 9);
	cout << "\t\t\t\t=====\t   SAJJAD ALI(02-134201-070)   \t     =====\n";
	SetConsoleTextAttribute(COLOR, k);
	cout << "\n\t\t\t\t==================================================\n";
	cout << "\n\t\t\t\t\t\t C++ QUIZ GAME\n";
	cout << "\n\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "\n\t\t\t\t\t\t  WELCOME TO THE\n\t\t\t\t\t\t    C++ QUIZ \n";
	cout << "\n\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "\n\t\t\t\t  you will be given a question with four choices\n\t\t\t\t     you have to choose the correct one \n";
	cout << "\n\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	SetConsoleTextAttribute(COLOR, 15);


	//********************* ===========>>>>  KNOWLEDGE   <<<<============= *****************************//

}int knowledge(){
	system("cls");
	cout << "\n=================================================================\n";
	cout << "            WELCOME TO THE QUIZ OF GENERAL KNOWLEDGE                \n";
	cout << "\n=================================================================\n";
	char answer;
	int x = 0;
	//-----------1-------
	cout << "1- sindh occupies ________ part of pakistan?\n a) north-western \t b)south-eastern \n c)south-western \t d)north-eastern \n your answer: ";
	cin >> answer; if (answer == 'a'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (a)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------2
	cout << "2- longest river of pakistan is: \n a) river ravi\t b) river chenab\n c) river indus\t d)river jehlum\n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------3
	cout << "3- most populus city of punjab is: \n a) faislabad \t b) lahore \n c) multan \t d)sargodha\n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------4
	cout << "4- china lies in the _______ of pakistan: \n a) east \t b) west\n c) north \t d)south\n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------5
	cout << "5- pakistan successfully tested nuclear device at chagi on 28th may____ : \n a) 1994 \t b) 1996\n c) 1999 \t d)1998\n your answer: ";
	cin >> answer; if (answer == 'd'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (d)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------6
	cout << "6- The motto of state emblem of pakistan is : \n a)trust, humanity,unity  \t b)unity, faith, discipline \n c)discipline,trust,faith  \t d)humanity,faith,discipline \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------7
	cout << "7- heighest peak of pakistan is : \n a)board peak \t b)K-2 \n c)mount everest  \t d)nanga parbat \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------8
	cout << "8- old name of lahore : \n a)Gandara  \t b)Mehmood pur \n c)raj shahi  \t d)none of these \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------9
	cout << "9-first president of pakistan was : \n a)iskandar mirza  \t b)Quaid-e-Azam \n c)Liaquat Ali Khan  \t d)Fazlillah chaudhary \n your answer: ";
	cin >> answer; if (answer == 'a'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (a)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------10
	cout << "10- when did pakistan became a republic : \n a)13 june 1954  \t b)23 march 1956 \n c)23 april 1958  \t d)22 march 1956 \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------11
	cout << "11-largest man made forest is : \n a)amazon forest  \t b)changa manga \n c)mangrove forest  \t d)jhonpur \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------12
	cout << "12-Which is the largest desert in the World?  : \n a)arabian  \t b)gobi \n c)sahara  \t d)australian \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------13
	cout << "13-The first airline of Pakistan is______ : \n a)pak airways  \t b)PIA \n c)Orient Aitline  \t d)Airblue \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------14
	cout << "14- Muhammad bin Qasim entered Sindh (Indo-Pakistan subcontinent) in _______ A.D.  : \n a)612  \t b)660 \n c)712  \t d)760 \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------15
	cout << "15-Urdu was declared national language of Pakistan in:  : \n a)april 1952  \t b)april 1954 \n c)april 1956  \t d)april 1953 \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------16
	cout << "16-Word Urdu means  : \n a)students  \t b)believers \n c)army  \t d)none of these \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------17
	cout << "17-Who composed the verses of Pakistan national Anthem?  : \n a)Allama Iqbal  \t b)Faiz Ahmed faiz \n c)Nasir kazmi  \t d)Hafeez Jallandri \n your answer: ";
	cin >> answer; if (answer == 'd'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (d)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------18
	cout << "18-With which country, Pakistan share 2,430 km long border?  : \n a)india  \t b)iran \n c)afghanistan  \t d)china \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------19
	cout << "19-Durand line was demarcated in 1893. This line forms:   \n a)pak-india boreder  \t b)pak-iran boredr \n c)pak-china border  \t d)pak-afghan border \n your answer: ";
	cin >> answer; if (answer == 'd'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (d)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------20
	cout << "20-Which mountain range has a length of 2700 km?  : \n a)himalaya  \t b)karakoram \n c)hindu kash  \t d)pir pinjai \n your answer: ";
	cin >> answer; if (answer == 'a'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (a)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------21
	cout << "21-When did Pakistan win Olympic gold medal in Hockey for the first time?  : \n a)1952  \t b)1962 \n c)1968  \t d)1960 \n your answer: ";
	cin >> answer; if (answer == 'd'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (d)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------22
	cout << "22-Who designed Pakistan's national flag?  : \n a)fatma jinnah  \t b)hafeez jallandri \n c)Allama Iqbal  \t d)Ameer ud din khidwai \n your answer: ";
	cin >> answer; if (answer == 'd'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (d)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------23
	cout << "23-National poet of pakistan : \n a)josh malih abadi  \t b)hafeez jallandri \n c)Allama Iqbal  \t d)none of these \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------24
	cout << "24-first ever chief marshal law administrator of pakistan was : \n a)general ayub khan  \t b)general yahya khan \n c)general pervaiz musharaf  \t d)general zia ul haq \n your answer: ";
	cin >> answer; if (answer == 'a'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (a)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------25
	cout << "25-which is the Lumber one university of world : \n a)Bahria university  \t b)bahria university \n c)bahria university  \t d)bahria university \n your answer: ";
	cin >> answer; if (answer == 'd'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (d)\n"; }
	cout << "_____________________________________________________________________________________\n";
	HANDLE  COLOR;
	int k = 10;
	COLOR = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(COLOR, k);
	cout << "\n\t\t\t\t=======================================\n";
	cout << "\t\t\t\t   THANKYOU FOR PLAYING THE GAME \n";
	cout << "\t\t\t\t           HAVE A GOOD DAY ";
	cout << "\n\t\t\t\t=======================================\n";
	cout << "\t\t\t\t\t YOUR SCORE IS " << x << "/25";
	cout << "\n\t\t\t\t=======================================\n";
	return 0;

}

//********************* ===========>>>>  MATHS   <<<<============= *****************************//

int maths(){
	system("cls");
	cout << "\n=================================================================\n";
	cout << "                 WELCOME TO THE QUIZ OF MATHS                \n";
	cout << "\n=================================================================\n";
	char answer;
	int x = 0;
	//--------1
	cout << "1-Two matrix A and B are equal if : \n a) They are square matrix \t b)they have same order \n c)corresponding elements are equal  \t d)no of coloumns are equal  \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------2
	cout << "2-Degree of x4 + 2x - 1 is : \n a)0 \t b)-1 \n c)4  \t d)2  \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------3
	cout << "3-The quadratic eq. Having roots 2 and - is : \n a)-x^2 + x - 6 = 0 \t b)x^2 + x - 6 = 0 \n c)x^2 - x - 6 = 0  \t d)-x^2 + x + 6 = 0  \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------4
	cout << "4-A coin is tossed five times, total no. of outcomes is : \n a)2^2 \t b)2^3 \n c)2^5  \t d)2^4  \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------5
	cout << "5-How many kinds of trigonometry are? : \n a)one \t b)two \n c)three  \t d)four  \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------6
	cout << "6-the average of first 50 natural numbers are : \n a)21.25 \t b)25.5 \n c)12  \t d)25  \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------7
	cout << "7-What is 2+2�2�2-2? : \n a)0 \t b)-2 \n c)2  \t d)1  \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------8
	cout << "8-men can eat 20 kg of rice in 3 days. How long will 6 men take to eat 40 kg of rice? : \n a)20 \t b)18 \n c)32  \t d)20  \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------9
	cout << "9-Certain quantity of food is sufficient for certain number of men for 13 days. After 1 day 2/5 of them desert how long will the food now last? : \n a)20 \t b)25 \n c)18  \t d)16  \n your answer: ";
	cin >> answer; if (answer == 'a'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (a)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//--------10
	cout << "10- 15 cattle can graze a field in 20 days 20 cattle can graze 3 such field in how many days? : \n a)30 \t b)45 \n c)60  \t d)50  \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	HANDLE  COLOR;
	int k = 10;
	COLOR = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(COLOR, k);
	cout << "\n\t\t\t\t=======================================\n";
	cout << "\t\t\t\t   THANKYOU FOR PLAYING THE GAME \n";
	cout << "\t\t\t\t           HAVE A GOOD DAY ";
	cout << "\n\t\t\t\t=======================================\n";
	cout << "\t\t\t\t\t YOUR SCORE IS " << x << "/10";
	cout << "\n\t\t\t\t=======================================\n";
	return 0;
}

//********************* ===========>>>>  INTELLIGENCE   <<<<============= *****************************//

int intelligence(){
	system("cls");
	cout << "\n=================================================================\n";
	cout << "                 WELCOME TO THE QUIZ OF INTELLIGENCE                \n";
	cout << "\n=================================================================\n";
	char answer;
	int x = 0;
	string quiz[10];
	quiz[0] = "1- C is the father of D. But D is not the son of C. How is that possible?  : \n a)D is C's daughter  \t b)C is D's uncle \n c)both are brothers  \t d)they are not related \n your answer: ";
	quiz[1] = "2-Before Mount Everest was discovered, what was the highest mountain on earth?  : \n a)K-2  \t b)Himalaya \n c)carmel  \t d)mount everest \n your answer: ";
	quiz[2] = "3-What is the world's most populous country?  : \n a)russia  \t b)india \n c)china  \t d)USA \n your answer: ";
	quiz[3] = "4- If peacocks do not lay eggs, how are baby peacocks born?  : \n a)live birth  \t b)in labs \n c)peahens have them  \t d)none of these \n your answer: ";
	quiz[4] = "5-How can a man go 9 days without sleep?  : \n a)magic  \t b)surgery \n c)impossible  \t d)by sleeping during night \n your answer: ";
	quiz[5] = "6-Which number logically follows this series?       4     6     9     6     14     6  ...   \n a)6  \t b)17 \n c)19  \t d)21 \n your answer: ";
	quiz[6] = "7-Water is to a pipe as ? is to a wire.  : \n a)cord  \t b)electricity \n c)heat  \t d)gas \n your answer: ";
	quiz[7] = "8-LIVE is to EVIL as 5232 is to  : \n a)2523  \t b)3252 \n c)2325  \t d)3225 \n your answer: ";
	quiz[8] = "9-select the odd one  : \n a)mango  \t b)apple \n c)potato  \t d)banana \n your answer: ";
	quiz[9] = "10-Milk is to glass as letter is to  : \n a)pen  \t b)book \n c)stamp  \t d)envelope \n your answer: ";
	//-------1
	cout << quiz[0];
	cin >> answer; if (answer == 'a'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (a)\n  D is the child of C. If C is not D's son, she must be D's daughter\n"; }
	cout << "_____________________________________________________________________________________\n";

	//-------2
	cout << quiz[1];
	cin >> answer; if (answer == 'd'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (d)\n Mt. Everest was the tallest mountain on earth long before discovered it. It was always there.\n"; }
	cout << "_____________________________________________________________________________________\n";

	//-------3
	cout << quiz[2];
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";

	//-------4
	cout << quiz[3];
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n Peacocks are the males of the species and peahens are the females. Females lay the eggs.\n"; }
	cout << "_____________________________________________________________________________________\n";

	//-------5
	cout << quiz[4];
	cin >> answer; if (answer == 'd'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (d)\n"; }
	cout << "_____________________________________________________________________________________\n";

	//-------6
	cout << quiz[5];
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";

	//-------7
	cout << quiz[6];
	cin >> answer; if (answer == 'd'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (d)\n"; }
	cout << "_____________________________________________________________________________________\n";

	//-------8
	cout << quiz[7];
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";

	//-------9
	cout << quiz[8];
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n potato is vegetable"; }
	cout << "_____________________________________________________________________________________\n";

	//-------10
	cout << quiz[9];
	cin >> answer; if (answer == 'd'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (d)\n"; }
	cout << "_____________________________________________________________________________________\n";
	HANDLE  COLOR;
	int k = 10;
	COLOR = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(COLOR, k);
	cout << "\n\t\t\t\t=======================================\n";
	cout << "\t\t\t\t   THANKYOU FOR PLAYING THE GAME \n";
	cout << "\t\t\t\t           HAVE A GOOD DAY ";
	cout << "\n\t\t\t\t=======================================\n";
	cout << "\t\t\t\t\t YOUR SCORE IS " << x << "/10";
	cout << "\n\t\t\t\t=======================================\n";
	return 0;
}

//********************* ===========>>>>  SPORTS   <<<<============= *****************************//

int sports(){
	system("cls");
	int x = 0;
	char answer;
	//-------1
	cout << "1-how many football worldcups does brazil have : \n a)3  \t b)4 \n c)5  \t d)2 \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------2
	cout << "2-which cricketer known as rawalpindi express  : \n a)waqar younis  \t b)wasim akram \n c)shoib akhtar  \t d)imran khan \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------3
	cout << "3- which captain won the most cricket worldcups : \n a)imran khan  \t b)kapil dev \n c)ricky ponting  \t d)brain lara \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------4
	cout << "4- which country was about to host olympics 2020 : \n a)australia  \t b)brazil \n c)china  \t d)japan \n your answer: ";
	cin >> answer; if (answer == 'd'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (d)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------5
	cout << "5-who scored the winning goal for germany in 2014 world cup final  : \n a)gotze  \t b)muller \n c)kroos  \t d)neuer \n your answer: ";
	cin >> answer; if (answer == 'a'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (a)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------6
	cout << "6- Ben Stokes is associated with the game of   : \n a)football  \t b)cricket\n c)basket ball  \t d)tennis \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------7
	cout << "7-which football club has most champions league trophies  : \n a)real madrid  \t b)barcelona \n c)beyren munich  \t d)manchester united \n your answer: ";
	cin >> answer; if (answer == 'a'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (a)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------8
	cout << "8-What is Usain Bolt's blistering 100m world record time?  : \n a)9.38 seconds  \t b)9.58 seconds \n c)9.98 seconds  \t d)8.78 seconds \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------9
	cout << "9-how many squash worldcups did pakistan win so far  : \n a)21  \t b)22 \n c)23  \t d)24 \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------10
	cout << "10-who won the kabaddi worldcup 2020  : \n a)india  \t b)iran \n c)australia  \t d)pakistan \n your answer: ";
	cin >> answer; if (answer == 'd'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (d)\n"; }
	cout << "_____________________________________________________________________________________\n";
	HANDLE  COLOR;
	int k = 10;
	COLOR = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(COLOR, k);
	cout << "\n\t\t\t\t=======================================\n";
	cout << "\t\t\t\t   THANKYOU FOR PLAYING THE GAME \n";
	cout << "\t\t\t\t           HAVE A GOOD DAY ";
	cout << "\n\t\t\t\t=======================================\n";
	cout << "\t\t\t\t\t YOUR SCORE IS " << x << "/10";
	cout << "\n\t\t\t\t=======================================\n";
	return 0;
}

//********************* ===========>>>>  ISLAMIC   <<<<============= *****************************//

int islam(){
	system("cls");
	int x = 0;
	char answer;
	//-------1
	cout << "1- Islam k pehlay mouzzin kon thay : \n a)Hazrat Ali  \t b)Hazrat Bilal \n c)Hazrat Khalid  \t d)Hazrat Usman \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------2
	cout << "2- Quran ma kitnay sajday hain : \n a)10  \t b)12 \n c)16  \t d)14 \n your answer: ";
	cin >> answer; if (answer == 'd'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (d)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------3
	cout << "3-Quran ma kon si surat aik khatoon k nam pa ha  : \n a)Hazrat khadija(R)  \t b)Hazrat Fatima(R) \n c)Hazrat Maryam(a.s)  \t d)Hazrat Ayesha(R) \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------4
	cout << "4-Ghazwa badar ma musalmano ki tadad kia thi  : \n a)1000  \t b)313 \n c)315  \t d)300 \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------5
	cout << "5-Hazrat Muhammad (S.A.W) k damad kon thay  : \n a)Hazrat umer(R)  \t b)Hazrat Ali(R) \n c)Hazrat usman(R)  \t d)Hazrat Zain Bin Haris \n your answer: ";
	cin >> answer; if (answer == 'b'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (b)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------6
	cout << "6- Islam ma sab sa bara gunah kon sa ha : \n a)Shirk  \t b)chori \n c)zina  \t d)qatal \n your answer: ";
	cin >> answer; if (answer == 'a'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (a)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------7
	cout << "7- Bait  ul Muqaddas kis na fatah kia  : \n a)Salah ul din ayyubi  \t b)Muhammad Bin Qasim \n c)Tariq bin ziad  \t d)Mehmood ghaznavi \n your answer: ";
	cin >> answer; if (answer == 'a'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (a)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------8
	cout << "8-The second Prophet of Allah was  : \n a)Hazrat Noah (A.S) \t b)Hazrat Ayub (A.S) \n c)Hazrat Shees (A.S)  \t d)none of these \n your answer: ";
	cin >> answer; if (answer == 'c'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (c)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------9
	cout << "9-Sher e Khuda kis ka laqab tha   : \n a)Hazrat Umer(R) \t b)Hazrat Khalid Bin Waleeb(R) \n c)Hazrat Abu Bakar(R)  \t d)Hazrat Ali (R) \n your answer: ";
	cin >> answer; if (answer == 'd'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (d)\n"; }
	cout << "_____________________________________________________________________________________\n";
	//-------10
	cout << "10-Allah ki talwar kin sahabi ko kaha jata tha  : \n a)Hazrat Khalid Bin Waleed (R)  \t b)Hazrat Umer(R) \n c)Hazrat Abu Bakar (R)  \t d) Hazrat Ali(R) \n your answer: ";
	cin >> answer; if (answer == 'a'){ cout << "correct\n"; x = x + 1; }
	else{ cout << "right answer is (a)\n"; }
	cout << "_____________________________________________________________________________________\n";
	HANDLE  COLOR;
	int k = 10;
	COLOR = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(COLOR, k);
	cout << "\n\t\t\t\t=======================================\n";
	cout << "\t\t\t\t   THANKYOU FOR PLAYING THE GAME \n";
	cout << "\t\t\t\t           HAVE A GOOD DAY ";
	cout << "\n\t\t\t\t=======================================\n";
	cout << "\t\t\t\t\t YOUR SCORE IS " << x << "/10";
	cout << "\n\t\t\t\t=======================================\n";
	return 0;
}

