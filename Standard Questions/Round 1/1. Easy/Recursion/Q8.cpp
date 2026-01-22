//Given a number n, the task is to return the count of digits in this number.
class Solution{
public:
	int countDigi(int n){
		if(n%10 == n) return 1;
		
		return 1 + countDigi(n/10);
	}
};
/*
Best practice version (robust)
int countDigi(int n){
    if(n < 0) n = -n;   // handle negatives
    if(n < 10) return 1;
    return 1 + countDigi(n / 10);
}
*/

/*
💡 Even clearer base case
int countDigi(int n){
    if(n == 0) return 1;
    n = abs(n);
    if(n < 10) return 1;
    return 1 + countDigi(n / 10);
}
*/