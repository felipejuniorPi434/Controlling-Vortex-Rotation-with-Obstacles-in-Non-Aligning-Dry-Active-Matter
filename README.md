# Controlling-Vortex-Rotation-with-Obstacles-in-Non-Aligning-Dry-Active-Matter
This repository contains the source code used to generate all data presented in the article *“Controlling Vortex Rotation with Obstacles in Non-Aligning Dry Active Matter”*.
# Active Matter Simulations with Half-Disk Obstacles

This repository contains simulation codes and input files for studying active particle systems interacting with fixed half-disk obstacles under different geometrical configurations.

---

## 📁 Project Structure

The repository is organized into different control cases:

* `Control_0HalfDisks/` ---> Zero half disks
* `Control_1HalfDisk/`  --->  one half disks
* `Control_2HalfDisksAdjacent/`---> two adjacent half disks
* `Control_2HalfDisksOpposite/`---> two  opposite half disks
* `Control_3HalfDisks/` --> three half disks
* `Control_4HalfDisks/` ---> four half disks

Each folder corresponds to a different number and arrangement of obstacles.

Inside each folder:

* `N_OBS2.c` → main simulation source code
* `lp.in` → input parameter file
* `files.txt` → list of auxiliary input files
* Additional parameter/data files:

  ## Auxiliary input files

* `file_a0.txt`-------> gap parameter λ in units of particle size (e.g., λ = σ, 2σ)
* `file_diamobs1.txt` ---> diameter of the half-disks
* `file_diamobs_central.txt` ---> diameter of the central circular obstacle
* `file_DeltaTheta.txt` ---> particle rotation angles (α)
* `fileDen.txt` ---> free particle density: ϕ = N π σ² / (L² − A_obs)
* `filegap.txt` ---> free parameter (do not change)
* `xparam.txt` ---> free parameter (do not change)
* `INIT_ESSAY.txt` ---> initial realization index (useful for increasing statistics)
* `tax_NULL_obs.txt` ---> free parameter (do not change)
 

---

## ⚙️ Compilation

The simulation is written in C and must be compiled using `gcc`.

**Important:**
The executable **must be named `lp`**, otherwise the program will not correctly read the input file `lp.in`.

Compile using:

```bash
gcc N_OBS2.c -lm -o lp
```

---

## ▶️ Running the Simulation

After compilation, run the simulation with:

```bash
./lp
```

The program automatically reads parameters from:

```bash
lp.in
```

---

## 📥 Input Parameters (`lp.in`)

Example configuration:

`
## Input parameters (`lp.in`)

sizeHistRdf    200   --> size of radial profiles (number of bins)
filmclick      0     --> save particle orbits in time (qt.dat, t=1..2000): 1 (yes), 0 (no). start from the thermalization time
Nessay         25    --> number of realizations
d0             1.0   --> fixed parameter (do not change)
n_celula       3     --> fixed parameter of obstacle lattice (do not change)
noiseTheta     0.001 --> angular noise intensity
nparallel      0     --> fixed parameter (do not change)
CY_AF          101000 --> fixed parameter (do not change)
CY_BE          100000 --> fixed parameter (do not change)
NOBS           2     --> number of obstacles
Thecycle       1000000 --> thermalization time
diam           1.0   --> particle diameter
stepT          0.001 --> time step
kappa          50.0  --> particle-particle interaction strength
NstepT         2000000 --> total simulation time steps
kappaObs       1000.00 --> obstacle-particle interaction strength
v0             1.0   --> particle self-propulsion velocity
```

---


## Output files

* `qt.dat` ---> particle trajectories in time. Each row corresponds to a time step (t = 1, 2, 3, ..., 2000). Trajectories are recorded only if `filmclick = 1`.

* `AllwS_r.dat` ---> angular velocity data for different realizations. The file has **five columns**:

  * column 1: time
  * column 2–5: angular velocity measured at different cut radii
    (r_{\text{cut}} = 1, 2, 3, 4)
    Each file corresponds to a specific realization index (r).

* `Field_r.dat` ---> mean velocity field of the system. This represents the averaged velocity over particles for each realization (r), providing the coarse-grained flow structure.

---

### Notes

* The index (r) in `AllwS_r.dat` and `Field_r.dat` labels **different realizations of the simulation**
* For each realization, multiple datasets are generated, corresponding to different observable classes (trajectories, angular velocity, and mean field)
* All output files are written in the same directory where the simulation is executed




## 📄 Auxiliary Input Files

The file `files.txt` defines the list of external parameter files used during the simulation. These include:

* obstacle sizes
* angular parameters
* density configurations
* initialization conditions

Make sure all listed files are present in the same directory as the executable.

---

## ⚠️ Important Notes

* The executable name **must match the input file (`lp.in`)**
* All simulations must be run **inside their respective folders**
* Do not rename `lp.in` unless you modify the source code
* Ensure all auxiliary `.txt` files are available before running

---

## 🎯 Purpose

These simulations are designed to study:

* cluster formation around obstacles
* vortex formation in active matter systems
* control and manipulation of vortex states
* effects of obstacle geometry on vortex structure and stability
* emergence of large-scale collective structures in active matter

---

## 📌 Reproducibility

To reproduce results:

1. Navigate to a control folder
2. Compile the code
3. Run `./lp`
4. Analyze output files

---

## 👤 Author

Felipe Pinheiro
(Theoretical Physics – Active Matter Systems)

---

## 📬 Notes

This repository is intended for research and reproducibility of simulation results.
For questions or collaboration, please contact the author.
