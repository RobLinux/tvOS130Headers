/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPDistributedMessagingDelayedReplyContext : NSObject {

	unsigned _replyPort;
	BOOL _portPassing;

}

@property (assign,nonatomic) unsigned replyPort;              //@synthesize replyPort=_replyPort - In the implementation block
@property (assign,nonatomic) BOOL portPassing;                //@synthesize portPassing=_portPassing - In the implementation block
-(void)dealloc;
-(id)initWithReplyPort:(unsigned)arg1 portPassing:(BOOL)arg2 ;
-(unsigned)replyPort;
-(void)setReplyPort:(unsigned)arg1 ;
-(BOOL)portPassing;
-(void)setPortPassing:(BOOL)arg1 ;
@end

