  bool isHappy(int n) {
	if (n == 1) return true;
	else if (n == 4) return false;
	else return isHappy(digitSqSum(n));
}	
