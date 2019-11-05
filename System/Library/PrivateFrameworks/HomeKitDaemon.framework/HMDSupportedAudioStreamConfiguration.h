/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <HomeKitDaemon/HMDTLVCreateParse.h>
#import <HomeKitDaemon/NSSecureCoding.h>

@class NSNumber, NSDictionary;

@interface HMDSupportedAudioStreamConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	NSNumber* _supportsComfortNoise;
	NSDictionary* _codecConfigurations;

}

@property (nonatomic,copy,readonly) NSNumber * supportsComfortNoise;                 //@synthesize supportsComfortNoise=_supportsComfortNoise - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * codecConfigurations;              //@synthesize codecConfigurations=_codecConfigurations - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSDictionary *)codecConfigurations;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(NSNumber *)supportsComfortNoise;
-(id)initWithComfortNoise:(id)arg1 CodecConfigurations:(id)arg2 ;
@end

