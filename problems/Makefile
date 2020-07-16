# makefile

SOURCE_RN = ransom_note.cpp
SOURCE_TWONUM = add_two_numbers.cpp
SOURCE_TWOSUM = two_sum.cpp
SOURCE_FIRSTLAST = first_last_indices.cpp

CMD = $(CXX) $? -Wall -std=c++14

RN: $(SOURCE_RN)
	$(CMD) -o output/ransom_note
run_RN:
	output/ransom_note

TWONUM: $(SOURCE_TWONUM)
	$(CMD) -o output/add_two_numbers
run_TWONUM:
	output/add_two_numbers

TWOSUM: $(SOURCE_TWOSUM)
	$(CMD) -o output/two_sum
run_TWOSUM:
	output/two_sum

FIRSTLAST: $(SOURCE_FIRSTLAST)
	$(CMD) -o output/first_last_indices
run_FIRSTLAST:
	output/first_last_indices
