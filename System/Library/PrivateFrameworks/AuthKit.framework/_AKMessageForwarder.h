/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AKAdaptiveServiceInterface.h>

@interface _AKMessageForwarder : NSObject <AKAdaptiveServiceInterface> {

	id _weakReceiver;
	id _strongReceiver;

}
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)activate;
-(id)initWithStrongReceiver:(id)arg1 ;
-(id)initWithWeakReceiver:(id)arg1 ;
-(id)initWithReceiver:(id)arg1 strong:(BOOL)arg2 ;
@end

