def factorial (number):
	if number == 0 or number == 1:
		return 1
	else:
		return number * factorial(number -1)
def exp_x(x,n):
	get_abs_term = lambda val,index:(val ** (2 * index )) / factorial(2* index)
	total = 0
	for i in range (n):
		term = get_abs_term (x,i)
		if  i % 2 == 1:
			total -= term
		else :
			total += term
	return total
grand_total = 0

def calculate_geometry_sum(n, r):
    global grand_total
    if n == 0:
        grand_total = grand_total + 1
    else:
        term_value = r ** n
        grand_total = grand_total + term_value
        calculate_geometry_sum(n - 1, r)


def main ():
	print(factorial(5))
	user_x = float(input("Enter x value: "))
	user_n = int(input("Enter number of terms: "))
	print(exp_x(user_x, user_n))
	input_n = int(input("Enter n limit: "))
	input_r = float(input("Enter r ratio: "))
	calculate_geometry_sum(input_n, input_r)
	print(grand_total)
if __name__ == "__main__":
	main()
