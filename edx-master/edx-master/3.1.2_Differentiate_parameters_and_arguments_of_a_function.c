#include <stdio.h>
int sum(int x, int y){ //x and y are PARAMETERS here
    int compute;
    printf("Starting the computation!\n");
    compute = x + y;
    printf("Finished the computation successfully!\n");
    return compute;
}
int main(void) {
    int a, b;
    int result;
    printf("Please enter two integers: ");
    scanf("%d%d", &a, &b);
    printf("You entered %d and %d.\n", a, b);
    result = sum(a, b);//a and b are ARGUMENTS here
    printf("Result of the sum = %d.\n", result);
    return 0;
}

Explanation:
1
00:00:00,000 --> 00:00:01,210


2
00:00:01,210 --> 00:00:04,880
PROFESSOR: So you already know how to
define a function, like the function

3
00:00:04,880 --> 00:00:09,430
sum here, and how to call
a function, like here.

4
00:00:09,430 --> 00:00:14,500
You call a function sum, and you
get the result in a variable.

5
00:00:14,500 --> 00:00:21,310
Well, I will explain now how
you pass values using arguments

6
00:00:21,310 --> 00:00:25,720
and how you receive the
values using parameters.

7
00:00:25,720 --> 00:00:31,180
So I will explain the difference
between arguments and parameters.

8
00:00:31,180 --> 00:00:36,010
When you call a function, like here,
you have the name of the function.

9
00:00:36,010 --> 00:00:39,940
And you have variables,
like a and b here.

10
00:00:39,940 --> 00:00:44,200
Well, these are called arguments.

11
00:00:44,200 --> 00:00:44,710
Why?

12
00:00:44,710 --> 00:00:47,620
Because you don't have
the type definition.

13
00:00:47,620 --> 00:00:50,530
a and b are just passed like this.

14
00:00:50,530 --> 00:00:53,690
And the type is defined before.

15
00:00:53,690 --> 00:00:57,400
So what happens here is
you copy the value of a,

16
00:00:57,400 --> 00:01:00,160
and you copy the value of b.

17
00:01:00,160 --> 00:01:02,110
Where do you copy those values?

18
00:01:02,110 --> 00:01:03,190
Where?

19
00:01:03,190 --> 00:01:10,360
Well, in the parameters x and y here.

20
00:01:10,360 --> 00:01:15,140
And here, x and y are parameters.

21
00:01:15,140 --> 00:01:20,110
So the main difference is that for
arguments, you call a function.

22
00:01:20,110 --> 00:01:22,060
You don't have the type definition.

23
00:01:22,060 --> 00:01:25,570
You just put the name of
the variables a and b.

24
00:01:25,570 --> 00:01:27,760
Those are arguments.

25
00:01:27,760 --> 00:01:31,480
When you call a function,
you copy the value

26
00:01:31,480 --> 00:01:38,320
of the arguments into
the parameters x and y.

27
00:01:38,320 --> 00:01:43,480
So here, as you can see, for parameters,
you have the type definition.

28
00:01:43,480 --> 00:01:45,640
x is of type integer.

29
00:01:45,640 --> 00:01:48,400
y is of type integer.

30
00:01:48,400 --> 00:01:54,670
And those are the parameter's
definition for the function definition.

31
00:01:54,670 --> 00:02:02,570
You also have the type of the
return value of the function.

32
00:02:02,570 --> 00:02:06,580
So the sum function
will return an integer.

33
00:02:06,580 --> 00:02:10,240
So always remember, when
you call a function,

34
00:02:10,240 --> 00:02:13,810
you give the function arguments.

35
00:02:13,810 --> 00:02:17,620
And these arguments don't
need the type definition.

36
00:02:17,620 --> 00:02:23,710
a and b are already of type integer,
because we already defined a and b

37
00:02:23,710 --> 00:02:25,250
just here.

38
00:02:25,250 --> 00:02:30,400
But for the function definition,
just here, you define parameters.

39
00:02:30,400 --> 00:02:35,920
And for the parameters x
and y, you put the types.

40
00:02:35,920 --> 00:02:38,540
When you call the
function, remember that you

41
00:02:38,540 --> 00:02:45,820
copy the value of the arguments a and
b, so the value of a and the value of b,

42
00:02:45,820 --> 00:02:50,260
into the parameters x and y.

43
00:02:50,260 --> 00:02:51,010
That's it.

44
00:02:51,010 --> 00:02:56,780
You know the difference between
arguments and parameters.

45
00:02:56,780 --> 00:02:57,367

