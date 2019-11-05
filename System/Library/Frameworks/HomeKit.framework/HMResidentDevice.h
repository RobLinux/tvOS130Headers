/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMObjectMerge.h>
#import <HomeKit/NSSecureCoding.h>

@protocol HMResidentDeviceDelegate;
@class HMFUnfairLock, NSUUID, HMHome, HMDevice, _HMContext, NSString;

@interface HMResidentDevice : NSObject <HMObjectMerge, NSSecureCoding> {

	HMFUnfairLock* _lock;
	BOOL _enabled;
	NSUUID* _uniqueIdentifier;
	unsigned long long _status;
	HMHome* _home;
	NSUUID* _accountIdentifier;
	unsigned long long _capabilities;
	id<HMResidentDeviceDelegate> _delegate;
	HMDevice* _device;
	_HMContext* _context;
	NSUUID* _uuid;

}

@property (nonatomic,retain) _HMContext * context;                           //@synthesize context=_context - In the implementation block
@property (getter=isEnabled) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (assign) unsigned long long status;                                //@synthesize status=_status - In the implementation block
@property (assign) unsigned long long capabilities;                          //@synthesize capabilities=_capabilities - In the implementation block
@property (__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) NSUUID * accountIdentifier;                       //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (__weak) id<HMResidentDeviceDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * uniqueIdentifier;                         //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) HMDevice * device;                                      //@synthesize device=_device - In the implementation block
@property (copy,readonly) NSString * name; 
@property (getter=isCurrentDevice,readonly) BOOL currentDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HMResidentDeviceDelegate>)delegate;
-(void)setDelegate:(id<HMResidentDeviceDelegate>)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSUUID *)uuid;
-(unsigned long long)status;
-(_HMContext *)context;
-(BOOL)isEnabled;
-(void)setContext:(_HMContext *)arg1 ;
-(HMDevice *)device;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setAccountIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)accountIdentifier;
-(void)setCapabilities:(unsigned long long)arg1 ;
-(unsigned long long)capabilities;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(BOOL)isCurrentDevice;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)updatedEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
@end
