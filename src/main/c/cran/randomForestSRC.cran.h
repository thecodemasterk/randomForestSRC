SEXP rfsrcCIndex(SEXP sexp_traceFlag,
                 SEXP sexp_size,
                 SEXP sexp_time,
                 SEXP sexp_censoring,
                 SEXP sexp_predicted,
                 SEXP sexp_denom);
SEXP rfsrcTestSEXP(SEXP sexp_size);
SEXP rfsrcDistance(SEXP sexp_metric,
                   SEXP sexp_n,
                   SEXP sexp_p,
                   SEXP sexp_x,
                   SEXP sexp_sizeIJ,
                   SEXP sexp_rowI,
                   SEXP sexp_rowJ,
                   SEXP sexp_numThreads,
                   SEXP sexp_traceFlag);
double euclidean(uint n, uint p, uint i, uint j, double **x);
SEXP rfsrcGrow(SEXP traceFlag,
               SEXP seedPtr,
               SEXP optLow,
               SEXP optHigh,
               SEXP splitRule,
               SEXP nsplit,
               SEXP mtry,
               SEXP htry,
               SEXP ytry,
               SEXP nodeSize,
               SEXP nodeDepth,
               SEXP crWeightSize,
               SEXP crWeight,
               SEXP ntree,
               SEXP observationSize,
               SEXP ySize,
               SEXP rType,
               SEXP rLevels,
               SEXP rData,
               SEXP xSize,
               SEXP xType,
               SEXP xLevels,
               SEXP bootstrapSize,
               SEXP bootstrap,
               SEXP caseWeight,
               SEXP xSplitStatWeight,
               SEXP yWeight,
               SEXP xWeight,
               SEXP xData,
               SEXP timeInterestSize,
               SEXP timeInterest,
               SEXP imputeSize,
               SEXP numThreads);
SEXP rfsrcPredict(SEXP traceFlag,
                  SEXP seedPtr,
                  SEXP optLow,
                  SEXP optHigh,
                  SEXP ntree,
                  SEXP observationSize,
                  SEXP ySize,
                  SEXP rType,
                  SEXP rLevels,
                  SEXP rData,
                  SEXP xSize,
                  SEXP xType,
                  SEXP xLevels,
                  SEXP xData,
                  SEXP bootstrapSize,
                  SEXP bootstrap,
                  SEXP caseWeight,
                  SEXP timeInterestSize,
                  SEXP timeInterest,
                  SEXP totalNodeCount,
                  SEXP seed,
                  SEXP treeID,
                  SEXP nodeID,
                  SEXP htry,
                  SEXP hcMeta,
                  SEXP parmID,
                  SEXP contPT,
                  SEXP mwcpSZ,
                  SEXP mwcpPT,
                  SEXP hcSplit2,
                  SEXP hcSplit3,
                  SEXP hcSplit4,
                  SEXP tnRMBR,
                  SEXP tnAMBR,
                  SEXP tnRCNT,
                  SEXP tnACNT,
                  SEXP tnSURV,
                  SEXP tnMORT,
                  SEXP tnNLSN,
                  SEXP tnCSHZ,
                  SEXP tnCIFN,
                  SEXP tnREGR,
                  SEXP tnCLAS,
                  SEXP rTarget,
                  SEXP rTargetCount,
                  SEXP ptnCount,
                                  
                  SEXP intrPredictorSize,
                  SEXP intrPredictor,
                  SEXP partialType,
                  SEXP partialXvar,
                  SEXP partialLength,
                  SEXP partialValue,
                  SEXP partialLength2,
                  SEXP partialXvar2,
                  SEXP partialValue2,
                  SEXP sobservationSize,
                  SEXP sobservationIndv,
                  SEXP fobservationSize,
                  SEXP frSize,
                  SEXP frData,
                  SEXP fxData,
                  SEXP numThreads);
void exit2R();
void printR(char *format, ...);
void setNativeGlobalEnv();
void *copy1DObject(SEXP arr, char type, uint size, char actual);
void *copy2DObject(SEXP arr, char type, char flag, uint row, uint col);
void free_1DObject(void *arr, char type, uint size);
void free_2DObject(void *arr, char type, char flag, uint row, uint col);
void initProtect(uint  stackCount);
void *stackAndProtect(uint  *sexpIndex,
                      char   sexpType,
                      uint   sexpIdentity,
                      ulong  size,
                      double value,
                      char **sexpString,
                      void  *auxiliaryPtr,
                      uint   auxiliaryDimSize,
                      ...);
void setUserTraceFlag (uint traceFlag);
uint getUserTraceFlag ();
