/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessoryServer.h>

@class NSNumber, NSDictionary, HMDDAccessoryServerBrowserDemo;

@interface HMDDAccessoryServerDemo : HAPAccessoryServer {

	BOOL __paired;
	BOOL __hasPairings;
	NSNumber* _category;
	NSDictionary* _accessoryInfo;
	HMDDAccessoryServerBrowserDemo* _browser;

}

@property (assign,nonatomic,__weak) HMDDAccessoryServerBrowserDemo * browser;              //@synthesize browser=_browser - In the implementation block
@property (assign,nonatomic) BOOL _paired;                                                 //@synthesize _paired=__paired - In the implementation block
@property (assign,nonatomic) BOOL _hasPairings;                                            //@synthesize _hasPairings=__hasPairings - In the implementation block
@property (nonatomic,retain) NSDictionary * accessoryInfo;                                 //@synthesize accessoryInfo=_accessoryInfo - In the implementation block
-(id)category;
-(void)setCategory:(id)arg1 ;
-(long long)linkType;
-(BOOL)_paired;
-(BOOL)isPaired;
-(void)setBrowser:(HMDDAccessoryServerBrowserDemo *)arg1 ;
-(HMDDAccessoryServerBrowserDemo *)browser;
-(id)initCommon:(id)arg1 browser:(id)arg2 ;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(BOOL)hasPairings;
-(void)continuePairingAfterAuthPrompt;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startPairingWithConsentRequired:(BOOL)arg1 config:(id)arg2 ownershipToken:(id)arg3 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)discoverAccessories;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_hasPairings;
-(id)initWithName:(id)arg1 identifier:(id)arg2 deviceInfo:(id)arg3 paired:(BOOL)arg4 keyStore:(id)arg5 browser:(id)arg6 ;
-(NSDictionary *)accessoryInfo;
-(void)_parseAttributeDatabase:(id)arg1 ;
-(void)processCharacteristicWrite:(id)arg1 value:(id)arg2 ;
-(void)handleUpdatesForCharacteristics:(id)arg1 ;
-(void)setAccessoryInfo:(NSDictionary *)arg1 ;
-(void)set_paired:(BOOL)arg1 ;
-(void)set_hasPairings:(BOOL)arg1 ;
@end

