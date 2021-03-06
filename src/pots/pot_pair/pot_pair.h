/* ----------------------------------------------------------------------
   MEAMZ - MEAM optimiZer
   http://github.com/nickjer/Meamzilla
   Jeremy Nicklas, nicklas.2@buckeyemail.osu.edu

   Copyright (2013) Jeremy Nicklas.  All rights reserved.  This code
   is not free to use without the express permission of the author.

   See the README file in the top-level MEAMZ directory.
------------------------------------------------------------------------- */

#ifdef POTENTIAL_CLASS

PotentialStyle(pair,PotPair)

#else

#ifndef MEAMZ_POT_PAIR_H
#define MEAMZ_POT_PAIR_H

#include "../../potential.h"

namespace MEAMZ_NS {

class PotPair : public Potential
{
public:
  PotPair(class Meamzilla *, int);
  virtual ~PotPair();

  virtual PotPair* clone() const;                     // Copy polymorphic objects

  virtual void check_if_similar(Potential *) const;   // Check that a potential is similar enough to this
                                                      // potential for pairs/triplets to have identical info

  virtual double compute(const Comm&, ErrorVec * = nullptr);      // Compute error sum/vector

protected:
  static constexpr double DUMMY_WEIGHT = 100.;  // Constant weight for densities that lie outside of embedding function range

private:

};

} // namespace MEAMZ_NS

#endif // MEAMZ_POT_PAIR_H
#endif // POTENTIAL_CLASS
