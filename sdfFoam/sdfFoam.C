#include "fvCFD.H"
#include "wallDist.H"

int main(int argc, char *argv[])
{
    #include "setRootCase.H"
    #include "createTime.H"
    #include "createMesh.H"

    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

    Info<< "\nCalculating distance to specified wall patch\n" << endl;

    // Create the distance to wall field
    volScalarField gD
    (
        IOobject
        (
            "gD",
            runTime.timeName(),
            mesh,
            IOobject::NO_READ,
            IOobject::AUTO_WRITE
        ),
        mesh,
        dimensionedScalar("gD", dimLength, SMALL)
    );

    // Find the patch ID for the specified wall patch
    const label wallPatchID = mesh.boundaryMesh().findPatchID("oldInternalFaces");

    if (wallPatchID == -1)
    {
        FatalErrorInFunction
            << "Cannot find patch named walls"
            << exit(FatalError);
    }

    // Create a labelHashSet with the specified wall patch
    labelHashSet wallPatchSet;
    wallPatchSet.insert(wallPatchID);

    // Create wallDist object with the specified set of wall patches
    wallDist wDist(mesh, wallPatchSet, "wall");

    // Calculate the distance field and assign it to gD
    runTime.setTime(runTime.endTime(), 0);
    runTime.write();
    gD = wDist.y();

    // Write the distance field
    gD.write();

    Info<< "End\n" << endl;

    return 0;
}