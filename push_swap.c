/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:10:46 by amary             #+#    #+#             */
/*   Updated: 2025/12/19 15:09:03 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
Pour chaque element je dois verifier dans cette ordre precis :

	- Faire un split sur l'argument (s'il y'en a plusieurs d'en 1 ca retournera tous les arguments separé)
	- On verifie le format ( Si c'est pas un "+-5" || "++5" || "+9-" ||  etc...) sinon "Error\n"
	- Je convertie en long a l'aide de atoi_modifie je verifie "INT_MAX" et je les stocks dans un tableau de long
	- Je verifie ensuite une fois que le tableau est remplis que mon tableau ne possede pas de doublon sinon "Error\n"
	- Je push ensuite chaque element 1 par 1 dans ma stack A et je free ensuite le tableau de int
*/

int	ft_verif(char **argv, int *tab, int tab_size)
{
	int		j; // Pour compter le nombre d'argument
	int		k; // Pour naviguer dans le **tmp
	char	**tmp; // Pour stocker les arguments avec le split (a chaque fin d'appel on doit tous free a l'interieur)

	// Ici je dois faire le parsing

	return (1);
}

void	ft_push_swap(int argc, char **argv)
{
	int	j;
	int	size;
	int	*tab;

	j = 0;
	size = ft_arg_len(argc, argv); 
	tab = malloc(size * sizeof(int));
	if (!tab)
		return ;
	ft_verif(argv, tab, size);// Ici je dois verifier pour chaque argument sa validité
}

int main(int argc, char **argv)
{
	ft_push_swap(argc, argv);
}
