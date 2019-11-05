/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFApplicationContextProvider.h>

@class NSString;

@interface WFDaemonApplicationContextProvider : NSObject <WFApplicationContextProvider> {

	NSString* _userInterfaceType;

}

@property (nonatomic,readonly) NSString * userInterfaceType;              //@synthesize userInterfaceType=_userInterfaceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL wfIdleTimerDisabled; 
-(id)init;
-(long long)currentApplicationStateForWFApplicationContext:(id)arg1 ;
-(id)bundleForWFApplicationContext:(id)arg1 ;
-(id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1 ;
-(id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2 ;
-(id)keyWindowForWFApplicationContext:(id)arg1 ;
-(id)applicationForWFApplicationContext:(id)arg1 ;
-(id)initWithUserInterfaceType:(id)arg1 ;
-(NSString *)userInterfaceType;
@end

