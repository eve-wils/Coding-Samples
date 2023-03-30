#include <iostream>

using namespace std;

int main(){
	int months;
	double benchMax;
	double squatMax;
	double deadliftMax;
	char confirm;
	
	//introductory statements
	cout << "Welcome to the 5-3-1 Method Programmer!\n Is this your first time using this program? (y/n)\n";
	cout << "How many months would you like programming for?\n";
	cin >> months;
	cout << "You entered: " << months << " months.\n";
	
	//taking in bench max
	cout << "What is your current bench press max?\n";
	cin >> benchMax;
	//confirming bench max
	cout << "You entered: " << benchMax << " lbs. Is this correct? (y/n)\n";
	cin >> confirm;
	if(confirm == 'n'){
		cout << "What is your current bench press max?\n";
		cin >> benchMax;
		cout << "You entered: " << benchMax << " lbs.";
	}
	//taking in squat max
	cout << "What is your current squat max?\n";
	cin >> squatMax;
	//confirming squat max
	cout << "You entered: " << squatMax << " lbs. Is this correct? (y/n)\n";
	cin >> confirm;
	if(confirm == 'n'){
		cout << "What is your current squat max?\n";
		cin >> squatMax;
		cout << "You entered: " << squatMax << " lbs.";
	}
	//taking dead max
	cout << "What is your current deadlift max?\n";
	cin >> deadliftMax;
	//confirming dead max
	cout << "You entered: " << deadliftMax << " lbs. Is this correct? (y/n)\n";
	cin >> confirm;
	if(confirm == 'n'){
		cout << "What is your current deadlift max?\n";
		cin >> deadliftMax;
		cout << "You entered: " << deadliftMax << " lbs.";
	}
	
	double bMax = 0.9 * benchMax;
	double sMax = 0.9 * squatMax;
	double dMax = 0.9 * deadliftMax;
	
	int b1, b2, b3;
	int s1, s2, s3;
	int d1, d2, d3;
	for(int i = 1; i < months + 1; i++){
		if(i > 1){
			bMax += 5;
			sMax += 10;
			dMax += 10;
		}
		cout << "Month " << i << ": \n";
		
		//week 1 calculations
		
		//bench
		b1 = 0.65 * bMax;
		if(b1 % 5 > 2.5){
			b1 = b1 + (5 - (b1 % 5));
		} else if (b1 % 5 <= 2.5){
		   b1 = b1 - (b1 % 5);
		}
		b2 = 0.75 * bMax;
		if(b2 % 5 > 2.5){
			b2 += (5 - (b2 % 5));
		} else if (b2 % 5 <= 2.5){
		   b2 = b2 - (b2 % 5);
		}
		b3 = 0.85 * bMax;
		if(b3 % 5 > 2.5){
			b3 = b3 + (5 - (b3 % 5));
		} else if (b3 % 5 <= 2.5){
		   b3 = b3 - (b3 % 5);
		}
		
		//squats
		s1 = 0.65 * sMax;
		if(s1 % 5 > 2.5){
			s1 = s1 + (5 - (s1 % 5));
		} else if (s1 % 5 <= 2.5){
		   s1 = s1 - (s1 % 5);
		}
		s2 = 0.75 * sMax;
		if(s2 % 5 > 2.5){
			s2 += (5 - (s2 % 5));
		} else if (s2 % 5 <= 2.5){
		   s2 = s2 - (s2 % 5);
		}
		s3 = 0.85 * sMax;
		if(s3 % 5 > 2.5){
			s3 = s3 + (5 - (s3 % 5));
		} else if (s3 % 5 <= 2.5){
		   s3 = s3 - (s3 % 5);
		}
		
		//deads
		d1 = 0.65 * dMax;
		if(d1 % 5 > 2.5){
			d1 = d1 + (5 - (d1 % 5));
		} else if (d1 % 5 <= 2.5){
		   d1 = d1 - (d1 % 5);
		}
		d2 = 0.75 * dMax;
		if(d2 % 5 > 2.5){
			d2 += (5 - (d2 % 5));
		} else if (d2 % 5 <= 2.5){
		   d2 = d2 - (d2 % 5);
		}
		d3 = 0.85 * dMax;
		if(d3 % 5 > 2.5){
			d3 = d3 + (5 - (d3 % 5));
		} else if (d3 % 5 <= 2.5){
		   d3 = d3 - (d3 % 5);
		}
		
		//week 1 print statements
		cout << "Week 1: \n";
		cout << "          Set 1   Set 2   Set 3\n";
		cout << "(reps)      5       5       5  \n";
		cout << " squat     " << s1 << "     " << s2 << "     " << s3 << "\n";
		cout << " bench     " << b1 << "     " << b2 << "     " << b3 << "\n";
		cout << " deadlift " << d1 << "     " << d2 << "     " << d3 << "\n";
		
		//week 2
		//bench
		b1 = 0.7 * bMax;
		if(b1 % 5 > 2.5){
			b1 = b1 + (5 - (b1 % 5));
		} else if (b1 % 5 <= 2.5){
		   b1 = b1 - (b1 % 5);
		}
		b2 = 0.8 * bMax;
		if(b2 % 5 > 2.5){
			b2 += (5 - (b2 % 5));
		} else if (b2 % 5 <= 2.5){
		   b2 = b2 - (b2 % 5);
		}
		b3 = 0.9 * bMax;
		if(b3 % 5 > 2.5){
			b3 = b3 + (5 - (b3 % 5));
		} else if (b3 % 5 <= 2.5){
		   b3 = b3 - (b3 % 5);
		}
		
		//squats
		s1 = 0.7 * sMax;
		if(s1 % 5 > 2.5){
			s1 = s1 + (5 - (s1 % 5));
		} else if (s1 % 5 <= 2.5){
		   s1 = s1 - (s1 % 5);
		}
		s2 = 0.8 * sMax;
		if(s2 % 5 > 2.5){
			s2 += (5 - (s2 % 5));
		} else if (s2 % 5 <= 2.5){
		   s2 = s2 - (s2 % 5);
		}
		s3 = 0.9 * sMax;
		if(s3 % 5 > 2.5){
			s3 = s3 + (5 - (s3 % 5));
		} else if (s3 % 5 <= 2.5){
		   s3 = s3 - (s3 % 5);
		}
		
		//deads
		d1 = 0.7 * dMax;
		if(d1 % 5 > 2.5){
			d1 = d1 + (5 - (d1 % 5));
		} else if (d1 % 5 <= 2.5){
		   d1 = d1 - (d1 % 5);
		}
		d2 = 0.8 * dMax;
		if(d2 % 5 > 2.5){
			d2 += (5 - (d2 % 5));
		} else if (d2 % 5 <= 2.5){
		   d2 = d2 - (d2 % 5);
		}
		d3 = 0.9 * dMax;
		if(d3 % 5 > 2.5){
			d3 = d3 + (5 - (d3 % 5));
		} else if (d3 % 5 <= 2.5){
		   d3 = d3 - (d3 % 5);
		}
		
		//week 2 print statements
		cout << "Week 2: \n";
		cout << "          Set 1   Set 2   Set 3\n";
		cout << "(reps)      3       3       3  \n";
		cout << " squat     " << s1 << "     " << s2 << "     " << s3 << "\n";
		cout << " bench     " << b1 << "     " << b2 << "     " << b3 << "\n";
		cout << " deadlift " << d1 << "     " << d2 << "     " << d3 << "\n";
		
		//week 3
		//bench
		b1 = 0.75 * bMax;
		if(b1 % 5 > 2.5){
			b1 = b1 + (5 - (b1 % 5));
		} else if (b1 % 5 <= 2.5){
		   b1 = b1 - (b1 % 5);
		}
		b2 = 0.85 * bMax;
		if(b2 % 5 > 2.5){
			b2 += (5 - (b2 % 5));
		} else if (b2 % 5 <= 2.5){
		   b2 = b2 - (b2 % 5);
		}
		b3 = 0.95 * bMax;
		if(b3 % 5 > 2.5){
			b3 = b3 + (5 - (b3 % 5));
		} else if (b3 % 5 <= 2.5){
		   b3 = b3 - (b3 % 5);
		}
		
		//squats
		s1 = 0.75 * sMax;
		if(s1 % 5 > 2.5){
			s1 = s1 + (5 - (s1 % 5));
		} else if (s1 % 5 <= 2.5){
		   s1 = s1 - (s1 % 5);
		}
		s2 = 0.85 * sMax;
		if(s2 % 5 > 2.5){
			s2 += (5 - (s2 % 5));
		} else if (s2 % 5 <= 2.5){
		   s2 = s2 - (s2 % 5);
		}
		s3 = 0.95 * sMax;
		if(s3 % 5 > 2.5){
			s3 = s3 + (5 - (s3 % 5));
		} else if (s3 % 5 <= 2.5){
		   s3 = s3 - (s3 % 5);
		}
		
		//deads
		d1 = 0.75 * dMax;
		if(d1 % 5 > 2.5){
			d1 = d1 + (5 - (d1 % 5));
		} else if (d1 % 5 <= 2.5){
		   d1 = d1 - (d1 % 5);
		}
		d2 = 0.85 * dMax;
		if(d2 % 5 > 2.5){
			d2 += (5 - (d2 % 5));
		} else if (d2 % 5 <= 2.5){
		   d2 = d2 - (d2 % 5);
		}
		d3 = 0.95 * dMax;
		if(d3 % 5 > 2.5){
			d3 = d3 + (5 - (d3 % 5));
		} else if (d3 % 5 <= 2.5){
		   d3 = d3 - (d3 % 5);
		}
		
		//week 3 print statements
		cout << "Week 3: \n";
		cout << "          Set 1   Set 2   Set 3\n";
		cout << "(reps)      5       3       1  \n";
		cout << " squat     " << s1 << "     " << s2 << "     " << s3 << "\n";
		cout << " bench     " << b1 << "     " << b2 << "     " << b3 << "\n";
		cout << " deadlift " << d1 << "     " << d2 << "     " << d3 << "\n";
		
		//week 4
		//bench
		b1 = 0.40 * bMax;
		if(b1 % 5 > 2.5){
			b1 = b1 + (5 - (b1 % 5));
		} else if (b1 % 5 <= 2.5){
		   b1 = b1 - (b1 % 5);
		}
		b2 = 0.50 * bMax;
		if(b2 % 5 > 2.5){
			b2 += (5 - (b2 % 5));
		} else if (b2 % 5 <= 2.5){
		   b2 = b2 - (b2 % 5);
		}
		b3 = 0.60 * bMax;
		if(b3 % 5 > 2.5){
			b3 = b3 + (5 - (b3 % 5));
		} else if (b3 % 5 <= 2.5){
		   b3 = b3 - (b3 % 5);
		}
		
		//squats
		s1 = 0.4 * sMax;
		if(s1 % 5 > 2.5){
			s1 = s1 + (5 - (s1 % 5));
		} else if (s1 % 5 <= 2.5){
		   s1 = s1 - (s1 % 5);
		}
		s2 = 0.5 * sMax;
		if(s2 % 5 > 2.5){
			s2 += (5 - (s2 % 5));
		} else if (s2 % 5 <= 2.5){
		   s2 = s2 - (s2 % 5);
		}
		s3 = 0.6 * sMax;
		if(s3 % 5 > 2.5){
			s3 = s3 + (5 - (s3 % 5));
		} else if (s3 % 5 <= 2.5){
		   s3 = s3 - (s3 % 5);
		}
		
		//deads
		d1 = 0.4 * dMax;
		if(d1 % 5 > 2.5){
			d1 = d1 + (5 - (d1 % 5));
		} else if (d1 % 5 <= 2.5){
		   d1 = d1 - (d1 % 5);
		}
		d2 = 0.5 * dMax;
		if(d2 % 5 > 2.5){
			d2 += (5 - (d2 % 5));
		} else if (d2 % 5 <= 2.5){
		   d2 = d2 - (d2 % 5);
		}
		d3 = 0.6 * dMax;
		if(d3 % 5 > 2.5){
			d3 = d3 + (5 - (d3 % 5));
		} else if (d3 % 5 <= 2.5){
		   d3 = d3 - (d3 % 5);
		}
		
		//week 4 print statements
		cout << "Week 4: \n";
		cout << "          Set 1   Set 2   Set 3\n";
		cout << "(reps)      5       5       5  \n";
		cout << " squat     " << s1 << "     " << s2 << "     " << s3 << "\n";
		cout << " bench     " << b1 << "     " << b2 << "     " << b3 << "\n";
		cout << " deadlift " << d1 << "     " << d2 << "     " << d3 << "\n";
	}
	return 0;
}

