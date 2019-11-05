/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TouchRemote-Structs.h>
#import <TouchRemote/WPTransferDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, TRTransferServerDelegate;
@class NSObject, WPTransfer, NSString;

@interface TRTransferServer : NSObject <WPTransferDelegate> {

	SCD_Struct_TR0* _aesContext;
	BOOL _didSendData;
	AirPlayPairingSessionPrivateRef _pairingSession;
	long long _pairingState;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _responseSemaphore;
	BOOL _started;
	BOOL _waitingOnSemaphore;
	long long _advertiserState;
	WPTransfer* _transferSession;
	id<TRTransferServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TRTransferServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<TRTransferServerDelegate>)delegate;
-(void)setDelegate:(id<TRTransferServerDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(void)transferDidFailToStartAdvertising:(id)arg1 ;
-(void)transferDidFailToStartScanning:(id)arg1 ;
-(void)transferDidFailWithError:(id)arg1 ;
-(id)transferDidReceiveData:(id)arg1 ;
-(void)transferComplete;
-(void)transferDidUpdateAdvertiserState:(id)arg1 ;
-(void)transferDidUpdateScannerState:(id)arg1 ;
-(int)_runSetupStepWithInput:(const void*)arg1 inputLength:(unsigned long long)arg2 outputData:(id*)arg3 ;
-(int)_runVerifyStepWithInput:(const void*)arg1 inputLength:(unsigned long long)arg2 outputData:(id*)arg3 ;
-(void)_beginAdvertisingIfPowered;
-(id)_onQueue_didReceiveEncryptedData:(id)arg1 ;
-(void)_onQueue_didFinishPairing;
@end

