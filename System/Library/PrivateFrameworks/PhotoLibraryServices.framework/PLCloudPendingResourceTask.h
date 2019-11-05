/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLResourceTransferTask, NSDate, NSMutableDictionary;

@interface PLCloudPendingResourceTask : NSObject {

	CPLResourceTransferTask* _transferTask;
	NSDate* _lastUpdated;
	BOOL _completed;
	BOOL _transferTaskRemoved;
	NSMutableDictionary* _taskIdentifierToProgressBlock;
	NSMutableDictionary* _taskIdentifierToCompletionHandler;

}
-(void)reportProgress:(float)arg1 ;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(id)lastUpdated;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 forTaskIdentifier:(id)arg3 ;
-(void)setTransferTask:(id)arg1 ;
-(void)keepAlive;
-(void)addProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withTaskIdentifier:(id)arg3 ;
-(void)reportCompletionWithError:(id)arg1 ;
-(id)taskIDs;
@end

