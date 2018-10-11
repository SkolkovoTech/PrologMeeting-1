:- module crypto.

:- interface.
:- import_module io.
:- pred main(io::di, io::uo) is det.
:- implementation.

:- import_module char, list, string.

main(!IO) :-
            io.read_char(Result, !IO),
            (
                Result = ok(Char),
                io.write_char(crypto(Char), !IO),
                main(!IO)
            ;
                Result = eof
            ;
                Result = error(ErrorCode),
                io.format("%s\n", [s(io.error_message(ErrorCode))], !IO)
            ).

:- func crypto(char) = char.
                crypto(Char) = ( if Char = 'a' then 'n'
                else if Char = 'b' then 'o'
                else if Char = 'z' then 'm'
                else if Char = 'A' then 'N'
                else if Char = 'B' then 'O'
                else if Char = 'Z' then 'M'
                else Char
                ).