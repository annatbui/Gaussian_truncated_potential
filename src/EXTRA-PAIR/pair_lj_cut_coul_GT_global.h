/* -*- c++ -*- ----------------------------------------------------------
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

#ifdef PAIR_CLASS
// clang-format off
PairStyle(lj/cut/coul/GT/global,PairLJCutCoulGTGlobal);
// clang-format on
#else

#ifndef LMP_PAIR_LJ_CUT_COUL_GT_GLOBAL_H
#define LMP_PAIR_LJ_CUT_COUL_GT_GLOBAL_H

#include "pair_lj_cut_coul_GT.h"

namespace LAMMPS_NS {

class PairLJCutCoulGTGlobal : public PairLJCutCoulGT {
 public:
  PairLJCutCoulGTGlobal(class LAMMPS *lmp) : PairLJCutCoulGT(lmp) {}
  void coeff(int, char **) override;
  void *extract(const char *, int &) override;
};

}    // namespace LAMMPS_NS

#endif
#endif
