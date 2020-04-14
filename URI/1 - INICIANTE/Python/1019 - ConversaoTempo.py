s = int(input())

print('{}:{}:{}'.format(s//3600, (s - (3600*(s//3600)))//60,s%60))