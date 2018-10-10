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

/*от 1 до 10 a^2 + b^2 = c^2 */
solve(A, B, C) :-
    for(A, 1, 10),
    for(B, 1, 10),
    for(C, 1, 10),
    A*A+B*B=:=C*C.