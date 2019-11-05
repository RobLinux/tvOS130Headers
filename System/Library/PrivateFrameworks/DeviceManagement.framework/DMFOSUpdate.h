/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <DeviceManagement/NSCopying.h>
#import <DeviceManagement/NSSecureCoding.h>

@class NSString;

@interface DMFOSUpdate : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isCritical;
	BOOL _restartRequired;
	BOOL _allowsInstallLater;
	NSString* _productKey;
	NSString* _humanReadableName;
	NSString* _productName;
	NSString* _version;
	NSString* _build;
	unsigned long long _downloadSize;
	unsigned long long _installSize;

}

@property (nonatomic,copy,readonly) NSString * productKey;                     //@synthesize productKey=_productKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * humanReadableName;              //@synthesize humanReadableName=_humanReadableName - In the implementation block
@property (nonatomic,copy,readonly) NSString * productName;                    //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSString * build;                          //@synthesize build=_build - In the implementation block
@property (nonatomic,readonly) unsigned long long downloadSize;                //@synthesize downloadSize=_downloadSize - In the implementation block
@property (nonatomic,readonly) unsigned long long installSize;                 //@synthesize installSize=_installSize - In the implementation block
@property (nonatomic,readonly) BOOL isCritical;                                //@synthesize isCritical=_isCritical - In the implementation block
@property (nonatomic,readonly) BOOL restartRequired;                           //@synthesize restartRequired=_restartRequired - In the implementation block
@property (nonatomic,readonly) BOOL allowsInstallLater;                        //@synthesize allowsInstallLater=_allowsInstallLater - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
-(NSString *)productName;
-(NSString *)build;
-(NSString *)humanReadableName;
-(BOOL)isCritical;
-(unsigned long long)downloadSize;
-(NSString *)productKey;
-(unsigned long long)installSize;
-(BOOL)restartRequired;
-(BOOL)allowsInstallLater;
-(id)initWithProductKey:(id)arg1 humanReadableName:(id)arg2 productName:(id)arg3 version:(id)arg4 build:(id)arg5 downloadSize:(unsigned long long)arg6 installSize:(unsigned long long)arg7 isCritical:(BOOL)arg8 restartRequired:(BOOL)arg9 allowsInstallLater:(BOOL)arg10 ;
@end

