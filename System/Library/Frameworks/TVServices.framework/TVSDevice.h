/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVServices/TVServices-Structs.h>
@interface TVSDevice : NSObject
+(id)systemVersion;
+(id)uniqueID;
+(id)productType;
+(id)deviceName;
+(BOOL)isActivated;
+(id)serialNumber;
+(BOOL)runningAnInternalBuild;
+(id)modelNumber;
+(id)systemReleaseType;
+(id)regionInfo;
+(id)systemBuildVersion;
+(id)getMobileGestaltString:(CFStringRef)arg1 ;
+(BOOL)supportsTouchRemote;
+(id)configurationInfo;
+(id)getMobileGestaltData:(CFStringRef)arg1 ;
+(id)marketingPartNumber;
+(id)HDMIFirmwareVersion;
+(unsigned long long)getMobileGestaltUnsignedLongLong:(CFStringRef)arg1 ;
+(BOOL)getMobileGestaltBoolean:(CFStringRef)arg1 ;
+(unsigned long long)_totalDiskCapacity;
+(id)uniqueIDData;
+(id)inverseUniqueID;
+(id)bonjourID;
+(id)userDeviceName;
+(BOOL)supports1080p;
+(BOOL)supportsUHDAndHDR;
+(BOOL)supportsBluetoothLECapablity;
+(BOOL)supportsApplicationStorage;
+(BOOL)shouldEnforceBluetoothBandwidthLimits;
+(BOOL)runningACustomerBuild;
+(unsigned long long)applicationCapacity;
+(unsigned long long)deviceCapacity;
+(BOOL)isFactoryActivated;
+(id)valueForNVRAMVariable:(id)arg1 ;
@end

