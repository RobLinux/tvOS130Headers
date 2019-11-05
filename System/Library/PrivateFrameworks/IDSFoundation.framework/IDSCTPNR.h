/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/CoreTelephonyClientCarrierBundleDelegate.h>
#import <IDSFoundation/CoreTelephonyClientDelegate.h>
#import <IDSFoundation/CoreTelephonyClientPNRDelegate.h>

@protocol IDSCTPNRDelegate;
@class NSString, CoreTelephonyClient, CTXPCServiceSubscriptionContext, IDSCTPNRInfo;

@interface IDSCTPNR : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientPNRDelegate> {

	id _coreTelephonyClient;
	NSString* _labelID;
	id _context;
	id<IDSCTPNRDelegate> _PNRDelegate;
	long long _carrierShortcodeSupported;
	os_unfair_lock_s _contextLock;

}

@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,retain) NSString * labelID;                                     //@synthesize labelID=_labelID - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s contextLock;                           //@synthesize contextLock=_contextLock - In the implementation block
@property (assign,nonatomic) long long carrierShortcodeSupported;                    //@synthesize carrierShortcodeSupported=_carrierShortcodeSupported - In the implementation block
@property (assign,nonatomic,__weak) id<IDSCTPNRDelegate> PNRDelegate;                //@synthesize PNRDelegate=_PNRDelegate - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) BOOL isPNRSupported; 
@property (nonatomic,readonly) BOOL isSIMReady; 
@property (nonatomic,readonly) BOOL userOptInRequired; 
@property (nonatomic,readonly) IDSCTPNRInfo * PNRInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)uniqueIdentifier;
-(CTXPCServiceSubscriptionContext *)context;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(void)subscriptionInfoDidChange;
-(void)pnrRequestSent:(id)arg1 pnrReqData:(id)arg2 ;
-(void)pnrResponseReceived:(id)arg1 pnrRspData:(id)arg2 ;
-(void)pnrReadyStateNotification:(id)arg1 regState:(BOOL)arg2 ;
-(void)carrierBundleChange:(id)arg1 ;
-(void)operatorBundleChange:(id)arg1 ;
-(NSString *)labelID;
-(void)setLabelID:(NSString *)arg1 ;
-(id)_telephonyRequestForPushToken:(id)arg1 phoneNumberValidationMechanism:(id)arg2 attemptCount:(unsigned)arg3 ;
-(BOOL)isRelevantContext:(id)arg1 ;
-(void)_resetCarrierShortcodeSupportedCachedValue;
-(IDSCTPNRInfo *)PNRInfo;
-(id)_initWithCoreTelephonyClient:(id)arg1 SIM:(id)arg2 ;
-(BOOL)isPNRSupported;
-(BOOL)isSIMReady;
-(BOOL)userOptInRequired;
-(BOOL)issuePNRForMechanism:(id)arg1 pushToken:(id)arg2 attemptCount:(unsigned)arg3 completion:(/*^block*/id)arg4 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(id<IDSCTPNRDelegate>)PNRDelegate;
-(void)setPNRDelegate:(id<IDSCTPNRDelegate>)arg1 ;
-(long long)carrierShortcodeSupported;
-(void)setCarrierShortcodeSupported:(long long)arg1 ;
-(os_unfair_lock_s)contextLock;
-(void)setContextLock:(os_unfair_lock_s)arg1 ;
@end

