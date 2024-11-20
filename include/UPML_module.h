#ifndef UPML_MODULE_H
#define UPML_MODULE_H

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "focal-struct.h"
#include "macros-grid.h"

void init_UPML_fields( gridConfiguration *gridCfg );
double ***allocatePMLArray(int N_x, int N_y, int N_z);

/*Magnetic field UPML*/
void UPML_B_faces(  gridConfiguration *gridCfg, 
                    boundaryVariables *boundaryV,
                    double EB_WAVE[NX][NY][NZ] );

void UPML_B_corners(gridConfiguration *gridCfg, 
                    boundaryVariables *boundaryV,
                    double EB_WAVE[NX][NY][NZ]);

void UPML_B_edges(  gridConfiguration *gridCfg, 
                    boundaryVariables *boundaryV,
                    double EB_WAVE[NX][NY][NZ] );

void UPML_Bref_faces(   gridConfiguration *gridCfg, 
                        boundaryVariables *boundaryV,
                        double EB_WAVE[NX][NY][NZ_REF] );

/*void UPML_Bref_corners( gridConfiguration *gridCfg, 
                        systemGrid *G,
                        boundaryGrid *boundaryG );

void UPML_Bref_edges(   gridConfiguration *gridCfg, 
                        systemGrid *G,
                        boundaryGrid *boundaryG );*/

/*Electric field UPML*/
void UPML_E_faces(  gridConfiguration *gridCfg, 
                    boundaryVariables *boundaryV,
                    double EB_WAVE[NX][NY][NZ] );

void UPML_E_corners(gridConfiguration *gridCfg, 
                    boundaryVariables *boundaryV,
                    double EB_WAVE[NX][NY][NZ]);

void UPML_E_edges(  gridConfiguration *gridCfg, 
                    boundaryVariables *boundaryV,
                    double EB_WAVE[NX][NY][NZ] );

void UPML_Eref_faces(   gridConfiguration *gridCfg, 
                        boundaryVariables *boundaryV,
                        double EB_WAVE[NX][NY][NZ_REF] );

/*void UPML_Eref_corners( gridConfiguration *gridCfg, 
                        systemGrid *G,
                        boundaryGrid *boundaryG);

void UPML_Eref_edges(  gridConfiguration *gridCfg, 
                    systemGrid *G,
                    boundaryGrid *boundaryG );*/


#endif