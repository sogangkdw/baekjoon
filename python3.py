print("***** 문제3 *****")
tel=input()
new_tel=tel[:3]+'-'+tel[3:7]+'-'+tel[7:]
print("(전화번호 형식) {}".format(new_tel))