//
// iq.hh for  in /home/frasse_l/Projets/205IQ
// 
// Made by loic frasse-mathon
// Login   <frasse_l@epitech.net>
// 
// Started on  Wed Apr 13 19:41:24 2016 loic frasse-mathon
// Last update Wed Apr 13 20:14:17 2016 loic frasse-mathon
//

#ifndef IQ_HH_
# define IQ_HH_

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <string>
# include <cmath>

class	IQ
{
public:
  IQ(int, int);
  IQ(int, int, int);
  IQ(int, int, int, int);
  ~IQ(){}
  void		Do_Calc();
  void		End();

private:
  enum Mode
    {
      GNUPLOT,
      ONE_BOUND,
      TWO_BOUNDS
    };

  double	tab[201];
  int		u;
  int		o;
  int		min;
  int		max;
  Mode		mode;
};

#endif /* !IQ_HH_ */
