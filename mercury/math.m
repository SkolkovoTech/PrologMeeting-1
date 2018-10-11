:- module math.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module int.
:- import_module list, string.


% :- pred fib(int::in, int::out) is det.
% fib(N,X):- (if N =< 2
%             then X = 1
%             else fib(N-1,A), fib(N-2,B), X=A+B
%             ).

:- func fib(int) = int.
fib(N) :- (if N =< 2 then 1 else fib(N-1) + fib(N-2)).

main(!IO):-
            io.read_line_as_string(Result, !IO),
            ( if
                Result = ok(String),
                string.to_int(string.strip(String), N)
              then
                io.format("fib(%d) = %d\n", [i(N), i(fib(N))], !IO)
              else
                io.format("That's not a number...\n", [], !IO)
            ).
            % fib(17,X),
            % io.write_string("fib(17,", !IO),
            % io.write_int(X,!IO),
            % io.write_string(")\n", !IO).
            % io.write_string("fib2(10) =", !IO),
            % io.write_int(fib2(10), !IO),
            % io.nl(!IO).

% :- func sum(list(int))=int.
% :- mode sum(in) = out is det.

% sum([])=0.
% sum([X|T]) = X+sum(T). 
