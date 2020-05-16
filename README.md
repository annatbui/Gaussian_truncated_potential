# LMFT
Relevant source code for LMFT/SCA electrostatics in LAMMPS

This is an implementation of electrostatics in the *strong-coupling approximation* for use with *local molecular field theory* (LMFT). This is intended to be used with the LAMMPS simulation package. If you use this code, please cite:

> S. J. Cox, <i> Dielectric response with short-ranged electrostatics </i>,

where a brief synopsis of the underlying theory can be found, along with references to more complete overviews (mostly arising from the Weeks group in Maryland). A copy of the paper can be found [here](add link).

The code is based on existing LAMMPS source. It should be as simple as copying over the files to the main src directory and recompiling. Example files can be found [here](add link), but the basic idea is to include the line:

``` 
pair_style      lj/cut/coul/GT <kappa> <cutoff>
```

No k-space style should be defined. It is also reccommended that you check out the [FiniteField repository](https://github.com/uccasco/FiniteFields).
