#!/usr/bin/env python

"""
1 Comment.
"""
FMT = "#!/usr/bin/env pyhton\n\n\"\"\"\n1 Comment.\n\"\"\"\nFMT = %r\nFILENAME = \"Grade_kid.py\"\nGRADE_PROGRAM = lambda f: f.write(FMT%%FMT)\n\nGRADE_PROGRAM(open(FILENAME, \"w\"))"
FILENAME = "Grace_kid.py"
GRADE_PROGRAM = lambda f: f.write(FMT%FMT)

GRADE_PROGRAM(open(FILENAME, "w"))