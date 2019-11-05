/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ENNoteStoreClient.h>

@protocol ENBusinessNoteStoreClientDelegate;
@class NSString;

@interface ENBusinessNoteStoreClient : ENNoteStoreClient {

	id<ENBusinessNoteStoreClientDelegate> _delegate;
	NSString* _noteStoreUrl;

}

@property (assign,nonatomic,__weak) id<ENBusinessNoteStoreClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * noteStoreUrl;                                              //@synthesize noteStoreUrl=_noteStoreUrl - In the implementation block
+(id)noteStoreClientForBusiness;
-(id<ENBusinessNoteStoreClientDelegate>)delegate;
-(void)setDelegate:(id<ENBusinessNoteStoreClientDelegate>)arg1 ;
-(id)authenticationToken;
-(NSString *)noteStoreUrl;
-(void)setNoteStoreUrl:(NSString *)arg1 ;
-(void)createBusinessNotebook:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createBusinessNotebook:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end

