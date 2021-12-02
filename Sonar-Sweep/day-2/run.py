def solvePart1():
	s = []

	with open("input.txt", "r") as f:
		s = f.readlines()


	forward = 0;
	up = 0;
	down = 0;


	for i in s:
		if "forward" in i:
			forward += int(i[-2])

		if "up" in i:
			up += int(i[-2])

		if "down" in i:
			down += int(i[-2])

	print(forward*abs(down-up))


def solvePart2():
	s = []

	with open("input.txt", "r") as f:
		s = f.readlines()


	forward = 0;
	up = 0;
	down = 0;
	aim = 0;
	depth = 0;


	for i in s:
		if "forward" in i:
			x = int(i[-2])
			forward += x
			depth += aim*x


		if "up" in i:
			x = int(i[-2])
			aim -= x

		if "down" in i:
			x = int(i[-2])
			aim += x 


	print(forward*depth)


solvePart2()