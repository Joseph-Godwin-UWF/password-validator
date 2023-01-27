passwordValidator: passwordValidator.c
	gcc -o pwValidator passwordValidator.c

clean: 
	rm pwValidator
