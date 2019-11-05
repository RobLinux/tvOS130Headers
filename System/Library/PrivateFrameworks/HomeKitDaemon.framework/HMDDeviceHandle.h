/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HomeKitDaemon/NSCopying.h>
#import <HomeKitDaemon/NSSecureCoding.h>

@class _HMDDeviceHandle, HMDAccountHandle, NSString, NSUUID;

@interface HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding> {

	_HMDDeviceHandle* _internal;

}

@property (copy,readonly) _HMDDeviceHandle * internal;                   //@synthesize internal=_internal - In the implementation block
@property (copy,readonly) HMDAccountHandle * accountHandle; 
@property (copy,readonly) NSString * destination; 
@property (getter=isLocal,readonly) BOOL local; 
@property (getter=isGlobal,readonly) BOOL global; 
@property (copy,readonly) NSUUID * identifier; 
+(BOOL)supportsSecureCoding;
+(id)deviceHandleForDestination:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)destination;
-(BOOL)isLocal;
-(_HMDDeviceHandle *)internal;
-(id)initWithInternal:(id)arg1 ;
-(id)shortDescription;
-(id)attributeDescriptions;
-(BOOL)isGlobal;
-(HMDAccountHandle *)accountHandle;
@end
