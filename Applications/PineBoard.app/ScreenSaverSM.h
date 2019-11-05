/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PBAttentionMonitorStateMachine.h>
#import <PineBoard/PBScreenSaverManagerObserver.h>

@class NSString;

@interface ScreenSaverSM : PBAttentionMonitorStateMachine <PBScreenSaverManagerObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)screenSaverManagerWillPresentScreenSaver:(id)arg1 ;
-(void)screenSaverManagerDidPresentScreenSaver:(id)arg1 ;
-(void)screenSaverManagerWillDismissScreenSaver:(id)arg1 ;
-(void)screenSaverManagerDidDismissScreenSaver:(id)arg1 ;
-(BOOL)_canBeInOnStateAutomatically;
-(void)_enterOnStateAutomatically;
-(void)_enterOffStateAutomatically;
-(void)_enterOnStateForced;
-(void)_enterOffStateForced;
@end

