/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSession.h>

@protocol PKNFCTagReaderSessionDelegate;
@interface PKNFCTagReaderSession : PKPaymentSession {

	id<PKNFCTagReaderSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKNFCTagReaderSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PKNFCTagReaderSessionDelegate>)delegate;
-(void)setDelegate:(id<PKNFCTagReaderSessionDelegate>)arg1 ;
-(void)endSession;
-(void)startPolling;
-(void)stopPolling;
-(void)readNDEFMessageFromTag:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

