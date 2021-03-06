/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLCloudKitTransportTask.h>
#import <cloudphotod/CPLEngineTransportQueryTask.h>

@class CKQueryCursor, CPLCloudKitScope, NSString;

@interface CPLCloudKitQueryTask : CPLCloudKitTransportTask <CPLEngineTransportQueryTask> {

	/*^block*/id _completionHandler;
	/*^block*/id _progressHandler;
	CKQueryCursor* _cursor;
	Class _queriedClass;
	CPLCloudKitScope* _scope;
	NSString* _scopeIdentifier;

}

@property (nonatomic,copy,readonly) CKQueryCursor * cursor;                                            //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) Class queriedClass;                                                     //@synthesize queriedClass=_queriedClass - In the implementation block
@property (nonatomic,readonly) CPLCloudKitScope * scope;                                               //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSString * scopeIdentifier;                                             //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL foreground; 
@property (assign,getter=isHighPriorityBackground,nonatomic) BOOL highPriorityBackground; 
@property (assign,getter=isForcedTask,nonatomic) BOOL forcedTask; 
@property (assign,getter=isBackgroundTask,nonatomic) BOOL backgroundTask; 
@property (nonatomic,retain) id<CPLEngineTransportGroup> transportGroup; 
-(CKQueryCursor *)cursor;
-(CPLCloudKitScope *)scope;
-(void)runWithinSyncSession:(id)arg1 ;
-(NSString *)scopeIdentifier;
-(void)sendProgressBatch:(id)arg1 updatedCursor:(id)arg2 ;
-(id)initWithController:(id)arg1 cursor:(id)arg2 class:(Class)arg3 scope:(id)arg4 scopeIdentifier:(id)arg5 progressHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)runOperations;
-(Class)queriedClass;
@end

