# LMFT
Relevant source code for LMFT/SCA electrostatics in LAMMPS. The files tagged
03Mar2020 should work with LAMMPS versions prior to the 29Oct2020
stable release. Updating these file for use with LAMMPS >= 29Oct2020
is work in progress.


This is an implementation of electrostatics in the *strong-coupling
approximation* for use with *local molecular field theory*
(LMFT). This is intended to be used with the LAMMPS simulation
package. If you use this code, please cite:

> S. J. Cox, <i> Dielectric response with short-ranged electrostatics</i>, Proc. Natl. Acad. Sci. <b>117</b>, 19746-19752 (2020)

where a synopsis of the underlying theory can be found, along with references to more complete overviews (mostly arising from the Weeks group in Maryland). A copy of the paper can be found [here](https://www.pnas.org/content/117/33/19746.short). (A preprint version can be found [here](https://arxiv.org/abs/2008.01682).)

The implementation is based on existing LAMMPS source code. It should be as simple as copying over the files to the main src directory and recompiling. Example files can be found [here](https://doi.org/10.17863/CAM.52565), but the basic idea is to include the line:

``` 
pair_style      lj/cut/coul/GT <kappa> <cutoff>
```

No k-space style should be defined. It is also recommended that you check out the [FiniteField repository](https://github.com/uccasco/FiniteFields).
