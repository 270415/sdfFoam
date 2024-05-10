# sdfFoam
An easy solver for calculating sign distance function (SDF) on given mesh based on defined patch.
**Example**: Calculate the distance from the grid to the surface of the square cylinder.
![e52dadc3ba4fab8056c1753e122931f](https://github.com/picpic117/sdfFoam/assets/113087331/feecea81-debe-46e5-9f28-0c7faea0b96e)

![4c0132a137d0f731089d3688e4efc3c](https://github.com/picpic117/sdfFoam/assets/113087331/2ee18537-b0ac-4489-a573-b2cb866dc23b)


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
