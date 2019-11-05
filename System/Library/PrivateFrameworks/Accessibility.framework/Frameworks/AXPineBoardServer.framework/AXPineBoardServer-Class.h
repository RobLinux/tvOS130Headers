/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXPineBoardServer.framework/AXPineBoardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXServer.h>
#import <AXPineBoardServer/AXSystemAppServer.h>

@protocol AXSystemAppServer;
@class NSString;

@interface AXPineBoardServer : AXServer <AXSystemAppServer> {

	id<AXSystemAppServer> _localServiceProvider;

}

@property (assign,nonatomic,__weak) id<AXSystemAppServer> localServiceProvider;              //@synthesize localServiceProvider=_localServiceProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
-(id)init;
-(id)_serviceName;
-(int)pid;
-(long long)activeInterfaceOrientation;
-(void)_wasDisconnectedFromClient;
-(void)_didConnectToClient;
-(void)_didConnectToServer;
-(void)rebootDevice;
-(void)pid:(/*^block*/id)arg1 ;
-(BOOL)isAppSwitcherVisible;
-(BOOL)isScreenSaverVisible;
-(BOOL)isNowPlayingUIVisible;
-(BOOL)isReceivingAirPlay;
-(BOOL)isControlCenterVisible;
-(BOOL)isSoftwareUpdateUIVisible;
-(BOOL)isMediaPlaying;
-(void)setLocalServiceProvider:(id<AXSystemAppServer>)arg1 ;
-(id<AXSystemAppServer>)localServiceProvider;
-(BOOL)dismissSiri;
-(BOOL)isSiriVisible;
-(BOOL)isSiriTalkingOrListening;
-(void)wakeUpDeviceIfNecessary;
-(BOOL)isSystemSleeping;
-(void)activeInterfaceOrientation:(/*^block*/id)arg1 ;
-(BOOL)isDockVisible;
-(BOOL)isNotificationCenterVisible;
-(BOOL)isNotificationVisible;
-(BOOL)isNonExclusiveSystemUIFocusable;
-(BOOL)isSideSwitcherVisible;
-(BOOL)isStickyNotificationVisible;
-(BOOL)isNonExclusiveSystemUIVisible;
@end

