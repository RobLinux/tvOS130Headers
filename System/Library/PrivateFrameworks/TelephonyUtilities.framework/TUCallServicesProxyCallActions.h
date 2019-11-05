/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUCallServicesProxyCallActions <NSObject>
@required
-(oneway void)answerCallWithRequest:(id)arg1;
-(oneway void)holdCallWithUniqueProxyIdentifier:(id)arg1;
-(oneway void)unholdCallWithUniqueProxyIdentifier:(id)arg1;
-(oneway void)disconnectCallWithUniqueProxyIdentifier:(id)arg1;
-(oneway void)groupCallWithUniqueProxyIdentifier:(id)arg1 withOtherCallWithUniqueProxyIdentifier:(id)arg2;
-(oneway void)ungroupCallWithUniqueProxyIdentifier:(id)arg1;
-(oneway void)swapCalls;
-(oneway void)playDTMFToneForCallWithUniqueProxyIdentifier:(id)arg1 key:(unsigned char)arg2;
-(oneway void)disconnectCurrentCallAndActivateHeld;
-(oneway void)disconnectAllCalls;
-(oneway void)setTTYType:(int)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
-(oneway void)pullRelayingCallsFromClient;
-(oneway void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1;
-(oneway void)pushHostedCallsToDestination:(id)arg1;
-(oneway void)pullHostedCallsFromPairedHostDevice;
-(oneway void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(id)arg1;
-(oneway void)updateCallWithProxy:(id)arg1;
-(oneway void)enteredForegroundForCallWithUniqueProxyIdentifier:(id)arg1;
-(oneway void)willEnterBackgroundForAllCalls;
-(oneway void)enteredBackgroundForAllCalls;
-(oneway void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(id)arg1 size:(CGSize)arg2;
-(oneway void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(id)arg1 presentationState:(int)arg2;
-(oneway void)sendMMIOrUSSDCodeWithRequest:(id)arg1;
-(oneway void)setUplinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
-(oneway void)setDownlinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
-(oneway void)shouldSuppressInCallStatusBar:(BOOL)arg1;

@end

