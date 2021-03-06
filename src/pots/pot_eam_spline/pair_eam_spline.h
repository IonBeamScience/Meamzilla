/* ----------------------------------------------------------------------
   MEAMZ - MEAM optimiZer
   http://github.com/nickjer/Meamzilla
   Jeremy Nicklas, nicklas.2@buckeyemail.osu.edu

   Copyright (2013) Jeremy Nicklas.  All rights reserved.  This code
   is not free to use without the express permission of the author.

   See the README file in the top-level MEAMZ directory.
------------------------------------------------------------------------- */

#ifdef PAIR_CLASS

PairStyle(eam/spline,PairEAMSpline)

#else

#ifndef MEAMZ_PAIR_EAM_SPLINE_H
#define MEAMZ_PAIR_EAM_SPLINE_H

#include "../pot_eam/pair_eam.h"

namespace MEAMZ_NS
{

class PairEAMSpline : public PairEAM
{
public:
  double phi_shift;
  double rho_shift;

  PairEAMSpline();
  virtual ~PairEAMSpline();

  virtual PairEAMSpline* clone() const;         // Copy polymorphic objects

  virtual bool check_pair(Atom *, Potential *); // Check that this pair is within boundaries of potentials

protected:

private:

};

} // namespace MEAMZ_NS

#endif // MEAMZ_PAIR_EAM_SPLINE_H
#endif // PAIR_CLASS
