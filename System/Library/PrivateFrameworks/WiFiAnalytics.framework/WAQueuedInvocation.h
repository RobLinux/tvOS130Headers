/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInvocation;

@interface WAQueuedInvocation : NSObject {

	NSInvocation* _invocation;
	/*^block*/id _reply;

}

@property (nonatomic,retain) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
@property (nonatomic,copy) id reply;                                 //@synthesize reply=_reply - In the implementation block
-(NSInvocation *)invocation;
-(id)reply;
-(void)setReply:(id)arg1 ;
-(void)setInvocation:(NSInvocation *)arg1 ;
@end

