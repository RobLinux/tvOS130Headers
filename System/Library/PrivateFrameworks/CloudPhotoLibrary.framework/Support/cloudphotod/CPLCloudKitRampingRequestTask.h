/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLCloudKitTransportTask.h>
#import <cloudphotod/CPLEngineTransportRampingRequestTask.h>

@class NSString;

@interface CPLCloudKitRampingRequestTask : CPLCloudKitTransportTask <CPLEngineTransportRampingRequestTask> {

	unsigned long long _resourceType;
	unsigned long long _numRequested;
	/*^block*/id _completionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL foreground; 
@property (assign,getter=isHighPriorityBackground,nonatomic) BOOL highPriorityBackground; 
@property (assign,getter=isForcedTask,nonatomic) BOOL forcedTask; 
@property (assign,getter=isBackgroundTask,nonatomic) BOOL backgroundTask; 
@property (nonatomic,retain) id<CPLEngineTransportGroup> transportGroup; 
-(double)timeoutIntervalForRequest;
-(void)runOperations;
-(BOOL)_shouldSkipRampingRequest;
-(id)initWithController:(id)arg1 resourceType:(unsigned long long)arg2 numRequested:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

