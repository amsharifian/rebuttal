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

* **accel:** This RTL package contains all the accelerator code used to wrap a dataflow scala file. The top level file is *Accelerator.scala*. It instantiates and connects three helper blocks: *SimpleReg.scala*, *Cache.scala* and *Core.scala*.

    To read more about IR-lib acceleartor desing and SoC interface, please read the following document:

    * [Accelerator Interface](./doc/Soc-Interface.md)

![Accelerator](https://www.dropbox.com/s/q600al5gt2yo91i/accelerator-resize.png?raw=1)


* **node:** This RTL package resamble LLVM IR instruction nodes in our design so that we can target arbitary dataflow of computation nodes from our input sofware IR. All these nodes uses *Handhsaking* interface from our *interface* package to talk with other nodes. The logic within each node can vary from a simple ALU operation like addition to more complicated operations like memory address calculation and so on.

    To read more about IR-lib node's desing, please read the following document:

    * [IR Node design](./doc/Node.md)

* **control:** In this package we have implemented all of our control logic to support arbitary dataflow between IR-lib's ndoes.

    * [Controlflow](./doc/Control-flow.md)
    * [Parallel Loop](./doc/Parallel-loop.md)

* **arbiters:** This RTL package contains a parametrizable set of arbiter implementation that's been used in other packages like: *memory* or *junctions*.
* **concurrent:** This RTL package contains implementation of our concurrent modules to support higher task level parallelism. For example, our task manager implementaion exists under this package. Different implementation of task controller can be found under this package.
* **config:** This utility package provides Scala interfaces for configuring a generator via a dynamically-scoped parameterization library.
* **dataflow:** This RTL package contains different small dataflow to test correctness of IR-lib accelerator's design.
* **dnn:** This RTL package contains our computation nodes to implement application speicfic accelerators for *dnn workloads*. For instance, we have different implementation of *Systolic arraies* in this branch. Another type of computation nodes which exist in this package is our *Typed node* computation nodes.
* **FPU:** This RTL package provides wrapers around Floating point operations to be integrated with IR-lib design. At this moment, there are two different wrapers in this package. One is a wraper for berkely hardfloat floating point unit. Second, is a wrapper for embeding Alter's IP cores in our design during FPGA mapping process.
* **generator:** This RTL package contanis different test cases, generate using our *front-end* to target IR-lib. There is a wide range of examples to hammer IR-lib for testing different software test cases. The test cases test IR-lib logics in different scenarios such as arbitary control-flow, nested loops, nested parallel loops, nested parallel loops with arbitary controlflow and so on.
* **interfaces:** This package contains all the different definition of our intefaces between nodes. These interfaces connect different types of node to eachother. For instance, for connecting two compute node *Databundle* is provided, alternatively for connecting control signals *ControlBundle* is provided.
* **junctions:** This RTL package includes implementation of  generic 1:N, N:1, and M:N connections.
All the memory operations in the task are time multiplexed over the junction. There are different implementation of junction in this package. For instance one possible implementation of junctions is a static tree network or a local bus.
We have parameterized the junction implementations in IR-lib so that the designer can control the physical network that the junction is lowered into.
* **loop:** This RTL package contains implementation of our special *loop* nodes for controling repetetive execution of the same dataflow. Under this packge we have different implementaiton of notino of software loops. The loop structure not only should capture all the live-ins and live-outs to the loop but also it has be able have support for different type of loops like *serial*, *parallel* and different patterns.
* **memory:** This RTL packge contains our different memory unit implementaiton of memory units. These units vary from different implementation of *Caches* to *Scratchpad memories*. There are also different implementation of IR-lib memory controlers for different type of data like *Scalar, Tensor2D* and so on.
* **utility:** This utility package provides a variety of common Scala and Chisel constructs that are re-used across multiple other packages,


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
