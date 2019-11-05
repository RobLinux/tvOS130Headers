/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@class MPSMatrixMultiplication, MPSMatrixSolveTriangular;

@interface MPSMatrixDecompositionLU : MPSMatrixUnaryKernel {

	MPSMatrixMultiplication* _gemmKernel;
	MPSMatrixSolveTriangular* _trsmKernel;
	unsigned long long _rows;
	unsigned long long _columns;

}

@property (nonatomic,readonly) unsigned long long rows;                 //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;              //@synthesize columns=_columns - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(unsigned long long)columns;
-(unsigned long long)rows;
-(id)initWithDevice:(id)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 resultMatrix:(id)arg3 pivotIndices:(id)arg4 status:(id)arg5 ;
@end

