/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IPAPhotoAdjustmentPipeline : NSObject {

	NSString* _platform;
	unsigned long long _version;

}

@property (nonatomic,readonly) NSString * platform;                     //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
+(void)initialize;
+(id)current;
+(id)pipelineForPlatform:(id)arg1 version:(unsigned long long)arg2 ;
+(id)pipelineForVersion:(unsigned long long)arg1 ;
+(id)pipelineFromString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)description;
-(id)string;
-(unsigned long long)version;
-(NSString *)platform;
-(id)initWithPlatform:(id)arg1 version:(unsigned long long)arg2 ;
-(BOOL)isEqualToAdjustmentPipeline:(id)arg1 ;
@end

