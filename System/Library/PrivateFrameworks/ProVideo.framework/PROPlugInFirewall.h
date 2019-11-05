/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PROPlugInFirewallErrorHandler;
@class Protocol;

@interface PROPlugInFirewall : NSObject {

	id<PROPlugInFirewallErrorHandler> errorHandler;
	id protectedObject;
	Protocol* protocol;
	Protocol* secondaryProtocol;

}
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
+(void)deadMethod;
-(id)description;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(id)initWithProtectedObject:(id)arg1 protocol:(id)arg2 secondaryProtocol:(id)arg3 errorHandler:(id)arg4 ;
-(void)deadMethod;
-(id)protectedObject;
@end

