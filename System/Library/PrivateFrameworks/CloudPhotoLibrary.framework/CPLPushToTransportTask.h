/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineMultiscopeSyncTask.h>

@class CPLScopeFilter;

@interface CPLPushToTransportTask : CPLEngineMultiscopeSyncTask {

	BOOL _deferredCancel;
	BOOL _highPriority;
	CPLScopeFilter* _scopeFilter;

}

@property (assign,nonatomic) BOOL highPriority;                         //@synthesize highPriority=_highPriority - In the implementation block
@property (nonatomic,retain) CPLScopeFilter * scopeFilter;              //@synthesize scopeFilter=_scopeFilter - In the implementation block
-(id)taskIdentifier;
-(void)cancel:(BOOL)arg1 ;
-(void)setHighPriority:(BOOL)arg1 ;
-(BOOL)highPriority;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)enumerateScopesForTaskInTransaction:(id)arg1 ;
-(id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4 ;
-(BOOL)shouldSkipScopesWithMissingTransportScope;
-(void)taskDidFinishWithError:(id)arg1 ;
-(CPLScopeFilter *)scopeFilter;
-(void)setScopeFilter:(CPLScopeFilter *)arg1 ;
-(BOOL)shouldProcessScope:(id)arg1 inTransaction:(id)arg2 ;
@end

