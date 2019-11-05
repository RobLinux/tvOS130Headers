/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSSyncEncrypter.h>
#import <identityservicesd/IDSSyncAsyncDecrypter.h>

@protocol IDSMPFullDeviceIdentityContainerEncrypter;
@class IDSCertifiedDeliveryReplayCommitter, IDSEndpoint, NSString;

@interface IDSEndpointEncrypter : NSObject <IDSSyncEncrypter, IDSSyncAsyncDecrypter> {

	BOOL _forceLegacyPK;
	id<IDSMPFullDeviceIdentityContainerEncrypter> _fullDeviceIdentityContainerEncrypter;
	IDSCertifiedDeliveryReplayCommitter* _replayCommitter;
	IDSEndpoint* _endpoint;
	id<IDSMPFullDeviceIdentityContainerEncrypter> _fullDeviceIdentityEncrypter;

}

@property (nonatomic,retain) id<IDSMPFullDeviceIdentityContainerEncrypter> fullDeviceIdentityEncrypter;                         //@synthesize fullDeviceIdentityEncrypter=_fullDeviceIdentityEncrypter - In the implementation block
@property (nonatomic,retain) IDSEndpoint * endpoint;                                                                            //@synthesize endpoint=_endpoint - In the implementation block
@property (assign,nonatomic) BOOL forceLegacyPK;                                                                                //@synthesize forceLegacyPK=_forceLegacyPK - In the implementation block
@property (nonatomic,readonly) id<IDSMPFullDeviceIdentityContainerEncrypter> fullDeviceIdentityContainerEncrypter;              //@synthesize fullDeviceIdentityContainerEncrypter=_fullDeviceIdentityContainerEncrypter - In the implementation block
@property (nonatomic,readonly) IDSCertifiedDeliveryReplayCommitter * replayCommitter;                                           //@synthesize replayCommitter=_replayCommitter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IDSEndpoint *)endpoint;
-(void)setEndpoint:(IDSEndpoint *)arg1 ;
-(id<IDSMPFullDeviceIdentityContainerEncrypter>)fullDeviceIdentityContainerEncrypter;
-(IDSCertifiedDeliveryReplayCommitter *)replayCommitter;
-(void)decryptData:(id)arg1 usingIdentifier:(id)arg2 onQueue:(id)arg3 isRetry:(BOOL)arg4 replayKey:(id)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)encryptData:(id)arg1 usedIdentifier:(id*)arg2 onQueue:(id)arg3 error:(id*)arg4 ;
-(id)decryptData:(id)arg1 usingIdentifier:(id)arg2 isRetry:(BOOL)arg3 onQueue:(id)arg4 error:(id*)arg5 ;
-(id)initWithEndpoint:(id)arg1 fullDeviceIdentityContainerEncrypter:(id)arg2 replayCommitter:(id)arg3 forceLegacyPK:(BOOL)arg4 ;
-(BOOL)forceLegacyPK;
-(void)setForceLegacyPK:(BOOL)arg1 ;
-(id<IDSMPFullDeviceIdentityContainerEncrypter>)fullDeviceIdentityEncrypter;
-(void)setFullDeviceIdentityEncrypter:(id<IDSMPFullDeviceIdentityContainerEncrypter>)arg1 ;
@end

