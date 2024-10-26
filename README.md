# Gaussian_truncated_potential
Relevant source code for LMFT/SCA electrostatics in LAMMPS. The files tagged
03Mar2020 should work with LAMMPS versions prior to the 29Oct2020
stable release. The source files in the master branch should be
compatible with LAMMPS >= 29Oct2020. These have been tested against
the previous versions on short simulations, though not extensively.

This is an implementation of electrostatics in the *strong-coupling
approximation* for use with *local molecular field theory*
(LMFT). This is intended to be used with the LAMMPS simulation
package. 

The implementation is based on existing LAMMPS source code. It should be as simple as copying over the files to the main src directory and recompiling. Example files can be found [here](https://doi.org/10.17863/CAM.52565), but the basic idea is to include the line:

``` 
pair_style      lj/cut/coul/GT <kappa> <cutoff>
```

No k-space style should be defined if all potentials in simulations are truncated. 

When used with mixed electrostatic treatment, pair style  lj/cut/coul/GT/global computes the same Coulombic interactions as style lj/cut/coul/GT except that it allows only a single global cutoff and thus makes it compatible for use in combination with long-range coulomb styles in hybrid pair styles.


```
pair_style    hybrid  lj/cut/coul/GT/global <kappa> <cutoff> lj/cut/coul/long <cutoff>
```



The lj/cut/coul/GT/global style is made to be part of the EXTRA-PAIR package.
