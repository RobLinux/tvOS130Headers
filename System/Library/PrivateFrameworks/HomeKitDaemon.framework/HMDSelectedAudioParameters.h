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

@class HMDAudioCodecGroup, HMDAudioCodecParameters, HMDSelectedRTPParameters, NSNumber;

@interface HMDSelectedAudioParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	HMDAudioCodecGroup* _codecGroup;
	HMDAudioCodecParameters* _codecParameters;
	HMDSelectedRTPParameters* _rtpParameters;
	NSNumber* _comfortNoiseEnabled;

}

@property (nonatomic,copy,readonly) HMDAudioCodecGroup * codecGroup;                        //@synthesize codecGroup=_codecGroup - In the implementation block
@property (nonatomic,copy,readonly) HMDAudioCodecParameters * codecParameters;              //@synthesize codecParameters=_codecParameters - In the implementation block
@property (nonatomic,copy,readonly) HMDSelectedRTPParameters * rtpParameters;               //@synthesize rtpParameters=_rtpParameters - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * comfortNoiseEnabled;                         //@synthesize comfortNoiseEnabled=_comfortNoiseEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(HMDAudioCodecParameters *)codecParameters;
-(HMDAudioCodecGroup *)codecGroup;
-(HMDSelectedRTPParameters *)rtpParameters;
-(NSNumber *)comfortNoiseEnabled;
-(id)initWithCodecGroup:(id)arg1 codecParameter:(id)arg2 rtpParameter:(id)arg3 comfortNoiseEnabled:(id)arg4 ;
@end

