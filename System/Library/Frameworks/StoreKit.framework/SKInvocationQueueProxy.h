/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, Protocol;

@interface SKInvocationQueueProxy : NSObject {

	NSMutableArray* _invocationQueue;
	id _invocationTarget;
	Protocol* _protocol;

}

@property (nonatomic,retain) id invocationTarget;              //@synthesize invocationTarget=_invocationTarget - In the implementation block
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithProtocol:(id)arg1 ;
-(void)setInvocationTarget:(id)arg1 ;
-(id)invocationTarget;
@end

