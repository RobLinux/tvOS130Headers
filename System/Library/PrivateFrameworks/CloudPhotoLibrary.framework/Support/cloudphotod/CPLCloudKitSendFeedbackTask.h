/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLCloudKitTransportTask.h>
#import <cloudphotod/CPLEngineTransportSendFeedbackTask.h>

@class NSArray, NSString;

@interface CPLCloudKitSendFeedbackTask : CPLCloudKitTransportTask <CPLEngineTransportSendFeedbackTask> {

	NSArray* _messages;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSArray * messages;                                                     //@synthesize messages=_messages - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL foreground; 
@property (assign,getter=isHighPriorityBackground,nonatomic) BOOL highPriorityBackground; 
@property (assign,getter=isForcedTask,nonatomic) BOOL forcedTask; 
@property (assign,getter=isBackgroundTask,nonatomic) BOOL backgroundTask; 
@property (nonatomic,retain) id<CPLEngineTransportGroup> transportGroup; 
-(id)completionHandler;
-(NSArray *)messages;
-(void)runOperations;
-(id)initWithController:(id)arg1 messages:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

