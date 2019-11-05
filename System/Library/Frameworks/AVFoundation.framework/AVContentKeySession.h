/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVContentKeySessionInternal, NSURL, NSString, NSData;

@interface AVContentKeySession : NSObject {

	AVContentKeySessionInternal* _session;

}

@property (getter=isInternal,nonatomic,readonly) BOOL internal; 
@property (__weak,readonly) id<AVContentKeySessionDelegate> delegate; 
@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (readonly) NSURL * storageURL; 
@property (readonly) NSString * keySystem; 
@property (readonly) NSData * contentProtectionSessionIdentifier; 
+(void)initialize;
+(id)contentKeySessionWithKeySystem:(id)arg1 ;
+(OpaqueFigSecureStopManagerRef)copyDefaultSecureStopManagerForAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
+(id)contentKeySessionWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
+(id)pendingExpiredSessionReportsWithAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
+(void)removePendingExpiredSessionReports:(id)arg1 withAppIdentifier:(id)arg2 storageDirectoryAtURL:(id)arg3 ;
+(id)_uniqueIDForCyptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id<AVContentKeySessionDelegate>)delegate;
-(void)setDelegate:(id<AVContentKeySessionDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)_internalQueue;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)_weakReference;
-(const OpaqueFigContentKeySessionRef)_figContentKeySession;
-(int)createAndInstallCustomURLHandlerForAsset:(id)arg1 outHandler:(OpaqueFigCustomURLHandler*)arg2 ;
-(BOOL)isInternal;
-(void)expire;
-(void)_willDeallocOrFinalize;
-(NSString *)keySystem;
-(void)_invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 synchronouslyWhenDelegateQueueIsNULL:(BOOL)arg2 ;
-(const OpaqueFigCPECryptorRef)createDecryptorIfNecessaryForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 hlsMethod:(id)arg4 error:(id*)arg5 ;
-(int)setAppIdentifier:(id)arg1 ;
-(void)createProtectorSessionIdentifierIfNecessary;
-(void)_setContentKeyRequest:(id)arg1 forCryptorUUID:(id)arg2 cryptorKeyRequestID:(unsigned long long)arg3 ;
-(BOOL)_setAuthorizationToken:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)renewExpiringResponseDataForContentKeyRequest:(id)arg1 ;
-(BOOL)clientCanReceivePersistableContentKeyRequest;
-(void)issueContentKeyRequestWithCustomURLHandler:(OpaqueFigCustomURLHandlerRef)arg1 identifier:(id)arg2 requestInfo:(CFDictionaryRef)arg3 requestID:(unsigned long long)arg4 providesPersistableKey:(BOOL)arg5 ;
-(void)issueContentKeyRequestWithPreloadingRequestOptions:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 providesPersistableKey:(BOOL)arg4 ;
-(id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
-(void)failProcessingContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 error:(id)arg3 ;
-(const OpaqueFigCPECryptorRef)copyDecryptorForIdentifier:(id)arg1 initializationData:(id)arg2 ;
-(id)_extractCryptKeyIdentifiersFromInitializationData:(id)arg1 ;
-(void)_processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3 ;
-(id)initWithStorageDirectoryAtURL:(id)arg1 ;
-(NSURL *)storageURL;
-(void)addContentKeyRecipient:(id)arg1 ;
-(void)removeContentKeyRecipient:(id)arg1 ;
-(id)contentKeyRecipients;
-(NSData *)contentProtectionSessionIdentifier;
-(void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3 ;
-(void)makeSecureTokenForExpirationDateOfPersistableContentKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidatePersistableContentKey:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)invalidateAllPersistableContentKeysForApp:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleSecureStopDidFinalizeRecordCallback;
-(id)_contentKeyRequestForCryptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2 ;
-(void)_removeContentKeyRequestForCryptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2 ;
-(void)issueContentKeyRequest:(id)arg1 forKeyRenewal:(BOOL)arg2 ;
-(id)createCryptorOptionsForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 hlsMethod:(id)arg4 ;
-(void)_sendFinishLoadingForPreloadedKeyRequest:(CFDictionaryRef)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(OpaqueFigCustomURLHandlerRef)arg3 ;
-(id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 internal:(BOOL)arg3 ;
-(BOOL)hasProtector;
-(id)issueContentKeyRequestForInitializationData:(id)arg1 ;
-(void)_handleRequest:(CFDictionaryRef)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(OpaqueFigCustomURLHandlerRef)arg3 willHandleRequest:(BOOL*)arg4 ;
-(void)_handleUpdateToPersistentKey:(id)arg1 forKeyIdentifier:(id)arg2 ;
-(void)_handleKeyResponseError:(id)arg1 forCryptorUUID:(id)arg2 andCryptorKeyRequestID:(unsigned long long)arg3 ;
-(void)_handleKeyResponseSuccessfullyProcessedForCryptorUUID:(id)arg1 andCryptorKeyRequestID:(unsigned long long)arg2 ;
@end

