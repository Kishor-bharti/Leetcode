#include <iostream>
#include <string>
using namespace std;


bool isPalindromeRec(string& s, int left, int right) {
	        if (left >= right)
			                        return true;
		        if (s[left] != s[right])
				                        return false;
			        return isPalindromeRec(s, left + 1, right - 1);
}

bool isPalindrome(string& s) {
	            return isPalindromeRec(s, 0, s.size() - 1);
}

int main() {
	            string s = "abba";

		                    if (isPalindrome(s)) {
					                                    cout << "true" << endl;
									                                        }
				                        else {
								                                    cout << "false" << endl;
												                                            }

							                        return 0;
}
