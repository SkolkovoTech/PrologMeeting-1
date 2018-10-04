factorial(1, 1).
factorial(N, R) :-
    N1 is N-1,
    factorial(N1, R1),
    R is R1*N.

digit_sum(Number, Sum) :-
    Number<10, !,
    Sum is Number.
digit_sum(Number, Sum) :-
    Digit is Number mod 10,
    NumberPart is Number div 10,
    digit_sum(NumberPart, SumPart),
    Sum is SumPart+Digit.