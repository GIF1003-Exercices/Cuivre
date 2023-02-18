# Cuivre: démo pour la non-redondance des opérateurs dans les classes dérivées

## Structure du projet

Le projet comporte une classe abstraite Cuivre, de laquelle est dérivée une classe instantiable Tuba.

La classe Cuivre a comme attribut un tableau de trois pistons.  La classe Tuba a en plus un attribut sourdine.

L'opérateur de comparaison est défini dans la classe abstraite sur la base de la comparaison des trois pistons.

L'opérateur de comparaison dans la classe Tuba peut être défini, ou non.  S'il n'est pas défini, il hérite simplement de l'opérateur
de la classe de base, et seuls les pistons sont comparés.  Sinon, il peut aussi être défini pour rajouter la comparaison de la sourdine.  Dans ce cas, on voit qu'on peut quand même utiliser l'opérateur de base afin d'éviter de dupliquer inutilement des lignes de code.

Les différentes possibilités sont illustrées dans le programme principal et on peut expérimenter en mettant en commentaires
la définition de Tuba::operator == () afin de voir la différence de comportement.
