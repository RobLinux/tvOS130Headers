/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/Support/tvhomesharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVHDServiceListener, TVHDMediaServerManager, TVHSMediaServerDiscoveryConfiguration;

@interface TVHDService : NSObject {

	TVHDServiceListener* _listener;
	TVHDMediaServerManager* _mediaServerManager;
	TVHSMediaServerDiscoveryConfiguration* _mediaServerDiscoveryConfiguration;

}

@property (nonatomic,retain) TVHDServiceListener * listener;                                                         //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) TVHDMediaServerManager * mediaServerManager;                                            //@synthesize mediaServerManager=_mediaServerManager - In the implementation block
@property (nonatomic,retain) TVHSMediaServerDiscoveryConfiguration * mediaServerDiscoveryConfiguration;              //@synthesize mediaServerDiscoveryConfiguration=_mediaServerDiscoveryConfiguration - In the implementation block
+(id)sharedInstance;
-(id)init;
-(TVHDServiceListener *)listener;
-(id)_init;
-(void)setListener:(TVHDServiceListener *)arg1 ;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setMediaServerDiscoveryConfiguration:(TVHSMediaServerDiscoveryConfiguration *)arg1 ;
-(TVHSMediaServerDiscoveryConfiguration *)mediaServerDiscoveryConfiguration;
-(id)mediaServers;
-(void)_setMediaServerDiscoveryConfigurationWithMode:(unsigned long long)arg1 homeSharingAccountName:(id)arg2 homeSharingPassword:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_restartMediaServerDiscoveryWithOptions:(id)arg1 ;
-(id)_mediaServerForIdentifier:(id)arg1 ;
-(void)_setMediaServerDiscoveryConfiguration:(id)arg1 updateSettings:(BOOL)arg2 ;
-(void)setMediaServerManager:(TVHDMediaServerManager *)arg1 ;
-(void)_startObservingMediaServerManager:(id)arg1 ;
-(void)_startMediaServerDiscoveryIfNecessary;
-(TVHDMediaServerManager *)mediaServerManager;
-(void)_stopMediaServerDiscoveryIfNecessary;
-(void)_startObservingMediaServers:(id)arg1 ;
-(void)_stopObservingMediaServers:(id)arg1 ;
-(void)_notifyClientsMediaServersDidChange;
-(void)_notifyClientsMediaServerStateDidChange:(id)arg1 ;
-(void)_notifyClientsMediaServerDiscoveryConfigurationDidChange;
-(void)_stopObservingMediaServerManager:(id)arg1 ;
-(void)_logDiscoveredMediaServers;
@end

