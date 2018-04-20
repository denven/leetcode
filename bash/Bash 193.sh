# Bash 193
# Read from the file file.txt and output all valid phone numbers to stdout.

#!/bin/bash
echo "987-123-4567" > file.txt
echo "123 456 7890" >> file.txt
echo "(123) 456-7890" >> file.txt

grep '[0-9][0-9][0-9][-| ][0-9][0-9][0-9][-| ][0-9][0-9][0-9][0-9]' file.txt

