/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <DeviceManagement/NSCopying.h>
#import <DeviceManagement/NSSecureCoding.h>

@class NSString;

@interface DMFAppManagementInformation : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _state;
	unsigned long long _options;
	NSString* _redemptionCode;
	NSString* _unusedRedemptionCode;
	NSString* _displayName;

}

@property (nonatomic,copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned long long state;                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long options;                 //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * redemptionCode;                    //@synthesize redemptionCode=_redemptionCode - In the implementation block
@property (nonatomic,copy) NSString * unusedRedemptionCode;              //@synthesize unusedRedemptionCode=_unusedRedemptionCode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForState:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)redemptionCode;
-(void)setRedemptionCode:(NSString *)arg1 ;
-(NSString *)unusedRedemptionCode;
-(void)setUnusedRedemptionCode:(NSString *)arg1 ;
-(id)_stringForOptions:(unsigned long long)arg1 ;
@end

