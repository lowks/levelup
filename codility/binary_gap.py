def solution(N):
	istring = bin(N)[2:]
	sequences = istring.rstrip('0').lstrip('0').split('1')
	if sequences:
		return len(max(sequences))
	else:
		return 0