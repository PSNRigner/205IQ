//
// main.cpp for  in /home/frasse_l/Projets/205IQ
// 
// Made by loic frasse-mathon
// Login   <frasse_l@epitech.net>
// 
// Started on  Wed Apr 13 19:40:18 2016 loic frasse-mathon
// Last update Wed Apr 13 20:34:49 2016 loic frasse-mathon
//

#include "iq.hh"

int	my_atoi(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < '0' || str[i] > '9')
	{
	  std::cerr << "Invalid number : " << str << std::endl;
	  exit(84);
	}
      i++;
    }
  return (atoi(str));
}

int	usage()
{
  std::cout << "USAGE" << std::endl;
  std::cout << "\t\t./205IQ µ σ [IQ1] [IQ2]" << std::endl;
  std::cout << "DESCRIPTION" << std::endl;
  std::cout << "\t\tµ\tpredetermined mean" << std::endl;
  std::cout << "\t\tσ\tpredetermined standard deviation" << std::endl;
  std::cout << "\t\tIQ1\tminimum IQ" << std::endl;
  std::cout << "\t\tIQ2\tmaximum IQ" << std::endl;
  return (0);
}

int	main(int ac, char **av)
{
  int	i;

  i = 1;
  while (i < ac)
    {
      if (std::string("-h") == av[i])
	return (usage());
      i++;
    }
  if (ac == 3)
    {
      int u = my_atoi(av[1]);
      int o = my_atoi(av[2]);
      IQ iq(u, o);
      iq.Do_Calc();
      iq.End();
    }
  else if (ac == 4)
    {
      int u = my_atoi(av[1]);
      int o = my_atoi(av[2]);
      int max = my_atoi(av[3]);
      IQ iq(u, o, max);
      iq.Do_Calc();
      iq.End();
    }
  else if (ac == 5)
    {
      int u = my_atoi(av[1]);
      int o = my_atoi(av[2]);
      int min = my_atoi(av[3]);
      int max = my_atoi(av[4]);
      IQ iq(u, o, min, max);
      iq.Do_Calc();
      iq.End();
    }
  else
    {
      std::cerr << "Error in args." << std::endl;
      return (84);
    }
  return (0);
}
