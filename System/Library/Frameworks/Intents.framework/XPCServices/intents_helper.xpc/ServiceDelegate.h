/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/XPCServices/intents_helper.xpc/intents_helper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <intents_helper/NSXPCListenerDelegate.h>

@class BKSProcessAssertion, NSString;

@interface ServiceDelegate : NSObject <NSXPCListenerDelegate> {

	BKSProcessAssertion* _processAssertion;

}

@property (retain) BKSProcessAssertion * processAssertion;              //@synthesize processAssertion=_processAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BKSProcessAssertion *)processAssertion;
-(void)setProcessAssertion:(BKSProcessAssertion *)arg1 ;
@end
