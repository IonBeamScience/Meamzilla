/* ----------------------------------------------------------------------
   MEAMZ - MEAM optimiZer
   http://github.com/nickjer/Meamzilla
   Jeremy Nicklas, nicklas.2@buckeyemail.osu.edu

   Copyright (2013) Jeremy Nicklas.  All rights reserved.  This code
   is not free to use without the express permission of the author.

   See the README file in the top-level MEAMZ directory.
------------------------------------------------------------------------- */

#include "timer.h"
#include "mpi.h"

using namespace MEAMZ_NS;

/* ---------------------------------------------------------------------- */

Timer::Timer() : time_(0.0)
{
  start();
}

/* ---------------------------------------------------------------------- */

Timer::~Timer()
{
  //dtor
}


/* ----------------------------------------------------------------------
   start specified timer
------------------------------------------------------------------------- */

void Timer::start()
{
  time_ = MPI_Wtime();
  return;
}

/* ----------------------------------------------------------------------
   stop specified timer
------------------------------------------------------------------------- */

void Timer::stop()
{
  time_ = elapsed();
  return;
}

/* ----------------------------------------------------------------------
   time elapsed since first started
------------------------------------------------------------------------- */

double Timer::elapsed()
{
  return MPI_Wtime() - time_;
}

/* ----------------------------------------------------------------------
   get the time from the specified timer
------------------------------------------------------------------------- */

double Timer::get_time()
{
  return time_;
}
