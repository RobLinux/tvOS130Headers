/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSXPCCoder.h>
#import <BoardServices/BSXPCServiceConnectionMessage.h>

@protocol BSXPCServiceConnectionMessage <BSXPCEncoding,BSXPCDecoding>
@required
-(BOOL)send;
-(id)createReply;
-(BOOL)sendSynchronously;
-(BOOL)expectsReply;

@end

#import <BoardServices/BSInvalidatable.h>

@protocol OS_dispatch_queue, BSServiceDispatchingQueue;
@class NSObject, NSString;

@interface BSXPCServiceConnectionMessage : BSXPCCoder <BSXPCServiceConnectionMessage, BSInvalidatable> {

	int _sendFlag;
	NSObject*<OS_dispatch_queue> _targetQueue;
	/*^block*/id _completion;
	id<BSServiceDispatchingQueue> _replyQueue;

}

@property (nonatomic,retain) id<BSServiceDispatchingQueue> replyQueue;              //@synthesize replyQueue=_replyQueue - In the implementation block
@property (nonatomic,copy) id completion;                                           //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSString * messageID; 
@property (assign,nonatomic) unsigned long long childIdentifier; 
@property (assign,nonatomic) BOOL childIdentifierIsRemotelyDefined; 
@property (nonatomic,retain) NSString * selectorName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithXPCConnection:(id)arg1 targetQueue:(id)arg2 ;
-(void)invalidate;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(BOOL)send;
-(id)createReply;
-(BOOL)sendSynchronously;
-(void)setReplyQueue:(id<BSServiceDispatchingQueue>)arg1 ;
-(id<BSServiceDispatchingQueue>)replyQueue;
-(BOOL)expectsReply;
-(NSString *)messageID;
-(void)setMessageID:(NSString *)arg1 ;
-(NSString *)selectorName;
-(void)setSelectorName:(NSString *)arg1 ;
-(void)setChildIdentifier:(unsigned long long)arg1 ;
-(void)setChildIdentifierIsRemotelyDefined:(BOOL)arg1 ;
-(id)sendSynchronouslyWithError:(out id*)arg1 ;
-(id)initWithXPCConnection:(id)arg1 targetQueue:(id)arg2 ;
-(BOOL)_sendSynchronously:(BOOL)arg1 ;
-(unsigned long long)childIdentifier;
-(BOOL)childIdentifierIsRemotelyDefined;
@end

