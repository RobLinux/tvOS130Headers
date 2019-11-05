/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, PLCloudPhotoLibraryBatchContainer, NSMutableSet;

@interface PLCloudPhotoLibraryBatchManager : NSObject {

	NSMutableArray* _batches;
	PLCloudPhotoLibraryBatchContainer* _currentBatch;
	BOOL _wasDrained;
	NSMutableSet* _masterHistory;
	unsigned long long _resourceBudget;

}
-(id)description;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)addRecord:(id)arg1 ;
-(void)addRecord:(id)arg1 ignoreBatchSize:(BOOL)arg2 ;
-(id)drainBatches;
-(long long)currentBatchCount;
-(BOOL)isAboveMaximumResourceBudget;
@end

