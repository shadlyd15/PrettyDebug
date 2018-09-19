for number in range(50):
	print("ADD_TINY_TEST(test_" + str(number) + "){")
	print("	int i = rand()%50;")
	print("	ASSERT_TEST_RESULT(i != " + str(number + 1) + ");")
	# print("	ASSERT_TEST_RESULT(i != " + str(number + 2) + ");")
	# print("	ASSERT_TEST_RESULT(i != " + str(number + 3) + ");")
	# print("	ASSERT_TEST_RESULT(i != " + str(number + 4) + ");")
	# print("	ASSERT_TEST_RESULT(i != " + str(number + 5) + ");")
	# print("	ASSERT_TEST_RESULT(i != " + str(number + 6) + ");")
	# print("	ASSERT_TEST_RESULT(i != " + str(number + 7) + ");")
	# print("	ASSERT_TEST_RESULT(i != " + str(number + 8) + ");")
	# print("	ASSERT_TEST_RESULT(i != " + str(number + 9) + ");")
	# print("	ASSERT_TEST_RESULT(i != " + str(number + 10) + ");")
	print("}\r\n")

# for number in range(50):
# 	print("	RUN_TINY_TEST(test_" + str(number) + ");")