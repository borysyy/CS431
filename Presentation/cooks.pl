can_cook(jane).
can_cook(mary).
can_cook(amy).

likes(jane,mary) :- can_cook(mary).
likes(jane,amy) :- can_cook(amy).