list_even_len([]).
list_even_len([_|Tail]) :- list_odd_len(Tail).

list_odd_len([_]).
list_odd_len([_|Tail]) :- list_even_len(Tail).



list_divide([],[],[]).

list_divide([X],[X],[]).

list_divide([X,Y|Tail], [X|List1],[Y|List2]) :-
   list_divide(Tail,List1,List2).


max_of_two(X,Y,X) :- X >= Y.
max_of_two(X,Y,Y) :- X < Y.

list_max_elem([X],X).

list_max_elem([X,Y|Rest],Max) :-
   list_max_elem([Y|Rest],MaxRest),
   max_of_two(X,MaxRest,Max).


list_sum([],0).
list_sum([Head|Tail], Sum) :-
   list_sum(Tail,SumTemp),
   Sum is Head + SumTemp.


mergesort([],[]).    
mergesort([A],[A]).
mergesort([A,B|R],S) :-
   split([A,B|R],L1,L2),
   mergesort(L1,S1),
   mergesort(L2,S2),
   merge(S1,S2,S).
   
split([],[],[]).
split([A],[A],[]).
split([A,B|R],[A|Ra],[B|Rb]) :-
   split(R,Ra,Rb).
merge(A,[],A).
merge([],B,B).
merge([A|Ra],[B|Rb],[A|M]) :-
   A =< B, merge(Ra,[B|Rb],M).
merge([A|Ra],[B|Rb],[B|M]) :-
   A > B, merge([A|Ra],Rb,M).