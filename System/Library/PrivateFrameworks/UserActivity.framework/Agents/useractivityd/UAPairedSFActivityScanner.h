/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFActivityScannerDelegate;
@class UAPairedSFActivityAdvertiser, SFPeerDevice;

@interface UAPairedSFActivityScanner : NSObject {

	BOOL _sendFoundDevice;
	UAPairedSFActivityAdvertiser* _pairedAdvertiser;
	id<SFActivityScannerDelegate> _delegate;
	SFPeerDevice* _peer;

}

@property (copy,readonly) SFPeerDevice * peer;                                   //@synthesize peer=_peer - In the implementation block
@property (assign) BOOL sendFoundDevice;                                         //@synthesize sendFoundDevice=_sendFoundDevice - In the implementation block
@property (retain) UAPairedSFActivityAdvertiser * pairedAdvertiser;              //@synthesize pairedAdvertiser=_pairedAdvertiser - In the implementation block
@property (assign) id<SFActivityScannerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
-(id<SFActivityScannerDelegate>)delegate;
-(void)setDelegate:(id<SFActivityScannerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(SFPeerDevice *)peer;
-(void)scanForTypes:(unsigned long long)arg1 ;
-(void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(unsigned long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)setPairedAdvertiser:(UAPairedSFActivityAdvertiser *)arg1 ;
-(void)receiveAdvertisement:(id)arg1 options:(id)arg2 fromPeer:(id)arg3 ;
-(BOOL)sendFoundDevice;
-(void)setSendFoundDevice:(BOOL)arg1 ;
-(UAPairedSFActivityAdvertiser *)pairedAdvertiser;
@end

