/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoNameDataSource.h>
#import <HMFoundation/HMFSystemInfoMarketingInformationDataSource.h>
#import <HMFoundation/HMFSystemInfoSerialNumberDataSource.h>
#import <HMFoundation/HMFSystemInfoProductInfoDataSource.h>
#import <HMFoundation/HMFSystemInfoSoftwareVersionDataSource.h>
#import <HMFoundation/HMFSystemInfoWiFiDataSource.h>
#import <HMFoundation/HMFSystemInfoBluetoothLEDataSource.h>

@protocol HMFSystemInfoNameDataSourceDelegate, OS_dispatch_queue;
@class NSString, HMFMACAddress, HMFUnfairLock, HMFSoftwareVersion, NSObject;

@interface __HMFMobileGesaltDataSource : HMFObject <HMFSystemInfoNameDataSource, HMFSystemInfoMarketingInformationDataSource, HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource, HMFSystemInfoSoftwareVersionDataSource, HMFSystemInfoWiFiDataSource, HMFSystemInfoBluetoothLEDataSource> {

	HMFUnfairLock* _lock;
	BOOL _supportsBLE;
	id<HMFSystemInfoNameDataSourceDelegate> _delegate;
	NSString* _name;
	NSString* _model;
	NSString* _regionInfo;
	NSString* _serialNumber;
	long long _productPlatform;
	long long _productClass;
	long long _productVariant;
	HMFSoftwareVersion* _softwareVersion;
	HMFMACAddress* _WiFiInterfaceMACAddress;
	NSObject*<OS_dispatch_queue> _queue;
	MGNotificationTokenStructRef _notificationToken;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (readonly) MGNotificationTokenStructRef notificationToken;                   //@synthesize notificationToken=_notificationToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<HMFSystemInfoNameDataSourceDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                                  //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * regionInfo;                             //@synthesize regionInfo=_regionInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * serialNumber;                           //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) long long productPlatform;                              //@synthesize productPlatform=_productPlatform - In the implementation block
@property (nonatomic,readonly) long long productClass;                                 //@synthesize productClass=_productClass - In the implementation block
@property (nonatomic,readonly) long long productVariant;                               //@synthesize productVariant=_productVariant - In the implementation block
@property (nonatomic,copy,readonly) HMFSoftwareVersion * softwareVersion;              //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (copy,readonly) HMFMACAddress * WiFiInterfaceMACAddress;                     //@synthesize WiFiInterfaceMACAddress=_WiFiInterfaceMACAddress - In the implementation block
@property (readonly) BOOL supportsBLE;                                                 //@synthesize supportsBLE=_supportsBLE - In the implementation block
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<HMFSystemInfoNameDataSourceDelegate>)delegate;
-(void)setDelegate:(id<HMFSystemInfoNameDataSourceDelegate>)arg1 ;
-(long long)productClass;
-(NSString *)model;
-(NSString *)serialNumber;
-(MGNotificationTokenStructRef)notificationToken;
-(HMFSoftwareVersion *)softwareVersion;
-(NSString *)regionInfo;
-(long long)productPlatform;
-(long long)productVariant;
-(HMFMACAddress *)WiFiInterfaceMACAddress;
-(BOOL)supportsBLE;
@end

