% Facts
sing_a_song(kayla).
listens_to_music(bob).

% Rules
listens_to_music(kayla) :- sing_a_song(kayla).
happy(kayla) :- sing_a_song(kayla).
happy(bob) :- listens_to_music(bob).
plays_guitar(bob) :- listens_to_music(bob).