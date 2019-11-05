/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:07:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVAirPlay.app/TVAirPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVAirPlay/TVAirPlay-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, BKSProcessAssertion, NSString, TVAirPlayAirTunesReceiverDelegate, TVAirPlayAPRKManager;

@interface TVAirPlayAppDelegate : UIResponder <UIApplicationDelegate> {

	BOOL _playbackActive;
	int _cloudAvailabilityNotifyToken;
	UIWindow* _window;
	BKSProcessAssertion* _procAssert;
	NSString* _previousAudioRouteUID;
	TVAirPlayAirTunesReceiverDelegate* _airTunesReceiverDelegate;
	TVAirPlayAPRKManager* _APRKManager;

}

@property (assign,nonatomic) BOOL playbackActive;                                                       //@synthesize playbackActive=_playbackActive - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * procAssert;                                          //@synthesize procAssert=_procAssert - In the implementation block
@property (assign,nonatomic) int cloudAvailabilityNotifyToken;                                          //@synthesize cloudAvailabilityNotifyToken=_cloudAvailabilityNotifyToken - In the implementation block
@property (nonatomic,retain) NSString * previousAudioRouteUID;                                          //@synthesize previousAudioRouteUID=_previousAudioRouteUID - In the implementation block
@property (nonatomic,retain) TVAirPlayAirTunesReceiverDelegate * airTunesReceiverDelegate;              //@synthesize airTunesReceiverDelegate=_airTunesReceiverDelegate - In the implementation block
@property (nonatomic,retain) TVAirPlayAPRKManager * APRKManager;                                        //@synthesize APRKManager=_APRKManager - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                         //@synthesize window=_window - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)_updateCloudConnectivityState;
-(void)_updatePlaybackActive;
-(void)setProcAssert:(BKSProcessAssertion *)arg1 ;
-(BKSProcessAssertion *)procAssert;
-(void)_disableAirPlaySpeakerIfNecessary;
-(void)_reenableAirPlaySpeakerIfNecessary;
-(void)setPreviousAudioRouteUID:(NSString *)arg1 ;
-(NSString *)previousAudioRouteUID;
-(TVAirPlayAPRKManager *)APRKManager;
-(BOOL)playbackActive;
-(void)setPlaybackActive:(BOOL)arg1 ;
-(int)cloudAvailabilityNotifyToken;
-(void)setCloudAvailabilityNotifyToken:(int)arg1 ;
-(TVAirPlayAirTunesReceiverDelegate *)airTunesReceiverDelegate;
-(void)setAirTunesReceiverDelegate:(TVAirPlayAirTunesReceiverDelegate *)arg1 ;
-(void)setAPRKManager:(TVAirPlayAPRKManager *)arg1 ;
@end

