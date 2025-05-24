Python 3.12.6 (tags/v3.12.6:a4a2d2b, Sep  6 2024, 20:11:23) [MSC v.1940 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
9**7
4782969
9***6
SyntaxError: invalid syntax
9**2**3
43046721
9**8
43046721
A = "College"
B = "ABES"
C = {"College" , "ABES"}
D = {"College" , "ABES"}
E = C
print (C is E)
True
print (D is C)
False
print ( A&&B is C)
SyntaxError: invalid syntax
print (A&B is C)
Traceback (most recent call last):
  File "<pyshell#12>", line 1, in <module>
    print (A&B is C)
TypeError: unsupported operand type(s) for &: 'str' and 'str'
print ( C==D )
True
print (E==C)
True
while ( 1 )
SyntaxError: expected ':'
for i in (1,10):
    print ("
           
SyntaxError: unterminated string literal (detected at line 2)
for i in (1,10)
           
SyntaxError: expected ':'
for i in (1,10):
           print (i)

           
1
10
for i in range (1,10):
           print (i)

           
1
2
3
4
5
6
7
8
9
>>> for i in (1,2,3,4,5,6,7,8,11):
...            print(i)
... 
...            
1
2
3
4
5
6
7
8
11
>>> for i in range (1,100)
...            
SyntaxError: expected ':'
>>> for i in range (1,100):
...            print(i)
...            if (i==5):
...                    continue
... 
...                 
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
