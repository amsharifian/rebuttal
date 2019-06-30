# IR-Lib

IR-lib is a library of hardware components for auto generating highly configurable parallel dataflow accelerator.
IR-lib provides implementation of the following hardware units:

1. a set of highly configurable and paramertrizable computation nodes.
2. a set of control units to support arbitary control path.
3. A collection configurable Memory structures like Cache, Scratchpad memory and so on.
4. A set of standard flexible set of junctions and interfaces to connect different pieces of the design together.


**WARNING:** These units are works in progress. They may not be yet completely free of bugs, nor are they fully optimized.

## What's in the IR-Lib repository?

The IR-Lib repository contains code that is used to implement a library modular hardware components to build hardware accelerators. Hardware generation is done using Chisel, a hardware construction language embedded in Scala.
The IR-Lib code base is itself factored into a number of Scala packages. These packages are all found within the src/main/scala directory. Some of these packages provide Scala utilities for generator configuration, while other contain the actual Chisel RTL generators themselves. Here is a brief description of what can be found in each package:

* **accel:**
* **arbiters:**
* **concurrent:**
* **config:**
* **control:**
* **dataflow:**
* **dnn:**
* **flist:**
* **FPU:**
* **generator:**
* **interfaces:**
* **junctions:**
* **loop:**
* **memory:**
* **muxes:**
* **node:**
* **regfile:**
* **stack:**
* **utility:**
* **verilogmain:**


## Getting Started on a Local Ubuntu Machine

This will walk you through installing Chisel and necessary dependencies:

* **[sbt:](https://www.scala-sbt.org/)** which is the preferred Scala build system and what Chisel uses.

* **[Verilator:](https://www.veripool.org/wiki/verilator)**, which compiles Verilog down to C++ for simulation. The included unit testing infrastructure uses this.

## (Ubuntu-like) Linux

Install Java

```
sudo apt-get install default-jdk
```

Install sbt, which isn't available by default in the system package manager:

```
echo "deb https://dl.bintray.com/sbt/debian /" | sudo tee -a /etc/apt/sources.list.d/sbt.list
sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv 642AC823
sudo apt-get update
sudo apt-get install sbt
```

Install Verilator. We currently recommend Verilator version 3.922. Follow these instructions to compile it from source.

Install prerequisites (if not installed already):

```
sudo apt-get install git make autoconf g++ flex bison
```

Clone the Verilator repository:

```
git clone http://git.veripool.org/git/verilator
```
In the Verilator repository directory, check out a known good version:

```
git pull
git checkout verilator_4_202
```

In the Verilator repository directory, build and install:

unset VERILATOR_ROOT # For bash, unsetenv for csh
```
autoconf # Create ./configure script
./configure
make
sudo make install
```


## IR dependencies
IR-lib depends on _Berkeley Hardware Floating-Point Units_ for floating nodes. Therefore, before building ir you need to clone hardfloat project, build it and then publish it locally on your system. Hardfloat repository has all the necessary information about how to build the project, here we only breifly mention how to build it and then publish it.

```
git clone https://github.com/ucb-bar/berkeley-hardfloat.git
cd berkeley-hardfloat
sbt "publishLocal"
```