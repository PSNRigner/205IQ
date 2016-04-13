//
// iq.cpp for  in /home/frasse_l/Projets/205IQ
// 
// Made by loic frasse-mathon
// Login   <frasse_l@epitech.net>
// 
// Started on  Wed Apr 13 19:41:17 2016 loic frasse-mathon
// Last update Wed Apr 13 20:37:19 2016 loic frasse-mathon
//

#include "iq.hh"

IQ::IQ(int u, int o)
{
  this->u = u;
  this->o = o;
  this->mode = IQ::GNUPLOT;
}

IQ::IQ(int u, int o, int max)
{
  this->u = u;
  this->o = o;
  this->max = max;
  this->mode = IQ::ONE_BOUND;
}

IQ::IQ(int u, int o, int min, int max)
{
  this->u = u;
  this->o = o;
  this->min = min;
  this->max = max;
  this->mode = IQ::TWO_BOUNDS;
}

void	IQ::Do_Calc()
{
  int	i;

  i = 0;
  while (i < 201)
    {
      double result = (1 / ((double)o * sqrt(2 * M_PI)))
	* exp(-0.5 * pow(((double)i - (double)u) / (double)o, 2));
      tab[i] = result * 100;
      /*
      if (tab[i] * 100 - (int)(tab[i] * 100) < 0.5)
	tab[i] = (double)((int)(tab[i] * 100)) / 100;
      else
	tab[i] = (double)((int)(tab[i] * 100) + 1) / 100;
      */
      i++;
    }
}

void		IQ::End()
{
  int		i;
  double	n;

  if (mode == IQ::GNUPLOT)
    {
      std::cout << std::setprecision(2) << std::fixed;
      i = 0;
      while (i < 201)
	{
	  std::cout << i << " " << tab[i] << std::endl;
	  i++;
	}
    }
  else if (mode == IQ::ONE_BOUND)
    {
      std::cout << std::setprecision(1) << std::fixed;
      i = 0;
      n = 0;
      while (i < max)
	{
	  n += tab[i];
	  i++;
	}
      std::cout << (double)n << "% of people have a IQ inferior to " << max << std::endl;
    }
  else
    {
      std::cout << std::setprecision(1) << std::fixed;
      i = min;
      n = 0;
      while (i < max)
	{
	  n += tab[i];
	  i++;
	}
      std::cout << (double)n << "% of people have a IQ between " << min << " and " << max << std::endl;
    }
}
