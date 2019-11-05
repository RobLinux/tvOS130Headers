/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDNumberParser.h>
#import <HomeKitDaemon/NSSecureCoding.h>
#import <HomeKitDaemon/NSCopying.h>

@class NSNumber;

@interface HMDVideoResolution : HMDNumberParser <NSSecureCoding, NSCopying> {

	NSNumber* _imageWidth;
	NSNumber* _imageHeight;
	unsigned long long _resolutionType;

}

@property (nonatomic,copy,readonly) NSNumber * imageWidth;                     //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * imageHeight;                    //@synthesize imageHeight=_imageHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long resolutionType;              //@synthesize resolutionType=_resolutionType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithResolutions:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)imageWidth;
-(NSNumber *)imageHeight;
-(unsigned long long)resolutionType;
-(id)initWithTLVData:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithResolution:(unsigned long long)arg1 ;
-(void)_extractWidthAndHeight;
@end

