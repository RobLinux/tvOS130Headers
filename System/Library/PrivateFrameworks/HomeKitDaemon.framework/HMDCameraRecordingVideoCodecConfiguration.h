/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <HomeKitDaemon/HMDTLVCreateParse.h>
#import <HomeKitDaemon/NSSecureCoding.h>

@class HMDCameraRecordingVideoCodec, HMDCameraRecordingVideoCodecParameters, NSArray;

@interface HMDCameraRecordingVideoCodecConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	HMDCameraRecordingVideoCodec* _codec;
	HMDCameraRecordingVideoCodecParameters* _parameters;
	NSArray* _videoAttributes;

}

@property (nonatomic,copy,readonly) HMDCameraRecordingVideoCodec * codec;                             //@synthesize codec=_codec - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingVideoCodecParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoAttributes;                                        //@synthesize videoAttributes=_videoAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDCameraRecordingVideoCodecParameters *)parameters;
-(HMDCameraRecordingVideoCodec *)codec;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(NSArray *)videoAttributes;
-(id)initWithCodec:(id)arg1 codecParameters:(id)arg2 videoAttributes:(id)arg3 ;
@end

