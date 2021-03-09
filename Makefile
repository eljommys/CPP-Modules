MSG = default commit message

all:
	git add .
	git commit -m "$(MSG)"
	git push
