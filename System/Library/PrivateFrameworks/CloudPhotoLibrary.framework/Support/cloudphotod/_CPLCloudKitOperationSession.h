/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSCountedSet, NSMutableDictionary;

@interface _CPLCloudKitOperationSession : NSObject {

	NSDate* _startSessionDate;
	NSDate* _lastOperationDate;
	NSCountedSet* _taskCounters;
	NSCountedSet* _currentTaskClasses;
	NSMutableDictionary* _classCountPerTaskClass;
	NSMutableDictionary* _cellularClassCountPerTaskClass;

}
-(id)init;
-(id)status;
-(BOOL)beginTask:(id)arg1 ;
-(void)endTask:(id)arg1 withOperationClasses:(id)arg2 operationsAllowingCellular:(id)arg3 ;
-(id)statusObject;
-(BOOL)isOngoing;
@end

