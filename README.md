# sdfFoam
An easy solver for calculating SDF function on given mesh.
- `git clone https://github.com/picpic117/sdfFoam.git`

### 1.Download the source code

### 2.To use sdfFoam, follow these steps:

- Set up your OpenFOAM case with the desired geometry and mesh.
- Specify the boundary patch from which you want to calculate the signed distance field. You can do this by setting the `wallPatchID` variable in the `sdfFoam.C`

### 3.Compile the solver:
- `cd sdfFoam` 
- `wmake`
### 4.On your caseDict, running sdfFoam:
- `sdfFoam`
