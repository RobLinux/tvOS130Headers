/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MediaSocialErrorDelegate, OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSArray;

@interface MediaSocialErrorCoordinator : NSObject {

	id<MediaSocialErrorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	id _notification;
	NSMutableOrderedSet* _postIDs;
	NSArray* _temporaryPostIDs;
	NSArray* _temporaryUploadIDs;
	NSMutableOrderedSet* _uploadIDs;

}

@property (assign,nonatomic,__weak) id<MediaSocialErrorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * postIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * uploadIdentifiers; 
-(id<MediaSocialErrorDelegate>)delegate;
-(void)setDelegate:(id<MediaSocialErrorDelegate>)arg1 ;
-(id)initWithDispatchQueue:(id)arg1 ;
-(NSArray *)uploadIdentifiers;
-(BOOL)addDialogForUpload:(id)arg1 ;
-(BOOL)addDialogForUploadIdentifiers:(id)arg1 ;
-(NSArray *)postIdentifiers;
-(BOOL)addDialogForPost:(id)arg1 errorMessage:(id)arg2 canRetry:(BOOL)arg3 ;
-(BOOL)addDialogForPost:(id)arg1 ;
-(void)dismissAllDialogs;
-(id)_newPluralErrorDialogWithPostCount:(long long)arg1 uploadCount:(long long)arg2 ;
-(id)_newPluralErrorDialogWithPostCount:(long long)arg1 ;
-(id)_newSingleErrorDialogWithPost:(id)arg1 ;
-(void)_showDialog:(id)arg1 ;
-(id)_newErrorDialogWithServerMessageWithPost:(id)arg1 erroMessage:(id)arg2 canRetry:(BOOL)arg3 ;
-(id)_newPluralErrorDialogWithUploadCount:(long long)arg1 ;
-(id)_newSingleErrorDialogWithUpload:(id)arg1 ;
-(id)_newPluralErrorDialogWithCount:(long long)arg1 formatString:(id)arg2 ;
-(void)_sendDidFinishWithResponseFlags:(unsigned long long)arg1 ;
@end

