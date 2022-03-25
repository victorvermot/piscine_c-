./bank > test.txt
cat test.txt | awk '{print $2}' > test2.txt
cat example.txt | awk '{print $2}' > test3.txt
diff test2.txt test3.txt