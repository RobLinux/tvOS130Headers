/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/AssetDataConsumer.h>

@protocol OS_dispatch_queue, AssetDataConsumer;
@class NSObject, DigestVerifier, ChunkedDigest, NSString;

@interface DecryptDataConsumer : NSObject <AssetDataConsumer> {

	KBCryptOpaque_Ref _session;
	void* _buffer;
	unsigned long long _capacity;
	NSObject*<OS_dispatch_queue> _consumerQueue;
	unsigned long long _cursor;
	DigestVerifier* _digestVerifier;
	ChunkedDigest* _digest;
	id<AssetDataConsumer> _streamAdapter;

}

@property (retain) ChunkedDigest * digest;                           //@synthesize digest=_digest - In the implementation block
@property (retain) id<AssetDataConsumer> streamAdapter;              //@synthesize streamAdapter=_streamAdapter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)resetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)finishWithCompletionHandler:(/*^block*/id)arg1 ;
-(ChunkedDigest *)digest;
-(void)setDigest:(ChunkedDigest *)arg1 ;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)consumeData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)truncateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)suspendWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithDPInfo:(id)arg1 error:(id*)arg2 ;
-(void)setStreamAdapter:(id<AssetDataConsumer>)arg1 ;
-(BOOL)_beginSessionWithDPInfo:(id)arg1 error:(id*)arg2 ;
-(void)_resetDecryptionBufferAndDigestVerifier;
-(id<AssetDataConsumer>)streamAdapter;
@end

