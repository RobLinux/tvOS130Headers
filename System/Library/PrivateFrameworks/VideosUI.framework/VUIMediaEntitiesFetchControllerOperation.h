/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, VUIMediaEntitiesFetchControllerResult, NSError, VUIMediaLibrary, NSOperation;

@interface VUIMediaEntitiesFetchControllerOperation : VUIAsynchronousOperation {

	long long _fetchReason;
	NSArray* _requests;
	NSArray* _currentFetchResponses;
	VUIMediaEntitiesFetchControllerResult* _result;
	NSError* _error;
	VUIMediaLibrary* _mediaLibrary;
	NSOperation* _currentSubOperation;

}

@property (nonatomic,retain) VUIMediaEntitiesFetchControllerResult * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long fetchReason;                                       //@synthesize fetchReason=_fetchReason - In the implementation block
@property (nonatomic,copy) NSArray * requests;                                            //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) VUIMediaLibrary * mediaLibrary;                              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) NSOperation * currentSubOperation;                           //@synthesize currentSubOperation=_currentSubOperation - In the implementation block
@property (nonatomic,copy) NSArray * currentFetchResponses;                               //@synthesize currentFetchResponses=_currentFetchResponses - In the implementation block
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(VUIMediaEntitiesFetchControllerResult *)result;
-(NSArray *)requests;
-(void)setResult:(VUIMediaEntitiesFetchControllerResult *)arg1 ;
-(void)setRequests:(NSArray *)arg1 ;
-(VUIMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(void)executionDidBegin;
-(NSOperation *)currentSubOperation;
-(void)setCurrentSubOperation:(NSOperation *)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 fetchReason:(long long)arg2 requests:(id)arg3 ;
-(void)setCurrentFetchResponses:(NSArray *)arg1 ;
-(long long)fetchReason;
-(NSArray *)currentFetchResponses;
-(void)setFetchReason:(long long)arg1 ;
-(void)_startMediaLibraryFetchOperation;
-(void)_handleCompletdFetchWithResponses:(id)arg1 error:(id)arg2 ;
-(void)_startChangesOperationWithMediaEntityFetchResponses:(id)arg1 currentFetchResponses:(id)arg2 ;
-(id)_resultWithResponses:(id)arg1 ;
@end

