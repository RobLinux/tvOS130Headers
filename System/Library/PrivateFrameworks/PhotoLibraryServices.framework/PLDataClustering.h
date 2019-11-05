/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PLDataClustering : NSObject {

	/*^block*/id _distanceBlock;
	NSArray* _numericValueKeypaths;

}

@property (nonatomic,copy,readonly) id distanceBlock;                       //@synthesize distanceBlock=_distanceBlock - In the implementation block
@property (nonatomic,readonly) NSArray * numericValueKeypaths;              //@synthesize numericValueKeypaths=_numericValueKeypaths - In the implementation block
+(id)clustering;
+(id)clusteringWithDistanceBlock:(/*^block*/id)arg1 ;
+(id)clusteringWithNumericValueKeypaths:(id)arg1 ;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)freeDistancesMatrix:(double*)arg1 forDataset:(id)arg2 ;
-(id)initWithNumericValueKeypaths:(id)arg1 ;
-(id)initWithDistanceBlock:(/*^block*/id)arg1 ;
-(id)distanceBlock;
-(NSArray *)numericValueKeypaths;
-(double*)createDistancesMatrixForDataset:(id)arg1 ;
@end

