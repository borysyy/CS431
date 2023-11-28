different(X, X) :- !, fail.
different(X, Y).

% OR

different(X, Y) :- X = Y, !, fail ; true.
