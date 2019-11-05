/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMFMessageReceiver.h>
#import <HomeKit/HMObjectMerge.h>
#import <HomeKit/NSSecureCoding.h>

@protocol HMSoftwareUpdateDelegate;
@class HMFUnfairLock, NSUUID, HMSoftwareUpdateDocumentationMetadata, HMSoftwareUpdateDocumentation, HMFSoftwareVersion, _HMContext, HMAccessory, NSString;

@interface HMSoftwareUpdate : NSObject <HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {

	HMFUnfairLock* _lock;
	NSUUID* _identifier;
	NSUUID* _uniqueIdentifier;
	long long _state;
	HMSoftwareUpdateDocumentationMetadata* _documentationMetadata;
	HMSoftwareUpdateDocumentation* _documentation;
	id<HMSoftwareUpdateDelegate> _delegate;
	HMFSoftwareVersion* _version;
	unsigned long long _downloadSize;
	_HMContext* _context;
	HMAccessory* _accessory;

}

@property (nonatomic,retain) _HMContext * context;                                               //@synthesize context=_context - In the implementation block
@property (__weak) HMAccessory * accessory;                                                      //@synthesize accessory=_accessory - In the implementation block
@property (copy) NSUUID * identifier;                                                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMSoftwareUpdateDocumentationMetadata * documentationMetadata;              //@synthesize documentationMetadata=_documentationMetadata - In the implementation block
@property (__weak) id<HMSoftwareUpdateDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (copy,readonly) HMFSoftwareVersion * version;                                          //@synthesize version=_version - In the implementation block
@property (readonly) long long state;                                                            //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long downloadSize;                                            //@synthesize downloadSize=_downloadSize - In the implementation block
@property (getter=isDocumentationAvailable,readonly) BOOL documentationAvailable; 
@property (readonly) HMSoftwareUpdateDocumentation * documentation;                              //@synthesize documentation=_documentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HMSoftwareUpdateDelegate>)delegate;
-(void)setDelegate:(id<HMSoftwareUpdateDelegate>)arg1 ;
-(NSUUID *)identifier;
-(NSUUID *)uniqueIdentifier;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(HMFSoftwareVersion *)version;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(unsigned long long)downloadSize;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_registerNotificationHandlers;
-(id)messageDestination;
-(void)configureWithContext:(id)arg1 ;
-(id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 ;
-(id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 documentationMetadata:(id)arg4 ;
-(HMSoftwareUpdateDocumentationMetadata *)documentationMetadata;
-(void)_handleUpdatedState:(id)arg1 ;
-(void)_handleUpdatedDocumentationMetadata:(id)arg1 ;
-(void)_handleUpdatedDocumentation:(id)arg1 ;
-(BOOL)isDocumentationAvailable;
-(void)setDocumentationMetadata:(HMSoftwareUpdateDocumentationMetadata *)arg1 ;
-(void)requestDocumentation;
-(HMSoftwareUpdateDocumentation *)documentation;
-(void)setDocumentation:(HMSoftwareUpdateDocumentation *)arg1 ;
-(id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 ;
-(void)updateState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateDocumentationMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

