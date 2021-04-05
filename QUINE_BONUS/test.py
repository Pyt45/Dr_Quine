#!/usr/bin/env python

import types
import sys

"""
1 Comment.
"""
FMT = "#!/usr/bin/env pyhton\n\n\"\"\"\n1 Comment.\n\"\"\"\n\nFMT = %r\nprint(FMT%%FMT)"
z = 5
# GRADE_KID = compile(f'print({FMT})', 'Grace.py', 'exec')
# GRADE_PROGRAM = types.FunctionType(GRADE_KID, globals())
# GRADE_KID = lambda fmt: print(fmt%fmt)
# GRADE_PROGRAM(FMT)

if __name__ == '__main__':
	with open("Grade_kid.py", "w") as fd:
	# 	original_stdout = sys.stdout
	# 	sys.stdout = fd
		# print(FMT%FMT)
		# GRADE_KID(FMT)
	# GRADE_PROGRAM()
		# sys.stdout = original_stdout
	# fd.close()