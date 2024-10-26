// clang-format off
/* ----------------------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   https://www.lammps.org/, Sandia National Laboratories
   LAMMPS development team: developers@lammps.org

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.

  /* ----------------------------------------------------------------------
   Contributing author:

   Modified for electrostatics in the strong-coupling approximation
   (SCA) (also referred to as ``Gaussian Truncated'' (GT)
   electrostatics) to be compatible with pair_style hybrid

   Anna T. Bui (University of Cambridge)
   Copyright (2024) Anna T. Bui
------------------------------------------------------------------------- */

#include "pair_lj_cut_coul_GT_global.h"

#include "error.h"

#include <cstring>

using namespace LAMMPS_NS;

/* ----------------------------------------------------------------------
   set coeffs for one or more type pairs
------------------------------------------------------------------------- */

void PairLJCutCoulGTGlobal::coeff(int narg, char **arg)
{
  if (narg < 4 || narg > 6)
    error->all(FLERR,"Incorrect args for pair coefficients");

  PairLJCutCoulGT::coeff(narg,arg);
}


/* ---------------------------------------------------------------------- */

void *PairLJCutCoulGTGlobal::extract(const char *str, int &dim)
{
  dim = 0;
  if (strcmp(str,"cut_coul") == 0) return (void *) &cut_coul_global;
  return nullptr;
}
