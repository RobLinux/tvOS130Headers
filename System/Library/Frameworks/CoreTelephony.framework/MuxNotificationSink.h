/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <CoreTelephony/CoreTelephonyClientDelegateProxyInterface.h>

@protocol MuxNotificationSinkDelegate;
@class NSString;

@interface MuxNotificationSink : NSProxy <CoreTelephonyClientDelegateProxyInterface> {

	id<MuxNotificationSinkDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MuxNotificationSinkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<MuxNotificationSinkDelegate>)delegate;
-(void)setDelegate:(id<MuxNotificationSinkDelegate>)arg1 ;
@end

