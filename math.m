:- module
:- func sum(list(int))=int.
:- mode sum(in) = out is det.
sum([])=0.
sum([X|T]) = X+sum(T).