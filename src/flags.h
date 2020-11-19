/*
 * flags.h
 *
 *  Created on: 26.09.2017
 *      Author: Daniel Höller
 */

#ifndef FLAGS_H_
#define FLAGS_H_


// constants
#define UNREACHABLE INT_MAX
#define NOACTION -1
#define FORBIDDEN -2

// [heuristics]
#define ZERO 0      // hVal is zero for every node
#define RCFILTER 1  // relaxed composition heuristic with the filter heuristic
#define RCFF 2      // relaxed composition heuristic with the FF heuristic
#define RCADD 3     // relaxed composition heuristic with the add heuristic
#define RCLMC 4     // relaxed composition heuristic with the LM-Cut heuristic

// [state-representation]
#define SRCOPY 0  // copy bit vector that represents state
#define SRCALC1 1 // calculate state based on current plan
#define SRCALC2 2 // calculate state based on current plan
#define SRLIST 3  // maintain int list with bits currently set

// [search-type]
#define DFSEARCH 0
#define BFSEARCH 1
#define HEURISTICSEARCH 2

// *****************
// * Configuration *
// *****************

// time limit in seconds
#define TIMELIMIT 600

#define EARLYGOALTEST

// select a state representation
#define STATEREP SRCOPY // choose from [state-representation]

//#define OPTIMIZEUNTILTIMELIMIT true


// type of search
#define SEARCHTYPE HEURISTICSEARCH // choose from [search-type]

// options for heuristic search
#define ASTAR
#define GASTARWEIGHT 1

#define PRGEFFECTLESS // always progress effectless actions

#define ONEMODAC
//#define ONEMODMETH

#define CORRECTTASKCOUNT
#define CALCMINIMALIMPLIEDCOSTS

// select a heuristic function
#define HEURISTIC RCFF

#define TRACKTASKSINTN

#define RCHEURISTIC
#define CHECKAFTER 5000 // nodes after which the timelimit is checked
#define MAINTAINREACHABILITY
#define ONLYACTIONS // it is only needed for actions
#ifndef OPTIMIZEUNTILTIMELIMIT
#define OPTIMIZEUNTILTIMELIMIT false
#endif

#ifndef CHECKAFTER
#define CHECKAFTER 5000 // nodes after which the timelimit is checked
#endif

#define TRACESOLUTION
//#define SAVESEARCHSPACE



//#define VISITEDONLYSTATISTICS
#define TOVISI_SEQ  1
#define TOVISI_PRIM 2
#define TOVISI_PRIM_EXACT 3
#define TOVISI TOVISI_PRIM




// if we write the state space to file, we need to disable pretty much all optimisations ...
#ifdef SAVESEARCHSPACE
#undef OPTIMIZEUNTILTIMELIMIT
#undef PRGEFFECTLESS
#undef ONEMODAC
#define OPTIMIZEUNTILTIMELIMIT true
#endif


#endif /* FLAGS_H_ */
