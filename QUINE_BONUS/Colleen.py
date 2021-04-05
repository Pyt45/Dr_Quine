#!/usr/bin/env python

# 1 Comment.

def colleen(s):
	print(s%s)

if __name__ == '__main__':
	s = "#!/usr/bin/env python\n\n# 1 Comment.\n\ndef colleen(s):\n\tprint(s%%s)\n\nif __name__ == '__main__':\n\ts = %r\n\t# 2 Comment.\n\tcolleen(s)"
	# 2 Comment.
	colleen(s)