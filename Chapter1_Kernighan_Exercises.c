//Exercise 1-8: Write a program to count blanks, tabs, and newlines. 
/*int main()
{
	int c, nl; 
	nl = 0; 
	while ((c = getchar()) != EOF)
		if (c == '\n','\t','_')
			++nl;
		
	printf("%d\n", nl); 
}*/

//Exercise 1-9: Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank

/*int main(void)
{
	int c;
	while ((c = getchar()) != EOF) {
		putchar(c);
		if (c == ' ') {
			while ((c = getchar()) == ' ');
			putchar(c);
		}
	}
}*/

//Exercise 1-10: Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\
//This makes backspaces visible in an unambiguous way. 
/*#include <stdio.h>
int main(void) 
{
	char c; 
	 
	while ((c = getchar()) != EOF) {
		putchar(c); 
		if (c == '\t') {
			putchar('\\');
			putchar('t'); 
		}
		else if (c == '\b') {
			putchar('b'); 
		}
		else if (c == '\\') {
			putchar('\\'); 
		}


	}
	return 0; 
}*/

//Program to count lines, words, and characters
/*
#include <stdio.h>

#define IN 1 
#define OUT 0

main()
{
	int c, nl, nw, nc, state; 
	state = OUT; 
	nl = nw = nc = 0; 
	while ((c = getchar()) != EOF) {
		++nc; 
		if (c == '\n')
			++nl; 
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT; 
		else if (state == OUT) {
			state = IN; 
			++nw; 
		}
	}
	printf("%d %d %d\n", nl, nw, nc); 
}*/

//Exercise 1-12: Write a program that prints its input one word per line
/*
#include <stdio.h>

main()
{
	int c; 
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar('\n'); 
		}
		else 
			putchar(c);
		
		
	}
} */ 

// 1.6 Arrays Page 22
/*
#include <stdio.h>

main()
{
	int c, i, nwhite, nother; 
	int ndigit[10]; 

	nwhite = nother = 0; 

	for (i = 0; i < 10; ++i)
		ndigit[i] = 0; 

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother; 

	printf("digits =");
		for (i = 0; i < 10; ++i)
			printf(" %d", ndigit[i]); 
		printf(", white space = %d, other = %d\n", nwhite, nother);
}*/

//Exercise 1-13 Write a program to print a histogram of the lengths of words in its input. 
//read user input into a character array
//iterate through the character array and print something everytime you see a word 
//iterate through the character array and print something everytime you see a word 
// iterate through the character array and increment a counter everytime you see a word. 
/*#include <stdio.h> 

int main()
{
	int max_length = 10;
	// stores the current char we read
	int c;
	// stores the index of the current char
	int idx, idx_of_last_space;
	idx = 0;
	idx_of_last_space = -1;

	// nLength[2] is the number of words of length 2 
	int nLengths[10];

	for (int arr_idx = 0; arr_idx < max_length; arr_idx++) {
		nLengths[arr_idx] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			int word_length = idx - idx_of_last_space - 1;
			idx_of_last_space = idx;
			printf("Word of length %d\n", word_length);

			++nLengths[word_length];
			// if (word_length == 1) {
			//   ++nLengths[1];
			// } else if (word_length == 2) {
			//   ++nLengths[2];
			// } else if (word_length == 3) {
			//   ++nLengths[3];
			// } else if (word_length == 4) {
			//   ++nLengths[4];
			// } else if (word_length == 5) {
			//   ++nLength5;
			// }

		}
		++idx;
		printf("%d %c\n", idx, c);
	}
	// printf("# words of length 1: %d\n", nLength1);
	// printf("# words of length 2: %d\n", nLength2);
	// printf("# words of length 3: %d\n", nLength3);
	// printf("# words of length 4: %d\n", nLength4);
	// printf("# words of length 5: %d\n", nLength5);
	for (int arr_idx = 0; arr_idx < max_length; arr_idx++) {
		printf("# words of length %d: %d\n", arr_idx, nLengths[arr_idx]);
	}

	return 0;
}*/
/*
#include <stdio.h> 

int main()
{
	int max_length = 10;
	// stores the current char we read
	int c;
	// stores the index of the current char
	int idx, idx_of_last_space;
	idx = 0;
	idx_of_last_space = -1;

	// nLength[2] is the number of words of length 2 
	int nLengths[10];

	for (int arr_idx = 0; arr_idx < max_length; arr_idx++) {
		nLengths[arr_idx] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			int word_length = idx - idx_of_last_space - 1;
			idx_of_last_space = idx;
			printf("Word of length %d\n", word_length);

			++nLengths[word_length];
			// if (word_length == 1) {
			//   ++nLengths[1];
			// } else if (word_length == 2) {
			//   ++nLengths[2]; 
			// } else if (word_length == 3) {
			//   ++nLengths[3];
			// } else if (word_length == 4) {
			//   ++nLengths[4];
			// } else if (word_length == 5) {
			//   ++nLength5;
			// }

		}
		++idx;
		printf("%d %c\n", idx, c);
	}
	// printf("# words of length 1: %d\n", nLength1);
	// printf("# words of length 2: %d\n", nLength2);
	// printf("# words of length 3: %d\n", nLength3);
	// printf("# words of length 4: %d\n", nLength4);
	// printf("# words of length 5: %d\n", nLength5);
	for (int arr_idx = 0; arr_idx < max_length; arr_idx++) {
		printf("# words of length %d:", arr_idx);
		for (int j = 0; j < nLengths[arr_idx]; ++j) {
			printf("*");
		}
			printf("\n"); 
		
	}

	return 0;
}*/ 

//Exercise 1-14 Write a program to print a histogram of the frequencies of different characters 
//in its input. 
/*
#include <stdio.h>
#define MAXLENGTH 100

int main() {
	// get a character from the user
	// print 0 if it is 'a' (97)
	//       1 if it is b   (98)
	//       2 if it is c   (99)
	//       3 if it is d   (100)
	//       4 if it is e
	//       -1 if not between 'a'-'z'
	// getchar(), scanf
	// 97->0, 98->1, 99->2
	// 97 - 97 -> 0
	// 98 - 97 -> 1
	// 99 - 97 -> 2
	int var1;
	int nChar[MAXLENGTH];
	// int thing_to_print = 5; // not being used

	//printf("we got character %c %d\n", var1, var1);

	int num_for_a = 'a';

	for (int arr_idx = 0; arr_idx < 26; arr_idx++) {
		nChar[arr_idx] = 0;
	}
	while ((var1 = getchar()) != EOF) {
		if (var1 >= num_for_a && var1 <= 'z') {
			int thing_to_print = var1 - 'a';// 'b' - 'a'
			++nChar[thing_to_print];

			printf("%d\n", thing_to_print);
		}
		else {
			printf("-1\n");

		}

	}


	for (int arr_idx = 'a'; arr_idx <= 'z'; arr_idx++) {
		printf("# of iterations for character %c: ", arr_idx);
		// printf("  indexing into nChar with %d\n", thing_to_print);
		// printf("  for-loop iterates %d times\n", nChar[thing_to_print]);
		int newvar = arr_idx - 'a';
		for (int j = 0; j < nChar[newvar]; ++j) {
			printf("*");
		}

		printf("\n");
	}
	
	1st:
	  var1: holds the last character we read
	  nChar: array that holds # 'a's at index 0, # 'b's at index 1, etc
	  arr_idx: holds 97
	  -> goal: index into nChar with 0

	2nd:
	  var1: holds the last character we read
	  nChar: array that holds # 'a's at index 0, # 'b's at index 1, etc
	  arr_idx: holds 98
	  -> goal: index into nChar with 1

	3rd:
	  var1: holds the last character we read
	  nChar: array that holds # 'a's at index 0, # 'b's at index 1, etc
	  arr_idx: holds 99
	  -> goal: index into nChar with 2
	

	// nChar[0] stores # 'a's I've read
	// Want to see:
	//  indexing into nCHar with [0, 1, 2, 3, 4, ...]


	return 0;
}



	
	

	// char c = 'a'; // represented as a 1 byte integer
	// printf("%c == %d\n", c, c);
	// int num = c;  // represented as a 4-byte integer, 2-byte integer
	// printf("num is %d\n", num);
	// if (c == num) {
	//   printf("things equal\n");
	// }
	// printf("size of char %ld\n", sizeof(char));
	// printf("size of int %ld\n", sizeof(int));
	// printf("size of double %ld\n", sizeof(double));*/ 

//Exercise 1.7 Functions page 24 
/*#include <stdio.h>

int power(int m, int n); 

main()
{
	int i; 

	for (i = 0; i < 9; ++i)
		printf("%d %d %d\n", i, power(2, i), power(-3, i)); 
	return 0; 

}

int power(int base, int n) {
	int i, p; 

	p = 1; 
	for (i = 1; i <= n; ++i)
		p = p * base; 
	return p; 
}
*/ 

//Zhang ex. 1 using a for loop, print the squares of 1, ... N (for N = 10) 
/*#include <stdio.h>
int square(int x); 
int main()
{
	for (int i = 0; i < 11; ++i) {
		 
		printf("%d squared is %d\n", i, square(i)); 
		
	} 
	return 0; 
}
int square(int base)
{
	int i, p;  
	//for (i = 0; i <= 11; ++i)
		p = base * base; 
	return p; 
}*/ 
//Zhang ex. 2 using a for loop, calculate the exponent 2^12 and print your result at the end. 
/*#include <stdio.h> 

int squared(int x, int y); 
int main()
{
	int i = 12; 
			printf("2 to the power of %d is %d\n", i, squared(2, i));
	return 0; 

}

int squared(int base, int n)
{
	int p; 
	p = 1; 
	for (int i = 1; i <= n; ++i)
	{
		p = p * base;
	}
	return p;
}*/
//Zhang ex. 3 print out all odd numbers from 1 to N (for N = 50)
/*#include <stdio.h>

int odd(int x); 

int main() {
	printf("All odd numbers from 1 through 50 are: \n");
	for (int i = 1; i <= 50; ++i) {
		int rem1 = i % 2; 
		if (rem1 == 0)
		{
			continue; 
		}
		printf("%d\n", i);
	}
	return 0; 
} 

/*int odd(int base)
{
	int p; 
	int rem; 
	rem = base % 2; 
	if (rem != 0) {
		return base;
	}
	
	
	 
	
} */
//Exercise 1-15 Kernighan rewrite the temperature conversion program of section 1.2 to use a 
//function for conversion
/*#include<stdio.h>

float celsius(int x);
int main()
{
	int fahr; 
	for (int fahr = 0; fahr <= 300; ++fahr) {
		printf("%d %f\n", fahr, celsius(fahr)); 
	}
}

float celsius(int base)
{
	int num = 32.00; 
	double n; 
	n = ((5.0 / 9.0) * (base - num)); 
		return n; 
}*/

// Exercise 1.16 Revise the main routine of the longest line program so it will correctly 
// print the length of arbitrarily long input lines, and as much as possible of the text. 
//#include <stdio.h>
//#define MAXLINE 1000
//
//int getline(char line[], int maxline); 
////void copy(char to[], char from[]); 
//
//int main()
//{
//	int len; // current line length
//	int max; //max length 
//	char line[MAXLINE]; //current input line
//	char longer[MAXLINE];//longest line saved here
//
//	max = 10;
//	while ((len = getline(line, MAXLINE)) > 0) {
//
//		if (len > max)
//		{
//			copy(longer, line); 
//			printf("%d", longer); 
//		}
//		if (max > 0)
//		{
//			printf("%s", longer); 
//		}
//		
//	}
//}/*
//	int getline(char s[], int lim) {
//		int c, i;
//
//		for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//			s[i] = c;
//		if (c == '\n') {
//			s[i] = c;
//			++i;
//		}
//		s[i] = '\0';
//		return i;
//	}
//
//
//void copy(char to[], char from[])
//{
//	int i; 
//
//	i = 0; 
//	while ((to[i] = from[i]) != '\0')
//		++i; 
//}*/

#include <stdio.h>

int main(void)
{
	int num1 = 0, denom1, num2, denom2, result_num, result_denom; 

	printf("Enter first fraction: "); 
	scanf("%d/%d",&num2,&denom1); 

	printf("Enter second fraction: "); 
	scanf("%d/%d",&num2,&denom2); 

	result_num = num1 * denom2 + num2 * denom1; 

	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom); 

	return 0; 
}
	
