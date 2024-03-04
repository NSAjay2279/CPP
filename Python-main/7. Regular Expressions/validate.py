import re

email = "HAVARD@HAVARD.EDU".strip().lower()

if re.search(r"^\w+@\w+\.edu$", email):
    print("Valid")
else:
    print("Invalid"