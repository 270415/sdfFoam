# sdfFoam
A simple solver for calculating sign distance function (SDF) on given mesh based on defined patch.
- **Example**: Calculate the distance from the grid to the surface of the square cylinder.
![image](https://github.com/picpic117/sdfFoam/assets/113087331/6a9641b7-3d02-45e8-ac3f-754edecf8a2e)


![image](https://github.com/picpic117/sdfFoam/assets/113087331/27339d50-bf11-467f-93e4-2922f36a33c1)



### 1.Download the source code
- `git clone https://github.com/picpic117/sdfFoam.git`

### 2.To use sdfFoam, follow these steps:

- Set up your OpenFOAM case with mesh.
- Specify the boundary patch from which you want to calculate the signed distance field. You can do this by setting the `wallPatchID` variable in the `sdfFoam.C`

### 3.Compile the solver:
- `cd sdfFoam` 
- `wmake`
### 4.On your caseDict, running sdfFoam:
- `sdfFoam`
