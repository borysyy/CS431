list_even_len([]).
list_even_len([Head|Tail]) :- list_odd_len(Tail).

list_odd_len([_]).
list_odd_len([Head|Tail]) :- list_even_len(Tail).


list_divide([],[],[]).

list_divide([X],[X],[]).

list_divide([X,Y|Tail], [X|List1],[Y|List2]) :-
   list_divide(Tail,List1,List2).