/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class RPCompanionLinkClient, NSObject, SFClient, SFService, SFSession, SFSiriClient, SFSiriDeviceSetupGreetingDetails, SFDeviceOperationHandlerCDPSetup, HMDeviceSetupOperationHandler, SFDeviceOperationHandlerWiFiSetup, CUAudioPlayer, NSString, NSDate;

@interface SFDeviceSetupB238Service : NSObject {

	BOOL _activateCalled;
	BOOL _advertiseFast;
	RPCompanionLinkClient* _companionLinkClient;
	NSObject*<OS_dispatch_source> _finishApplyTimer;
	NSObject*<OS_dispatch_source> _finishTimeoutTimer;
	BOOL _finished;
	BOOL _finished2;
	BOOL _finishedEventSent;
	BOOL _finishSessionEnded;
	BOOL _invalidateCalled;
	BOOL _iTunesCloudCompleted;
	int _iTunesCloudCompleteToken;
	double _iTunesCloudWaitSeconds;
	BOOL _mediaSystemReady;
	double _mediaSystemWaitSeconds;
	unsigned long long _peerFeatureFlags;
	SFClient* _sfClient;
	SFService* _sfService;
	SFSession* _sfSession;
	SFSiriClient* _siriClient;
	BOOL _siriDidDeviceSetup;
	SFSiriDeviceSetupGreetingDetails* _siriGreetingDetails;
	BOOL _siriHeardWhatCanYouDo;
	WiFiManagerClientRef _wifiManager;
	BOOL _wifiSetupEnabled;
	SFDeviceOperationHandlerCDPSetup* _cdpSetupHandler;
	HMDeviceSetupOperationHandler* _homeKitSetupHandler;
	SFDeviceOperationHandlerWiFiSetup* _wifiSetupHandler;
	CUAudioPlayer* _audioPlayer;
	BOOL _prefCDPEnabled;
	NSString* _languageCode;
	NSString* _localeIdentifier;
	NSString* _temperatureUnit;
	BOOL _siriDisabled;
	NSString* _siriListenLanguage;
	long long _siriVoiceGender;
	NSString* _siriVoiceLanguage;
	NSDate* _timeObj;
	int _timeAuto;
	long long _timeCycle;
	NSString* _timeZone;
	int _timeZoneAuto;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(void)_cleanup;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_sfServiceStart;
-(void)_handleSessionEnded:(id)arg1 ;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_handleFinishRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handlePreAuthRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleSiriDialogIdentifier:(id)arg1 ;
-(void)_handleRawRequest:(id)arg1 flags:(unsigned)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_playReadyToSetupSound;
-(void)_handleAuthActionRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handlePlaySoundRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleAuthActionSiriInit;
-(void)_handleAuthActionSiriStart:(id)arg1 response:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleFinishApply:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_setSystemName:(id)arg1 hostname:(id)arg2 ;
-(void)_setSiriLanguageInfo;
-(void)_handleFinishDone:(unsigned)arg1 responseHandler:(/*^block*/id)arg2 ;
-(BOOL)_handleFinishDone2Ready;
-(void)_handleFinishDone2:(unsigned)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_siriGreetingStart:(/*^block*/id)arg1 ;
-(int)_handleBasicConfigRequest:(id)arg1 ;
-(void)_handleBasicConfigResponse:(id)arg1 ;
-(void)_siriGreetingDialogBStart;
-(void)_siriGreetingIntroStart;
-(void)_siriGreetingIntroPhrase:(id)arg1 error:(id)arg2 ;
-(void)_siriGreetingDialogA;
-(void)_siriGreetingDialogBPhrase:(id)arg1 localizedText:(id)arg2 error:(id)arg3 ;
-(void)_siriGreetingDialogCStart;
-(void)_siriGreetingDialogCPhrase:(id)arg1 error:(id)arg2 ;
-(void)_speakLocalizedKey:(id)arg1 event:(unsigned)arg2 ;
@end

